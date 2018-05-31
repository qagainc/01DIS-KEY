
#include "stdio.h"
#include "string.h"
#include "usart.h"	

#include "timer.h"
#include "led.h"
#include "key.h"


void TIM4_Int_Init(u16 arr,u16 psc)
{
    TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;
	NVIC_InitTypeDef NVIC_InitStructure;

	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM4, ENABLE); //时钟使能

	TIM_TimeBaseStructure.TIM_Period = arr; //设置在下一个更新事件装入活动的自动重装载寄存器周期的值	 计数到5000为500ms
	TIM_TimeBaseStructure.TIM_Prescaler =psc; //设置用来作为TIMx时钟频率除数的预分频值  10Khz的计数频率  
	TIM_TimeBaseStructure.TIM_ClockDivision = 0; //设置时钟分割:TDTS = Tck_tim
	TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;  //TIM向上计数模式
	TIM_TimeBaseInit(TIM4, &TIM_TimeBaseStructure); //根据TIM_TimeBaseInitStruct中指定的参数初始化TIMx的时间基数单位
 
	TIM_ITConfig(  //使能或者失能指定的TIM中断
		TIM4, //TIM2
		TIM_IT_Update ,
		ENABLE  //使能
		);
	NVIC_InitStructure.NVIC_IRQChannel =  TIM4_IRQn ;  //TIM3中断
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;  //先占优先级0级
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 3;  //从优先级3级
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE; //IRQ通道被使能
	NVIC_Init(&NVIC_InitStructure);  //根据NVIC_InitStruct中指定的参数初始化外设NVIC寄存器

	TIM_Cmd(TIM4, ENABLE);  //使能TIMx外设
							 
}



u8 key;

void TIM4_IRQHandler(void)   //TIM3中断
{
	
	//static u8  EnLed = 0;
	if (TIM_GetITStatus(TIM4, TIM_IT_Update) != RESET) //检查指定的TIM中断发生与否:TIM 中断源 
		{
		TIM_ClearITPendingBit(TIM4, TIM_IT_Update  );  //清除TIMx的中断待处理位:TIM 中断源 
		//LED1=!LED1;
     //  printf("timer is RUN....\r\n");  
		key=KEY_Scan(0);	
//			 switch(EnLed)
//			{
//				case 0: LED_1=1;LED_2=0;LED_3=0;LED_4=0 ; EnLed++; DIS_LED(TempData[0]);break;
//				case 1: LED_1=0;LED_2=1;LED_3=0;LED_4=0 ; EnLed++; DIS_LED(TempData[1]);break;
//				case 2: LED_1=0;LED_2=0;LED_3=1;LED_4=0 ; EnLed++; DIS_LED(TempData[2]);break;
//				case 3: LED_1=0;LED_2=0;LED_3=0;LED_4=1 ; EnLed++; DIS_LED(TempData[3]);break;
//				default:break;
//			}	
		} 			
}


