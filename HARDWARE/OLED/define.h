
#ifndef DEFINE_H_
#define DEFINE_H_

#define READ     0
#define WRITE    1

#define FORWARD  0
#define REVERSE  1

#define MAX_R_BUF    0x20
#define MAX_T_BUF 	  0x20
#define R_BUF_MASK   (MAX_R_BUF-1)
#define T_BUF_MASK   (MAX_T_BUF-1)


#define Lvl_0           0
#define Lvl_1           1
#define Lvl_2           2
#define Lvl_3           3
#define Lvl_4           4
#define Lvl_10          10
#define Lvl_SysErr      11
#define Lvl_12          12
#define Lvl_ComErr      13
#define Lvl_PW          14
#define Lvl_PosAdjEnd   16
#define Lvl_LoadEnd     17
#define Lvl_UpLoadEnd   18

#define MENULIMIT    15  //19 >>15 qagainc
#define JK_SpeedSet    0
#define JK_Speed       1
#define JK_BusV        2
#define JK_CurrentSet  3
#define JK_MotorTemp   4
#define JK_DriveTemp   5
#define JK_AI1         6
#define JK_AI2         7
#define JK_AI3         8
#define JK_AO1         9
#define JK_AO2         10
#define JK_PulseI      11
#define JK_PulseO      12
#define JK_DI          13
#define JK_DO          14
#define JK_Position    15
#define JK_OpenAngle   16
#define JK_SetCurrent  17
#define JK_RunTime     18

//��ʱʱ��=����ֵ*0.01s
#define SHORT_PRESS_TIME   15     //*0.03s
#define LONG_PRESS_TIME    26     //*0.03s
#define HOLD_TIME          28     //*0.01s ���ϡ����°�������ʱ�� ��ʱˢ��Һ����ʱ
#define JKHOLD_TIME        25     //*0.01s ���ϡ����°�������ʱ�� ��ʱˢ��Һ����ʱ

#define LCD_ON_TIME        165    //*0.01s Һ������ʱ���򿪱����ʱ��
#define LCD_OFF_TIME       35     //*0.01s Һ������ʱ���رձ����ʱ��
#define LED_ERR_TIME       50     //*0.01s ���ֹ���ʱ��LED��˸�ӳ�
#define LED_RUN_TIME       5      //*0.01s ��������ʱ��LED��˸�ӳ�
#define TX_JK_TIME         60     //*0.01s ��ؽ���ʱ����ʱ���ݸ���         0.5s
#define TX_READ_TIME       50     //*0.01s ״̬��ʾ����ʱ����ʱ���ݸ���     0.5s
#define STATE_TIME         200    //*0.01s ��ʱ��ѯ��ǰ����״̬             2s
#define INIT_TIME          200    //*0.01s �ȴ���������ʼ����ɵĵȴ�ʱ��   3s
#define RX_ERR_TIME        500   //*0.01s �Զ��ط���ʱ   100>>500 qagianc                  1s
#define STOP_DELAY         100    //*0.01s stop��һ�ΰ�������ʱ
#define DOWNLOAD_TIME      100    //*0.01s �ȴ���������ʼ����ɵĵȴ�ʱ��   3s1s
#define FlashAddr          0x1F000//0xC400 17c00
#define _nop() __asm("NOP")
#define BIT0 1
#define BIT1 (1<<1)
#define BIT2 (1<<2)
#define BIT3 (1<<3)
#define BIT4 (1<<4)
#define BIT5 (1<<5)
#define BIT6 (1<<6)
#define BIT7 (1<<7)
#endif
