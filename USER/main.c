#define _SIMIRE_
#include "panel.h"

#include "sys.h"
#include "variable.h"
#include "led.h"
#include "delay.h"
#include "usart.h"
#include "key.h"  
//#include "24cxx.h" 
//#include "myiic.h"
#include "oled.h"
//#include "bmp.h"

   	
//要写入到24c02的字符串数组
const u8 TEXT_Buffer[]={"MiniSTM32 IIC TEST"};
const uint32_t  seg_com[] ={0x3F,0x06, 0x5B,0x4F, 0x66,0x6D,0x7D, 0x07,0x7F,0x6F};
#define SIZE2 sizeof(TEXT_Buffer)

void oled_test(void);

void SendData(unsigned char *str)
{
	while(*str!='\0')
	{
		USART_SendData(USART1, *str);
		str++;
	}
}


 int main(void)
 { 
	u8 key;
	u16 i=0;

//	u8 datatemp[SIZE2];
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);// 设置中断优先级分组2
	delay_init();	    	 //延时函数初始化	  
	uart_init(9600);	 	//串口初始化为9600
	LED_Init();		  		//初始化与LED连接的硬件接口	
	KEY_Init();				//按键初始化		 	
//	AT24CXX_Init();			//IIC初始化 
   OLED_Init();			//初始化OLED  
    OLED_Clear() ; 
    SendData("Start-Read-24C02....\r\n") ; 
      Dis.CurLen =6;
	while(1)
	{
		key=KEY_Scan(1);
        switch(key)
        {
            case KEY0_PRES :  SendData("KEY0 PRESS....\r\n") ;break; 
            case KEY1_PRES :  SendData("KEY1 PRESS....\r\n") ;break; 
            case KEY2_PRES : 
//                  Dis.CurOpt++;
			Dis.Opt[Dis.CurLvl]++;
			if(Dis.Opt[Dis.CurLvl]>Dis.CurLen-1)
				Dis.Opt[Dis.CurLvl]=0;
			if(Dis.Pos[Dis.CurLvl]<2)
				Dis.Pos[Dis.CurLvl]++;
			else
			{
				if(Dis.Opt[Dis.CurLvl]==0)
				Dis.Pos[Dis.CurLvl]=0;
			}         
             SendData("KEY2 PRESS....\r\n") ;
             break; 
            
            case KEY3_PRES :
//                Dis.CurOpt--;
            
			if(Dis.Opt[Dis.CurLvl]==0)
				Dis.Opt[Dis.CurLvl] = Dis.CurLen-1;
			else
				Dis.Opt[Dis.CurLvl]--;
			if(Dis.Pos[Dis.CurLvl]>0)
				Dis.Pos[Dis.CurLvl]--;
			else
			{
				if(Dis.Opt[Dis.CurLvl]==Dis.CurLen-1)
					Dis.Pos[Dis.CurLvl]=2;
			}
            
                SendData("KEY3 PRESS....\r\n") ;
            break; 
        }
        
	   i++;          
     DIS_LED(seg_com[i&0x0F]) ;           
     delay_ms(100);           
   
    oled_test();    
               
	}
}


