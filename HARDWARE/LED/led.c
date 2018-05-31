#include "led.h"

//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//ALIENTEK mini�SSTM32������
//LED��������	   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//�޸�����:2012/9/2
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) ������������ӿƼ����޹�˾ 2009-2019
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 	   

//��ʼ��PB5��PE5Ϊ�����.��ʹ���������ڵ�ʱ��		    
//LED IO��ʼ��
void LED_Init(void)
{
 
  GPIO_InitTypeDef GPIO_InitStructure;
  
  RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOC , ENABLE); 	    
  RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOA , ENABLE); 	
    
//=============================================================================
//LED -> PC13
//=============================================================================			 
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 
  GPIO_Init(GPIOC, &GPIO_InitStructure);
    
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_8|GPIO_Pin_11|GPIO_Pin_12;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 
  GPIO_Init(GPIOA, &GPIO_InitStructure);
    
}
 

void DIS_LED(uint32_t x)
{
   PAout(0) = (x>>0)&0x01;
   PAout(1) = (x>>1)&0x01;
   PAout(2) = (x>>2)&0x01; 
    PAout(3) = (x>>3)&0x01;
 PAout(8) = (x>>4)&0x01;
 PAout(11) = (x>>5)&0x01;
 PAout(12) = (x>>6)&0x01;
    
}

