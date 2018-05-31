#ifndef STRUCT_H_
#define STRUCT_H_
enum _Button
{
	NO_Press      = 0,//no press	
	ESC_SRelease  = 1,//ESC short time press then release
	ESC_LRelease  = 2,//ESC long time press then release
	JOG_Press     = 3,//JOG  press
	JOG_Release   = 4,//JOG release
	FWD_Release   = 5,//FWD release
	UP_Press  	  = 6,//UP press
	UP_Hold       = 7,//UP press and hold 
	DOWN_Press    = 8,//DOWN press
	DOWN_Hold     = 9,//DOWN press and hold 
	RUN_Release   = 10,//RUN release
	ENTER_Press   = 11,//ENTER press
	SHIFT_Press   = 12,//SHIFT press
	SHIFT_Hold    = 13,//SHIFT press and hold
	STOP_Press    = 14,//STOP press
	ENTER_SRelease= 15,//ENTER short time press then release
	ENTER_LRelease= 16,//ENTER long time press then release
	UP_SRelease   = 17,
	UP_LHold      = 18,
	UP_LLHold     = 19,
	UP_LLLHold    = 20,
	UP_LLLLHold   = 21,
	DOWN_SRelease = 22,
	DOWN_LHold    = 23,
	DOWN_LLHold   = 24,
	DOWN_LLLHold  = 25,
	DOWN_LLLLHold = 26,
	JKDOWN_Hold   = 27,//DOWN press and hold long time
	JKUP_Hold     = 28,//UP press and hold long time
	SHIFT_Release = 29
};
enum _ErrType
{
	NoError     = 0,   //no error
	ComError    = 1,   //communication error
	SysError    = 2    //system error
};
enum _ModbusFunCode
{
	ReadReg      = 3,    //read registers from slave
	WriteOneReg  = 6,    //write single register
	WriteMultReg = 16    //write multiple register
};
enum _MODBUS_STATE
{
	HEADER_SEARCH  = 0,  //search valid message header;
	WAIT_INFO_COME = 1,  //wait full information bytes;
    WAIT_DATA_COME = 2,  //wait full data bytes;
	HANDLE_MSG     = 3,  // handle whole message;
	SEND_MSG       = 4,  //for slave, this state will happen only when the message is too large and one frame can't finish it; for master, it is default state;
    WAIT_TRFANSMIT = 5,  //the state is valid for half-duplex,WaitAnswer=6wait answer from slave
	IDLE           = 6,	 //ModBus idle
	Err            = 7
};
enum _Interface
{
	MONITOR        = 0,	//��ؽ���
	READ_DATA      = 1, //ʵʱ��ȡ������ʾ
	READ_LIST1     = 2,	//ʵʱ��ȡ���ݣ����б���ѡ��һ����ʾ
	READ_LIST2     = 3, //ʵʱ��ȡ���ݣ����б���ѡ��һ����ʾ
	READ_LIST3     = 4,
	READ_DIO       = 5,
	READ_P_ID      = 6,	//��Ʒ����
	SYS_ERROR      = 7,
	COM_ERROR      = 8,
	MENU           = 9,
	SUBMENU        = 10,
	GENERAL_LIST   = 11, //ͨ���б���ʾ
	SET_LIST_BIT   = 12, //����,�б���ʾ��ֻ�޸ļĴ�����һλ
    SET_LIST_UNION = 13, //���ã��б���ʾ������һ���˵�
	SET_SHIFT      = 14, //���ã���λ
	SET_LIST_TEST  = 15, //���ã��б���ʾ������һ���˵�
	TEXT           = 16,
	ACCESS		   = 17,
	SYSINIT        = 18, //ϵͳ��ʼ��
	PASSWORD       = 19,
	LoadEnd        = 20,
	LockScreen     = 21, //����ѡ��
	CustomMenu     = 22, //��ز����趨
	SET_BIT   	   = 23,
	SET_SHIFTFive  = 24
};
enum _Authority
{
	User       = 0,
	Administer = 1,
    Engineer   = 2
};

struct RunMode2_
{
	unsigned int rsvl:1;
	unsigned int ZreoSpeed  :1;
	unsigned int SpeedLimit :1;
    unsigned int TroqueLimit :1;
    unsigned int Icompen_En :1;
	unsigned int rsv2:11;
} ;
union _RunMode2
{
	unsigned int             ALL;
	struct RunMode2_ BIT;
};

struct _RunModeSet     //����ģʽ����
{
   // union _RunMode RunMode;
	unsigned int CtrSrc;    	   //0x0000 Control source;           0:panel, 1:external IO, 2:field bus, 3: CAN bus
    unsigned int ControlMode;    //0x0001 ����ģʽ qagainc+ 
	unsigned int DirSet;        //0x0001 Rotate direction set;     0:only forward, reverse is forbidden, 1: only reverse; 2: panel control; 3: direction switching automatically according to AutoSet
	//unsigned int StopLock;      //0x0002 Locked when stopped.      0:No  1: Yes
	unsigned int FwdStart;      //0x0003 Forward start mode set;   0:start motor after motor is stopped; 1:start immediately; 2: brake before starting
	unsigned int RevStart;      //0x0004 Reverse start mode set;   0:start motor after motor is stopped; 1:start immediately; 2: brake before starting
	unsigned int FwdStop;       //0x0005 Forward stop mode set;    0:free stop,1:lengthen Stop, stop slow with motor driving; 2: BrakeStop, braking motor
	unsigned int RevStop;       //0x0006 Reverse stop mode set;    0:free stop,1:lengthen Stop, stop slow with motor driving; 2: BrakeStop, braking motor
	//unsigned int SpeedSetSrc;   //0x0007 Speed set source ;        0:panel(not store)1:panel(store) 2:I/O  3:SCI
	unsigned int StopKeyFun;    //0x0008 ��ͣ����ѡ��
	unsigned int BrakeSel;	   //�ƶ���ʽѡ��
    //unsigned int SpeedLimit;
   // unsigned int TorqueLimit;
	//unsigned int Icompen_En;	   //���Բ���ʹ�� 
    union _RunMode2 RunMode2;
};
struct _GivenSource
{
   unsigned int GivenSpeed;
   unsigned int GivenSpeed1;
   unsigned int GivenSpeed2;
   unsigned int GivenSpeed3;
   unsigned int GivenSpeed4;

};
struct _RunParaSet    //���в�������
{
	unsigned int FwdSpeed;      //0x0020 Forward Run speed set;     0.1RPM   0-65535
	unsigned int RevSpeed;      //0x0021 Reverse Run speed set      0.1RPM   0-65535
	unsigned int RisingTime;    //0x0029 ����ʱ��                            1S       1-3600
	unsigned int FallingTime;   //0x002A ͣ��ʱ��                          1S       1-3600	
	unsigned int JogFwdSpeed;   //0x0022 Forward JOG Run speed set; 0.1RPM   0-65535
	unsigned int JogRevSpeed;   //0x0023 Forward JOG Run speed set; 0.1RPM   0-65535
	unsigned int JogRisingTime; //0x002B �㶯����ʱ��                 1S       1-3600
	unsigned int JogFallingTime;//0x002C �㶯ͣ��ʱ��                 1S       1-3600
	unsigned int StartTimeSet;  //qidong dianliu 
	unsigned int LockCurrent;   //0x0028 ��ס����                             0.1A     0-8192
	unsigned int ChangeDeadTime; //huanxiang shiqu shijian
	unsigned int SpeedUpLimitTime;
	unsigned int SpeedDownLimitTime;  
  	unsigned int TorqueSet;     //0x0027 ת�ظ���                             0.1N.m   0-65535  
  	unsigned int SpeedLimitSet;
    unsigned int FwdAngle;
    unsigned int RevAngle;
    unsigned int FwdTorqueSet; 
    unsigned int RevTorqueSet; 
    
	//unsigned int BleedCurrent;  //0x0024 й�ŵ�������               0.1A     0-1024
	//unsigned int BleedUpVolt;   //0x0025 �ƶ�������ѹ����           0.1V     0-1023
	//unsigned int BleedResist;   //0x0026 й�ŵ�������               0.1ohm
	//unsigned int JumpSpeed;     //0x002D ��Ծת��                          1S       0-�ת��
	//unsigned int JumpRange;     //0x002E ��Ծ��Χ                          1S       0-�ת��
	 unsigned int AdjStep;       //0x002F UP/DOWN���ڲ���            0.1rpm/s 0-3000
};

struct RotateMode_
{
	unsigned int AutoSet   :1;
	unsigned int TimeSet    :1;
	unsigned int FwdTimeSet    :1;
	unsigned int RevTimeSet    :1;
	unsigned int FwdAngleSet   :1;
	unsigned int revAngleSet   :1;
	unsigned int FwdAutoSet   :1;
	unsigned int RevAutoSet   :1;
//	unsigned int Brake      :1;
//	unsigned int ProlongStop:1;
//	unsigned int DualDir    :1;
	unsigned int rsv        :8;
} ;
struct Control_
{
	unsigned int rsvl:3;
	unsigned int M_S   :1;//CAN�����ӷ�ʽ
	//unsigned int rsv1:7;
	unsigned int SynEn    :1;//CAN ϵͳʹ��
	unsigned int rsv2:11;
} ;

union _RotateMode
{
	unsigned int                ALL;
	struct RotateMode_ BIT;
};

union _Control
{
	unsigned int             ALL;
	struct Control_ BIT;
};


//07 
struct _AutoModeSet
{
	union _RotateMode RotateMode;//0x0040 ��
//	unsigned int FwdAngle; //forward angle
//	unsigned int RevAngle; //reverse angle
	unsigned int FwdTime;  //forward time
	unsigned int RevTime;  //reverse time                  //0x0044 ��
//	unsigned int FwdSpead; //forward speed
//	unsigned int RevSpead; //reverse speed  
};
struct _ForgePara //05
{
	unsigned int ForgeNum0;//number of forge			0x0050
	unsigned int ForgeAngle0;//unit is degree
	unsigned int ForgeSpeed0;//unit is 0.1rpm
	unsigned int ReturnSpeed0;//unit is 0.1rpm
	unsigned int IntervalTime0;//interval between two cycle, unit is 0.1s
	unsigned int ForgeTorque0;//��ѹת��0
	unsigned int ForgeNum1;//number of forge
	unsigned int ForgeAngle1;//unit is degree
	unsigned int ForgeSpeed1;//unit is 0.1rpm
	unsigned int ReturnSpeed1;//unit is 0.1rpm
	unsigned int IntervalTime1;//interval between two cycle, unit is 0.1s
	unsigned int	ForgeTorque1;//��ѹת��1
	unsigned int ForgeNum2;//number of forge
	unsigned int ForgeAngle2;//unit is degree
	unsigned int ForgeSpeed2;//unit is 0.1rpm
	unsigned int ReturnSpeed2;//unit is 0.1rpm
	unsigned int IntervalTime2;//interval between two cycle, unit is 0.1s
	unsigned int ForgeTorque2;//��ѹת��2
	unsigned int ForgeNum3;//number of forge
	unsigned int ForgeAngle3;//unit is degree
	unsigned int ForgeSpeed3;//unit is 0.1rpm
	unsigned int ReturnSpeed3;//unit is 0.1rpm
	unsigned int IntervalTime3;//interval between two cycle, unit is 0.1s
	unsigned int ForgeTorque3;//��ѹת��3
	unsigned int ForgeNum4;//number of forge
	unsigned int ForgeAngle4;//unit is degree
	unsigned int ForgeSpeed4;//unit is 0.1rpm
	unsigned int ReturnSpeed4;//unit is 0.1rpm
	unsigned int IntervalTime4;//interval between two cycle, unit is 0.1s
	unsigned int ForgeTorque4;//��ѹת��4			0x006D
};
struct _ForgeSpeed //05
{
	unsigned int ForgeSpeed0;//unit is 0.1rpm
    unsigned int ForgeSpeed1;//unit is 0.1rpm
    unsigned int ForgeSpeed2;//unit is 0.1rpm
    unsigned int ForgeSpeed3;//unit is 0.1rpm
    unsigned int ForgeSpeed4;//unit is 0.1rpm
    unsigned int ForgeSpeed5;//unit is 0.1rpm
    unsigned int ForgeSpeed6;//unit is 0.1rpm
    unsigned int ForgeSpeed7;//unit is 0.1rpm	
};
struct _CANCom
{
	//union _Control Control;//0x01D0 ��
	unsigned int Knot;//�ڵ�
	unsigned int Bps;//������
	unsigned int Refresh;//CAN��ʱʱ��
};
struct _SystemPara
{
//	unsigned int P_ID0;           	//0x0080 ��	��Ʒ����
//	unsigned int P_ID1;
//	unsigned int Temp1;				//����¶Ȳ���1
//	unsigned int Temp2;
//	unsigned int Temp3;
//	unsigned int Passcode;			//����Ա����	00000-99999
	unsigned int CarrierFrequency;	//�ز�Ƶ��	1-20000	��λ:Hz
	unsigned int FunOpenTemp;		//ɢ�������ȿ����¶� 0-100.0 ��λ:0.1��
	unsigned int OverSpeed;			//���ٱ����ٶ�	0-3276.7	
	//unsigned int OverVoltage;		//ֱ��ĸ�߹�ѹֵ	200-1600.0 ��λ��0.1V
    unsigned int LowVoltage ;		//ֱ��ĸ��Ƿѹֵ	200-1600.0 ��λ��0.1V
	unsigned int OverTorque ;		//��ת�ؼ��ֵ	100-150	��λ��1%
	unsigned int OverTorqueTime ;	//��ת������ʱ��	5-600.0	��λ��0.1s   
 	unsigned int BrakeCurrentRatio ;	//�ƶ���������	10-80	��λ��1%   
	unsigned int AutoStartNum;		//����������	0-10
	unsigned int StopRunTime;		//˲ͣ����ʱ��	0.0-2.0 ��λ��0.1s
	unsigned int P1;					//ת��PI���ڱ����趨1
	unsigned int I1;					//ת��PI���ڻ����趨1
	unsigned int RotaryInertia;		//ת������			��λ��0.01kg.m2
    unsigned int BleedCurrent;       //xiefang dianliu
    unsigned int BleedResister;      //xiefang dianzhu
    unsigned int BrakeVoltage;      //zhidong qidong dianya
 

	unsigned int P_ID0;           	//0x0080 ��	��Ʒ����
	unsigned int P_ID1;
//	unsigned int RunTime;			//�����������ʱ��	200-65535	��λ��Сʱ
//	unsigned int LockKey;			//����ʹ��	0����ֹ������1���������̣������������
//	unsigned int MotorFunOpenTemp;	//������ȿ����¶�	0-100.0	��λ��0.1��
//	unsigned int OverTemp;			//���������ȱ����¶�	0-120.0	��λ��0.1��
//	unsigned int MotorOverTemp;		//������ȱ����¶�	0-180.0	��λ��0.1��
//	unsigned int PIstrategy;			//ת��PI���Ʒ�ʽ
//	unsigned int P2;
//	unsigned int I2;
//	unsigned int P3;
//	unsigned int I3;
//	unsigned int P4;
//	unsigned int I4;
//	unsigned int SwitchPara1;		//�л�����ת��1
//	unsigned int SwitchPara2;
//    unsigned int SwitchPara3;
//	unsigned int Test;			//��������
//	unsigned int DO;				//�ڲ��������������
//	unsigned int ExtDO ;			//�ⲿ�������������
//	unsigned int BusVoltage ;   //0x00A5 ��	ʵ��ĸ�ߵ�ѹ����	��λ��0.1V
};
struct _S_Curve
{
	unsigned int UpStartTime;   //0x00B0 ��
	unsigned int UpEndTime;
	unsigned int DownStartTime;
	unsigned int DownEndTime;
	unsigned int UpStartRatio;
	unsigned int UpEndRatio;
	unsigned int DownStartRatio;
	unsigned int DownEndRatio;  //0x00B7 ��
};
struct _ParaRead
{
	unsigned int DIState;       	//0x00C0 �� ����������״̬
	unsigned int DOState;		//���������״̬
	unsigned int AI1State;		//ģ����1·����		0-10	��λ��0.1V(����ģʽ 0.5mA)
	unsigned int AI2State;		//ģ����2·����		0-10	��λ��0.1V(����ģʽ 0.5mA)
	unsigned int AI3State;		//ģ����3·����		0-10	��λ��0.1V(����ģʽ 0.5mA)
	unsigned int AO1State;		//ģ����1·���		��λ��0.1mA
	unsigned int AO2State;		//ģ����2·���		��λ��0.1mA
	unsigned int InPulseState;	//��������Ƶ��		0-50kHz	��λ��Hz
	unsigned int OutPulseState;  //0x00C8 ��	�������Ƶ��		0-50kHz	��λ��Hz
};
struct _Fault1
{
	unsigned int D0;    	     	//0x00D0 ��	���ϲ���1
	signed char D1;
	unsigned int D2;				//���ϼ�¼���к�
	unsigned int D3;				//���Ϸ���ʱ����ת��
	unsigned int D4;				//���Ϸ���ʱ����
	unsigned int D5;				//���Ϸ���ʱĸ�ߵ�ѹ
	unsigned int D6;				//���Ϸ���ʱ����״̬��־
	unsigned int D7;          	//0x00D7 ��	���Ϸ���ʱ�ۼ�����ʱ��
};
struct _Fault2
{
	unsigned int DA;    	     	//0x00DA ��	���ϲ���2
	signed char DB;
	unsigned int DC;				//���ϼ�¼���к�
	unsigned int DD;				//���Ϸ���ʱ����ת��
	unsigned int DE;				//���Ϸ���ʱ����
	unsigned int DF;				//���Ϸ���ʱĸ�ߵ�ѹ
	unsigned int E0;				//���Ϸ���ʱ����״̬��־
	unsigned int E1;          	//0x00E1 ��	���Ϸ���ʱ�ۼ�����ʱ��
};

struct _ExFunPara
{
	//unsigned int TerminalCtr;   	//0x0100	�˿ڿ��Ʒ�ʽ 	0��������1,1��������2:2��������1,3��������2
	unsigned int SpeedCtrSrc;   	//0x0101
	unsigned int AssistCtrSrc;  	//0x0102	ת�ٸ���������ʽ
	unsigned int AssistRange;   	//0x0103	ת�ٸ���������Χ	-�ת��-�ת��	��λ��0.1rpm
	unsigned int AssistRate;    	//0x0104	ת�ٸ�����������ϵ��	0-100	��λ��0.1%
	unsigned int Relation;      	//0x0105	ת�ٸ���������ϵ	0����+����1����-����2��max{������}��3��min{������}��4�����л�
};

struct _TerminalFunDef
{
    unsigned int TerminalCtr; 	//�˿ڿ��Ʒ�ʽ
    unsigned int DI1Function;    //0x0110 ��	DI1����ѡ��
	unsigned int DI2Function;
	unsigned int DI3Function;
	unsigned int DI4Function;
    
	unsigned int DI14Function;
	unsigned int DI15Function;
    unsigned int DI16Function;  
	unsigned int DO1Function;	//DO1����ѡ��  
	unsigned int DO2Function; 
    
	unsigned int DI5Function;
	unsigned int DI6Function;
	unsigned int DI7Function;
    unsigned int DI8Function;    //0x0110 ��	DI1����ѡ��
	unsigned int DI9Function;
	unsigned int DI11Function;
	unsigned int DI12Function;
	unsigned int DI13Function;

	unsigned int DO3Function;
	unsigned int DO4Function;
	unsigned int DO5Function;	//DO1����ѡ��  
	unsigned int DO6Function;
	unsigned int DO7Function;
	unsigned int DO8Function;
    
	unsigned int AO1Function;
	unsigned int AO2Function;
    
//	unsigned int PulseFunction;   //0x011d ��	�����������ѡ��
};
//qagainc++ 20160318
struct DiVirtualIn_
{
	unsigned int rsvl:13;
	unsigned int DI4Vir  :1;
	unsigned int DI5Vir  :1;
	unsigned int DI6Vir  :1;
} ;

union _DiVirtualIn
{
	unsigned int             ALL;
	struct DiVirtualIn_ BIT;
};

struct _TerminalParaCfg
{
	unsigned int MaxSpeed;        	//0x0120 ��	ת������	0-���ת��	��λ��0.1rpm
	unsigned int MinSpeed;		 	//ת������		0-����ת��	��λ��0.1rpm
	unsigned int AI_FilterTime;	 	//AI�����˲�ʱ��			0.01-10.00	��λ��0.01s
    union _DiVirtualIn DiVirtualIn;   
	unsigned int DI_FilterTime;		//DI�����˲�ʱ��			0.01-10.00	��λ��0.01s
    unsigned int DO_Delay;			//DO�����ʱ����			0.1-10.0	��λ��0.1s
    
	unsigned int AI1_Min;			//AI1��С����			0-10.00 	��λ��0.01V
	unsigned int AI1_MinRatio;		//AI1��С�����Ӧ�趨		0-100.0		��λ��0.1%
	unsigned int AI1_Mid1;			//AI1�յ�1����			0-10.00 	��λ��0.01V
	unsigned int AI1_Mid1Ratio;		//AI1�յ�1�����Ӧ�趨	0-100.0		��λ��0.1%
	unsigned int AI1_Mid2;			//AI1�յ�2����			0-10.00 	��λ��0.01V
	unsigned int AI1_Mid2Ratio;		//AI1�յ�2�����Ӧ�趨	0-100.0		��λ��0.1%
	unsigned int AI1_Max;			//AI1�������			0-10.00 	��λ��0.01V
	unsigned int AI1_MaxRatio;		//AI1��������Ӧ�趨		0-100.0		��λ��0.1%
    
	unsigned int AI2_Min;		//0x0170 AI2��С����	0-10.00 	��λ��0.01V
	unsigned int AI2_MinRatio;	//AI2��С�����Ӧ�趨		0-100.0		��λ��0.1%
	unsigned int AI2_Mid1;		//AI2�յ�1����			0-10.00 	��λ��0.01V
	unsigned int AI2_Mid1Ratio;	//AI2�յ�1�����Ӧ�趨	0-100.0		��λ��0.1%
	unsigned int AI2_Mid2;		//AI2�յ�2����			0-10.00 	��λ��0.01V
	unsigned int AI2_Mid2Ratio;	//AI2�յ�2�����Ӧ�趨	0-100.0		��λ��0.1%
	unsigned int AI2_Max;		//AI2�������			0-10.00 	��λ��0.01V
	unsigned int AI2_MaxRatio;	//AI2��������Ӧ�趨		0-100.0		��λ��0.1%    

	signed char AI3_Min;		//AI3��С����			0-10.00 	��λ��0.01V
	signed char AI3_MinRatio;	//AI3��С�����Ӧ�趨		0-100.0		��λ��0.1%
	signed char AI3_Mid1;		//AI3�յ�1����			0-10.00 	��λ��0.01V
	signed char AI3_Mid1Ratio;	//AI3�յ�1�����Ӧ�趨	0-100.0		��λ��0.1%
	signed char AI3_Mid2;		//AI3�յ�2����			0-10.00 	��λ��0.01V
	signed char AI3_Mid2Ratio;	//AI3�յ�2�����Ӧ�趨	0-100.0		��λ��0.1%
	signed char AI3_Max;		//AI3�������			0-10.00 	��λ��0.01V
	signed char AI3_MaxRatio;	//0x017F AI2��������Ӧ�趨		0-100.0		��λ��0.1%
    
	//unsigned int Pulse_FilterTime;	//���������˲�ʱ��		0.1-10.0	��λ��0.1s
	unsigned int Pulse_Min;			//������С����			0��1-50		��λ��0.1kHz
	unsigned int Pulse_MinRatio;		//������С�����Ӧ�趨		-100-100	��λ��0.1%
	unsigned int Pulse_Max;			//�����������			0��1-50		��λ��0.1kHz
	unsigned int Pulse_MaxRatio;		//������������Ӧ�趨		-100-100	��λ��0.1%
    

//	unsigned int Pulse_Delay;		//���������ʱ����		0.1-10.0	��λ��0.1s
//	unsigned int AO_Delay;			//AO�����ʱ����			0.1-10.0	��λ��0.1s
//	unsigned int AO1_Zero;			//AO1��ƫ				-100.0-100.0	��λ��0.1%
//	unsigned int AO1_Gain;			//AO1����				-2.00-2.00	��λ��0.01
//	unsigned int AO2_Zero;			//AO2��ƫ				-100.0-100.0	��λ��0.1%
//	unsigned int AO2_Gain;			//AO2����				-2.00-2.00	��λ��0.01
//	unsigned int Pulse_Range;		//����������Χ		0��1-50		��λ��0.1kHz
//	unsigned int Pulse_Centre;		//�������Ƶ�����ĵ�		0�������ĵ㣬1�������ĵ㣬Ƶ�ʴ������Ƶ��/2Ϊ�������2�������ĵ㣬Ƶ��С�����Ƶ��/2Ϊ�����
//	unsigned int DeadZone_Time;  	//0x013A ��	����ת����ʱ��	0-3000.0	��λ��0.1s
};
struct _TerminalAICfg
{
	unsigned int AI2_Min;		//0x0170 AI2��С����	0-10.00 	��λ��0.01V
	unsigned int AI2_MinRatio;	//AI2��С�����Ӧ�趨		0-100.0		��λ��0.1%
	unsigned int AI2_Mid1;		//AI2�յ�1����			0-10.00 	��λ��0.01V
	unsigned int AI2_Mid1Ratio;	//AI2�յ�1�����Ӧ�趨	0-100.0		��λ��0.1%
	unsigned int AI2_Mid2;		//AI2�յ�2����			0-10.00 	��λ��0.01V
	unsigned int AI2_Mid2Ratio;	//AI2�յ�2�����Ӧ�趨	0-100.0		��λ��0.1%
	unsigned int AI2_Max;		//AI2�������			0-10.00 	��λ��0.01V
	unsigned int AI2_MaxRatio;	//AI2��������Ӧ�趨		0-100.0		��λ��0.1%
	signed char AI3_Min;		//AI3��С����			0-10.00 	��λ��0.01V
	signed char AI3_MinRatio;	//AI3��С�����Ӧ�趨		0-100.0		��λ��0.1%
	signed char AI3_Mid1;		//AI3�յ�1����			0-10.00 	��λ��0.01V
	signed char AI3_Mid1Ratio;	//AI3�յ�1�����Ӧ�趨	0-100.0		��λ��0.1%
	signed char AI3_Mid2;		//AI3�յ�2����			0-10.00 	��λ��0.01V
	signed char AI3_Mid2Ratio;	//AI3�յ�2�����Ӧ�趨	0-100.0		��λ��0.1%
	signed char AI3_Max;		//AI3�������			0-10.00 	��λ��0.01V
	signed char AI3_MaxRatio;	//0x017F AI2��������Ӧ�趨		0-100.0		��λ��0.1%
};
struct _MultiStageSpeed
{
	unsigned int Stage0;         //0x0140 �� ���߶� 0	�����ת��--�����ת��	��λ��0.1rpm
	unsigned int Stage1;
	unsigned int Stage2;
	unsigned int Stage3;
	unsigned int Stage4;
	unsigned int Stage5;
	unsigned int Stage6;
	unsigned int Stage7;         //0x0147 ��
};

struct _ProcessPID
{
	unsigned int SetSrc;         //0x0160 ��	����PID������ʽ	0��PID���ָ�����1��AI1��2��AI2��3��AI3��4����������
	unsigned int SetGain;		//����PID���ָ���	0.0-100	��λ��0.1%
	unsigned int FeedMode;		//����PID������ʽ
	unsigned int ActMode;		//0x0166 ��	����PID������ʽ	0�������ã�1��������	
	unsigned int P_gain;			//����PID��������	0-100.0	��λ��0.1
	unsigned int I_time;			//����PID����ʱ��	0-100.0	��λ��0.1s
	unsigned int D_time;			//����PID΢��ʱ��	0-100.0	��λ��0.1s

};

struct _CommPara
{
	unsigned int AddrCode;       //0x01F0 ��ͨ�ŵ�ַ��
	unsigned int Bode;			//������
	unsigned int Check;			//0x01F2 �����鷽ʽ
	unsigned int ReplyDelay;		//��ʱʱ��		��λ1ms
//	unsigned int CAN_Control;
};

struct _RealtimeInfo   	//ʵʱ��Ϣ
{
	unsigned int SystemState;   	//0x0200 ����״̬
	unsigned int Speed;         	//0x0201 ת��		��λ:0.1rpm
	unsigned int Toque;        	//0x0202 ת��		��λ:N/m
	unsigned int blank0;		   	//0x0203 reserve
	unsigned int DCVolt;        	//0x0204 ĸ�ߵ�ѹ	��λ��0.1V
	unsigned int Position;      	//0x0205 ת��λ��	��λ��0.1��
	unsigned int PhaseA_Temp;   	//0x0206 A���¶�	��λ��0.1��
	unsigned int PhaseB_Temp;   	//0x0207 B���¶�	��λ��0.1��
	unsigned int PhaseC_Temp;   	//0x0208 C���¶�	��λ��0.1��
    unsigned int blank1 ;       	//0x0209 reserve
	unsigned int PhaseA_I;      	//0x020A A�����	0-65535	��λ��0.1A
	unsigned int PhaseB_I;      	//0x020B B�����	0-65535	��λ��0.1A
	unsigned int PhaseC_I;      	//0x020C C�����	0-65535	��λ��0.1A
	unsigned int DriveTemp ;     //0x020D �������¶�		0-1000	��λ��0.1��
	unsigned int AngleOn;	   	//0x020E ��ͨ��	��λ��0.1��
	unsigned int AngleOff;      	//0x020F �ضϽ�	��λ��0.1��
	unsigned int DesireDAC;     	//0x0210 ��������	0-65535	��λ��0.1A
	unsigned int blank3;	       	//0x0211 reserve
	unsigned int SpeedAdj_P;    	//0x0212 ת��PI���ڵ�P
	unsigned int SpeedAdj_I;    	//0x0213 ת��PI���ڵ�I
	unsigned int RunHour;       	//0x0214 ����ۼ�����ʱ��		0-65535	��λ��Сʱ
	unsigned int DesireSpeed;   	//0x0215 �趨���ٶ�	0-30000	��λ��0.1rpm
	unsigned int ERr1;   	    //0x0216 ��ǰ���ϲ�����16λ
	unsigned int ERr2;   	    //0x0217 ��ǰ���ϲ�����16λ
};

struct _Product
{
	unsigned int RatedPower;     //0x0300 �������  		��λ�� 0.1kW
	unsigned int RatedVoltage;	//0x0301 �����ѹ  		��λ��0.1V
	unsigned int RateCurrent;
    unsigned int MaxCurrent;		//0x0305 ����������	��λ��0.1A
    unsigned int CalCyrrent;
    unsigned int RateCap;
    unsigned int OverHeart;
    unsigned int OverVoltage;
    unsigned int ForwardAngle;
    unsigned int RevAngle;
    unsigned int P_ID0;           	//0x0080 ��	��Ʒ����
	unsigned int P_ID1;
    
	unsigned int Ratedspeed;		//0x0302 ���ת�� 		��λ��0.1rpm
	unsigned int RatedTorque;	//0x0303 ���ת��   	��λ��0.1N.m
	unsigned int ActiveCurrent;	//0x0304 ���������Чֵ 	��λ��0.1A
	unsigned int MinInductance;	//0x0306 ����С����	��λ��0.1mH
	unsigned int CPLDNum;	//
	//unsigned int CoinResistance;	//0x0308 ����Ȧ����		��λ��0.1m��
	//unsigned int LeakageInductance;//0x030A �����©���	��λ��0��1uH
	//unsigned int SV;				//reserve
};

struct _Coefficient
{
	unsigned int ZeroPosition;	//0x0310 ��λ�����У��ֵ  ��λ����    0-360
	unsigned int BusVoltage;		//ĸ�ߵ�ѹУ��ϵ��  0-65535
	unsigned int OutCurrent;		//�������У��ϵ�� 0-65535
	unsigned int ACurrent;		//A��������У��ϵ��  0-65535
	unsigned int BCurrent;		//B��������У��ϵ��  0-65535
	unsigned int CCurrent;		//C��������У��ϵ��  0-65535
	unsigned int Blank1;			//reserve
	unsigned int ControllerTemp;	//ɢ�����¶�У��ϵ��  0-65535
	unsigned int MotorTemp;		//����¶�У��ϵ��  0-65535
	unsigned int AI1;			//AI1У׼ϵ��  0-65535
	unsigned int AI2;			//AI2У׼ϵ��  0-65535
	unsigned int AI3;			//AI3У׼ϵ��  0-65535
	unsigned int AO1;			//AO1У׼ϵ��  0-65535
	unsigned int AO2;			//0x031D ��	//AO2У׼ϵ��  0-65535
};

struct _FitPoint
{
	unsigned int Current1;		//0x0380 �� ������ϵ�1
	unsigned int Current2;
	unsigned int Current3;
	unsigned int Current4;
	unsigned int Current5;
	unsigned int Torque1;		//ת����ϵ�1
	unsigned int Torque2;
	unsigned int Torque3;
	unsigned int Torque4;
	unsigned int Torque5;
	unsigned int Environment;	//0x038A ��
};
struct _JKConfig
{
	//unsigned int Len;      //0x038C ��ز�������
	unsigned int Row0;	  //��ز���1
	unsigned int Row1;
	unsigned int Row2;
	unsigned int Row3;
	unsigned int Row4;
	unsigned int Row5;
	unsigned int Row6;
	unsigned int Row7;
	unsigned int Row8;
	unsigned int Row9;
	unsigned int Row10;
	unsigned int Row11;
	unsigned int Row12;
	unsigned int Row13;
	unsigned int Row14;
	unsigned int Row15;
	unsigned int Row16;
	unsigned int Row17;
	unsigned int Row18;
	unsigned int Row19;     //0x039B
	unsigned int Len;      
};
struct _ComRX
{
	unsigned char   RGet;                   //the head pointer of the receive queue
	unsigned char   RPut;                   //the tail pointer of the receive queue
	unsigned char   RputBack;               //backup of last handle of RPUT
	unsigned char   DataLen;                //data length
//	unsigned char   RBuf[MAX_R_BUF];        //receive buffer 32/2 bytes
//	unsigned char   RcvMsgBuf[MAX_R_BUF];   //rearranged receive data with a whole message
	enum _MODBUS_STATE   ModbusState;
	enum _ModbusFunCode  FuncCode;//function code, see ModBus protocol for detail
};

struct _ComTX
{
//	unsigned char   Buf[MAX_T_BUF]; //message buffer
	unsigned char   index;          //sending index for SendMsgBuf
	unsigned char   Length;         //message length
};

struct _DatRX
{
	unsigned int   Addr;        //sending index for SendMsgBuf
	unsigned int   Len;         //message length
};

struct _COM
{
	unsigned int TxReq     :1;     //1:�з������� 0����
	unsigned int TxIdle    :1;     //1:����״̬Ϊ���� 0������
	unsigned int Rxed      :1;     //1:���յ��µ���Ч���� 0����
 	unsigned int rsv       :13;
} ;

union _Com
{
	unsigned int            ALL;
	struct _COM   BIT;
};

struct _Flag_
{
	unsigned int LcdBack   :1;  //1:LCD������     0��LCD���ⰵ
	unsigned int InitEnd   :1;  //1:��ʼ����  0:δ��ʼ��
	unsigned int Loading   :1;  //1:����  0:����
	unsigned int UpLoad    :1;  //1:�ϴ�  0:����
	unsigned int KeyScanEn :1;  //1������ɨ��ʹ��  0:����
	unsigned int AccessEnd :1;  //1����ȡ���ý���  0:����
	unsigned int FRroll    :1;  //1������     0������
	unsigned int DisFix    :1;  //1:�����޸�  0�����޸�
	unsigned int DisCfg    :1;  //1:��ʾ��ǰ���� 0������
	unsigned int TestCmd   :1;  //���Բ���������ָ��
	unsigned int Stop      :1;  //1������������ͣ����   0������
	unsigned int JKlocked  :1; 
	unsigned int LockPos   :1;	//��ס���λ��
	unsigned int rsv       :3;
} ;
union _Flag
{
	unsigned int              ALL;
	struct _Flag_   BIT;
};
struct _Sign_
{
	unsigned int JKlocked  :1;  //1����ز�����ס  0:δ��ס
	unsigned int Restore   :1;  //����������
	unsigned int rsv       :14;
} ;

union _Sign
{
	unsigned int              ALL;
	struct _Sign_   BIT;
};
enum _State
{
	NoPress          = 0,     //û����
	Press            = 1,     //����
	SHold            = 2,     //�̱���
	LHold            = 3,     //������
	LLHold           = 4,     //��������
	SHold_Release    = 5,     //�̱����ͷ�
	LHold_Release    = 6,     //�������ͷ�
	LLHold_Release   = 7      //���������ͷ�
};

struct _Key
{
	unsigned int Wave;
	unsigned int Holdtime;
	enum _State State;
} ;

struct	_Dis
{
	unsigned int  ComAddr;    //��ǰ����ͨ�ŵ�ַ
	unsigned int  ComDat;     //��ǰ����ͨ������
	unsigned int  Config;     //��ǰ�˵����õ�ѡ��
	unsigned char   Pos[8];     //�����˵��Ĺ��λ�ü�¼
	unsigned char   Opt[8];	 //�����˵��Ĺ����ָ��ѡ���¼
	unsigned char   CurLvl;     //��ǰ�˵��ĵȼ����
	unsigned char   CurPos;     //��ǰ�˵��Ĺ��λ��
	unsigned char   CurOpt;     //��ǰ�˵��Ĺ����ָ��ѡ��
	unsigned char   CurLen;     //��ǰ�˵����Ӳ˵��ĳ���
};
struct _Attr_
{    				 // λ   ����
	unsigned char Tip  :1;      // 0    �Ƿ��ǲ˵�ĩ�ң�ĩ�Ҳ�������һ���˵�
    unsigned char TxEn :1;      // 1    ��ȷ����ʱ���Ƿ���Ҫ��ָ��  1 Yes
  	unsigned char Fresh:1;      // 2    �Ƿ�ˢ��Һ��        1 Yes
	unsigned char Wr   :1;      // 3    ����ָ���Ƕ���д    1 Read  0 Write
	unsigned char CFG  :1;      // 4    �Ƿ���ʾ����
	unsigned char Dot  :2;      // 5 6  С��λ��            0������ 1��1λС�� 2��2λ
	unsigned char Sign :1;      // 7    ���޷���
};

union _Attr
{
   unsigned char                ALL;
   struct _Attr_    BIT;
};

#endif
