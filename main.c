#include "stc8.h"
#include "SPI_soft.h"
#include<intrins.h> 
/*
	#define CS_H P54=1
	#define CS_L P54=0
	
	#define SCK_H P32=1
	#define SCK_L P32=0
	
	#define MOSI_H P33=1
	#define MOSI_L P33=0
	
	#define MUX P2^2 
*/
void GPIO_Config(void)
{
	P2M0=0x00;
	P2M1=0x00;

	/*P3M0=0x00;
	P3M1=0x00;

	P5M0=0x00;
	P5M1=0x00;*/
	/*P32 P33����*/
	P3M0=0x60;
	P3M1=0x00;
	/*P54����*/
	P5M0=0x10;
	P5M1=0x00;
	P3DR=0;
}
void Clock_Config(void)
{
	P_SW2=0x80;
	CKSEL = 0x00;//�ڲ��߾���IRC
	CLKDIV=0x00; //����Ƶ
	HIRCCR=0x80; //ʹ�ܸ߾���IRC
	while(HIRCCR&0x01!=0x01);//�ȴ�Ƶ���ȶ���HIRCST��־λ��1
	P3PU=0x08;
	P_SW2=0x00;
}
void main()
{
	GPIO_Config();

	//Delay1000ms();
	LMX2594_Init();
	PCON = IDL;
	while(1)
	{}
}