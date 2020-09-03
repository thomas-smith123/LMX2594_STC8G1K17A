#include "SPI_soft.h"
#include<intrins.h> 
#include "stc8.h"
//#include "main.h"
//sbit    P22         =   P2^2;
//_LMX2594_REG lmx;
unsigned int LMX2594_Reg[113]={0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0001,
0x0000,
0x1D4C,
0xD450,
0x3FFF,
0x0010,
0x1D4C,
0x9FE1,
0xFFFC,
0x8888,
0x0004,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0x0000,
0xF000,
0x0001,
0x0000,
0xF000,
0x0000,
0x0000,
0x0C00,
0x00E7,
0x0000,
0x000C,
0x0800,
0x0000,
0x003F,
0x0001,
0x0001,
0xC350,
0x0000,
0x03E8,
0x0000,
0x01F4,
0x0000,
0x1388,
0x0000,
0x0322,
0x00A8,
0x0000,
0x0001,
0x1001,
0x0020,
0x0000,
0x0000,
0x0000,
0x0000,
0x0820,
0x0080,
0x0000,
0x4180,
0x0300,
0x0300,
0x07FD,
0xC8FF,
0x3F80,
0x0000,
0x0000,
0x0000,
0x0000,
0x0001,
0x0000,
0x0104,
0x0168,
0x0004,
0x0000,
0x1E21,
0x0393,
0x03EC,
0x318C,
0x318C,
0x0488,
0x0002,
0x0DB0,
0x0C2B,
0x071A,
0x007C,
0x0001,
0x0401,
0xD048,
0x27A5,
0x0064,
0x0140,
0x0164,
0x064F,
0x1E70,
0x4000,
0x5001,
0x0018,
0x10D8,
0x0604,
0x2000,
0x40B2,
0xC802,
0x00C8,
0x0A43,
0x0642,
0x0500,
0x0808,
0x2418};


void LMX2594_TXData(char a,int data1)
{
	
	char times=0;
	CS_L;
	
	SCK_L;
	_nop_();
	MOSI_L;//R/W=0 WRITE
	_nop_();
	SCK_H;
	_nop_();
	/**Address transmit**/
	for(times=0;times<=6;times++)
	{
		SCK_L;
		_nop_();
		if(((a<<times)&0x40)==0x40)
			MOSI_H;
		else
			MOSI_L;
		_nop_();
		SCK_H;
		_nop_();
	}
	/**Data transmit**/	
	for(times=0;times<=15;times++)//data rx
	{
		SCK_L;
		_nop_();
		if(((data1<<times)&0x8000)==0x8000)
			MOSI_H;
		else
			MOSI_L;
		_nop_();
		SCK_H;
		_nop_();
	}	
	_nop_();
	CS_H;	
}
unsigned int LMX2594_RXData(char address)
{
	int data1=0;
	char times;
//	char MUX;
	CS_L;
	//HAL_Delay(5);
	SCK_L;
	_nop_();
	MOSI_H;//R/W=1 Read
	_nop_();
	SCK_H;
	_nop_();
	/**Address transmit**/
	for(times=0;times<=6;times++)
	{
		SCK_L;
		_nop_();
		if(((address<<times)&0x40)==0x40)
			MOSI_H;
		else
			MOSI_L;
		_nop_();
		SCK_H;
		_nop_();
	}
	for(times=0;times<=15;times++)//data rx
	{
		SCK_L;
		_nop_();
		//MUX=P22;
		data1=data1|P22;
		if(times<15)
			data1<<=1;
		SCK_H;
		_nop_();
	}
	CS_H;	
	_nop_();
	return data1;
}	
void Delay1000ms()		//@24.000MHz
{
	unsigned char i, j, k;

	_nop_();
	_nop_();
	i = 122;
	j = 193;
	k = 128;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

void LMX2594_Init()
{
	unsigned int y=0,j;
	
	
	LMX2594_TXData(0,0x0002);//soft reset
	_nop_();	
	LMX2594_TXData(0,0x0000);//cancel reset	
	_nop_();_nop_();_nop_();	
	
//	VCO_Caliberation();
	for(y=113;y>6;y--)
	{
		LMX2594_TXData(113-y,LMX2594_Reg[y-1]);
		_nop_();	
		j=LMX2594_RXData(113-y);

		/*while(j!=LMX2594_Reg[y-1])
		{
			//WDT_CONTR=0x25;//启动看门狗
			LMX2594_TXData(113-y,LMX2594_Reg[y-1]);
			j=LMX2594_RXData(113-y);
		}
		//WDT_CONTR|= 0x10;//喂狗*/	
	}
//	WDT_CONTR= 0x00;//停止计数
	Delay1000ms();
 //delay_ms(10);  //??10ms

 //lmx.R0.FCAL_EN=1;   //??FCAL_EN=1????????R0,???VCO?????????
 LMX2594_TXData(0,0x241C);//lmx_wr(0,lmx.R0.REG0);
	
}
