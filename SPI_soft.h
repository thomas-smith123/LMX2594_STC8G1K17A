//#include "LMX2594.h"

#define CS_H P54=1
#define CS_L P54=0

#define SCK_H P32=1
#define SCK_L P32=0

#define MOSI_H P33=1
#define MOSI_L P33=0

//#define MUX P2^2

void Delay1000ms(void);						
void LMX2594_Init(void);
void LMX2594_TXData(char a,int data1);
unsigned int LMX2594_RXData(char address); 
