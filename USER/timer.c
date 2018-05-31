
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

	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM4, ENABLE); //ʱ��ʹ��

	TIM_TimeBaseStructure.TIM_Period = arr; //��������һ�������¼�װ�����Զ���װ�ؼĴ������ڵ�ֵ	 ������5000Ϊ500ms
	TIM_TimeBaseStructure.TIM_Prescaler =psc; //����������ΪTIMxʱ��Ƶ�ʳ�����Ԥ��Ƶֵ  10Khz�ļ���Ƶ��  
	TIM_TimeBaseStructure.TIM_ClockDivision = 0; //����ʱ�ӷָ�:TDTS = Tck_tim
	TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;  //TIM���ϼ���ģʽ
	TIM_TimeBaseInit(TIM4, &TIM_TimeBaseStructure); //����TIM_TimeBaseInitStruct��ָ���Ĳ�����ʼ��TIMx��ʱ�������λ
 
	TIM_ITConfig(  //ʹ�ܻ���ʧ��ָ����TIM�ж�
		TIM4, //TIM2
		TIM_IT_Update ,
		ENABLE  //ʹ��
		);
	NVIC_InitStructure.NVIC_IRQChannel =  TIM4_IRQn ;  //TIM3�ж�
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;  //��ռ���ȼ�0��
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 3;  //�����ȼ�3��
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE; //IRQͨ����ʹ��
	NVIC_Init(&NVIC_InitStructure);  //����NVIC_InitStruct��ָ���Ĳ�����ʼ������NVIC�Ĵ���

	TIM_Cmd(TIM4, ENABLE);  //ʹ��TIMx����
							 
}



u8 key;

void TIM4_IRQHandler(void)   //TIM3�ж�
{
	
	//static u8  EnLed = 0;
	if (TIM_GetITStatus(TIM4, TIM_IT_Update) != RESET) //���ָ����TIM�жϷ������:TIM �ж�Դ 
		{
		TIM_ClearITPendingBit(TIM4, TIM_IT_Update  );  //���TIMx���жϴ�����λ:TIM �ж�Դ 
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


