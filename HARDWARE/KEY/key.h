#ifndef __KEY_H
#define __KEY_H	 
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//ALIENTEK miniSTM32������
//������������	   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//�޸�����:2012/9/3
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) ������������ӿƼ����޹�˾ 2009-2019
//All rights reserved									  
//////////////////////////////////////////////////////////////////////////////////   	 


#define KEY0  PBin(6)   	
#define KEY1  PBin(7)	 
#define KEY2  PBin(8)	 
#define KEY3  PBin(9)

 

//#define KEY0  GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_11)//��ȡ����0---KEY0_PRES  RES
//#define KEY1  GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_12)//��ȡ����1-- KEY1_PRES NSS
//#define WK_UP   GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_13)//��ȡ����2 --WKUP_PRES SCK

#define KEY0_PRES	1		//KEY0  
#define KEY1_PRES	2		//KEY1 
#define KEY2_PRES	3		//WK_UP
#define KEY3_PRES   4

void KEY_Init(void);//IO��ʼ��
u8 KEY_Scan(u8 mode);  	//����ɨ�躯��					    
#endif
