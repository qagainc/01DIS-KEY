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
	MONITOR        = 0,	//监控界面
	READ_DATA      = 1, //实时读取数据显示
	READ_LIST1     = 2,	//实时读取数据，从列表中选出一行显示
	READ_LIST2     = 3, //实时读取数据，从列表中选出一行显示
	READ_LIST3     = 4,
	READ_DIO       = 5,
	READ_P_ID      = 6,	//产品编码
	SYS_ERROR      = 7,
	COM_ERROR      = 8,
	MENU           = 9,
	SUBMENU        = 10,
	GENERAL_LIST   = 11, //通用列表显示
	SET_LIST_BIT   = 12, //设置,列表显示，只修改寄存器的一位
    SET_LIST_UNION = 13, //设置，列表显示，共用一个菜单
	SET_SHIFT      = 14, //设置，移位
	SET_LIST_TEST  = 15, //设置，列表显示，共用一个菜单
	TEXT           = 16,
	ACCESS		   = 17,
	SYSINIT        = 18, //系统初始化
	PASSWORD       = 19,
	LoadEnd        = 20,
	LockScreen     = 21, //锁键选择
	CustomMenu     = 22, //监控参数设定
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

struct _RunModeSet     //运行模式设置
{
   // union _RunMode RunMode;
	unsigned int CtrSrc;    	   //0x0000 Control source;           0:panel, 1:external IO, 2:field bus, 3: CAN bus
    unsigned int ControlMode;    //0x0001 控制模式 qagainc+ 
	unsigned int DirSet;        //0x0001 Rotate direction set;     0:only forward, reverse is forbidden, 1: only reverse; 2: panel control; 3: direction switching automatically according to AutoSet
	//unsigned int StopLock;      //0x0002 Locked when stopped.      0:No  1: Yes
	unsigned int FwdStart;      //0x0003 Forward start mode set;   0:start motor after motor is stopped; 1:start immediately; 2: brake before starting
	unsigned int RevStart;      //0x0004 Reverse start mode set;   0:start motor after motor is stopped; 1:start immediately; 2: brake before starting
	unsigned int FwdStop;       //0x0005 Forward stop mode set;    0:free stop,1:lengthen Stop, stop slow with motor driving; 2: BrakeStop, braking motor
	unsigned int RevStop;       //0x0006 Reverse stop mode set;    0:free stop,1:lengthen Stop, stop slow with motor driving; 2: BrakeStop, braking motor
	//unsigned int SpeedSetSrc;   //0x0007 Speed set source ;        0:panel(not store)1:panel(store) 2:I/O  3:SCI
	unsigned int StopKeyFun;    //0x0008 启停控制选择
	unsigned int BrakeSel;	   //制动方式选择
    //unsigned int SpeedLimit;
   // unsigned int TorqueLimit;
	//unsigned int Icompen_En;	   //惯性补偿使能 
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
struct _RunParaSet    //运行参数设置
{
	unsigned int FwdSpeed;      //0x0020 Forward Run speed set;     0.1RPM   0-65535
	unsigned int RevSpeed;      //0x0021 Reverse Run speed set      0.1RPM   0-65535
	unsigned int RisingTime;    //0x0029 启动时间                            1S       1-3600
	unsigned int FallingTime;   //0x002A 停机时间                          1S       1-3600	
	unsigned int JogFwdSpeed;   //0x0022 Forward JOG Run speed set; 0.1RPM   0-65535
	unsigned int JogRevSpeed;   //0x0023 Forward JOG Run speed set; 0.1RPM   0-65535
	unsigned int JogRisingTime; //0x002B 点动启动时间                 1S       1-3600
	unsigned int JogFallingTime;//0x002C 点动停机时间                 1S       1-3600
	unsigned int StartTimeSet;  //qidong dianliu 
	unsigned int LockCurrent;   //0x0028 抱住电流                             0.1A     0-8192
	unsigned int ChangeDeadTime; //huanxiang shiqu shijian
	unsigned int SpeedUpLimitTime;
	unsigned int SpeedDownLimitTime;  
  	unsigned int TorqueSet;     //0x0027 转矩给定                             0.1N.m   0-65535  
  	unsigned int SpeedLimitSet;
    unsigned int FwdAngle;
    unsigned int RevAngle;
    unsigned int FwdTorqueSet; 
    unsigned int RevTorqueSet; 
    
	//unsigned int BleedCurrent;  //0x0024 泄放电流设置               0.1A     0-1024
	//unsigned int BleedUpVolt;   //0x0025 制动启动电压设置           0.1V     0-1023
	//unsigned int BleedResist;   //0x0026 泄放电阻设置               0.1ohm
	//unsigned int JumpSpeed;     //0x002D 跳跃转速                          1S       0-额定转速
	//unsigned int JumpRange;     //0x002E 跳跃范围                          1S       0-额定转速
	 unsigned int AdjStep;       //0x002F UP/DOWN调节步长            0.1rpm/s 0-3000
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
	unsigned int M_S   :1;//CAN的主从方式
	//unsigned int rsv1:7;
	unsigned int SynEn    :1;//CAN 系统使能
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
	union _RotateMode RotateMode;//0x0040 ↓
//	unsigned int FwdAngle; //forward angle
//	unsigned int RevAngle; //reverse angle
	unsigned int FwdTime;  //forward time
	unsigned int RevTime;  //reverse time                  //0x0044 ↑
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
	unsigned int ForgeTorque0;//锻压转矩0
	unsigned int ForgeNum1;//number of forge
	unsigned int ForgeAngle1;//unit is degree
	unsigned int ForgeSpeed1;//unit is 0.1rpm
	unsigned int ReturnSpeed1;//unit is 0.1rpm
	unsigned int IntervalTime1;//interval between two cycle, unit is 0.1s
	unsigned int	ForgeTorque1;//锻压转矩1
	unsigned int ForgeNum2;//number of forge
	unsigned int ForgeAngle2;//unit is degree
	unsigned int ForgeSpeed2;//unit is 0.1rpm
	unsigned int ReturnSpeed2;//unit is 0.1rpm
	unsigned int IntervalTime2;//interval between two cycle, unit is 0.1s
	unsigned int ForgeTorque2;//锻压转矩2
	unsigned int ForgeNum3;//number of forge
	unsigned int ForgeAngle3;//unit is degree
	unsigned int ForgeSpeed3;//unit is 0.1rpm
	unsigned int ReturnSpeed3;//unit is 0.1rpm
	unsigned int IntervalTime3;//interval between two cycle, unit is 0.1s
	unsigned int ForgeTorque3;//锻压转矩3
	unsigned int ForgeNum4;//number of forge
	unsigned int ForgeAngle4;//unit is degree
	unsigned int ForgeSpeed4;//unit is 0.1rpm
	unsigned int ReturnSpeed4;//unit is 0.1rpm
	unsigned int IntervalTime4;//interval between two cycle, unit is 0.1s
	unsigned int ForgeTorque4;//锻压转矩4			0x006D
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
	//union _Control Control;//0x01D0 ↓
	unsigned int Knot;//节点
	unsigned int Bps;//波特率
	unsigned int Refresh;//CAN延时时间
};
struct _SystemPara
{
//	unsigned int P_ID0;           	//0x0080 ↓	产品编码
//	unsigned int P_ID1;
//	unsigned int Temp1;				//电机温度补偿1
//	unsigned int Temp2;
//	unsigned int Temp3;
//	unsigned int Passcode;			//管理员密码	00000-99999
	unsigned int CarrierFrequency;	//载波频率	1-20000	单位:Hz
	unsigned int FunOpenTemp;		//散热器风扇开启温度 0-100.0 单位:0.1度
	unsigned int OverSpeed;			//超速报警速度	0-3276.7	
	//unsigned int OverVoltage;		//直流母线过压值	200-1600.0 单位：0.1V
    unsigned int LowVoltage ;		//直流母线欠压值	200-1600.0 单位：0.1V
	unsigned int OverTorque ;		//过转矩检测值	100-150	单位：1%
	unsigned int OverTorqueTime ;	//过转矩限制时间	5-600.0	单位：0.1s   
 	unsigned int BrakeCurrentRatio ;	//制动电流比率	10-80	单位：1%   
	unsigned int AutoStartNum;		//再启动次数	0-10
	unsigned int StopRunTime;		//瞬停启动时间	0.0-2.0 单位：0.1s
	unsigned int P1;					//转速PI调节比例设定1
	unsigned int I1;					//转速PI调节积分设定1
	unsigned int RotaryInertia;		//转动惯量			单位：0.01kg.m2
    unsigned int BleedCurrent;       //xiefang dianliu
    unsigned int BleedResister;      //xiefang dianzhu
    unsigned int BrakeVoltage;      //zhidong qidong dianya
 

	unsigned int P_ID0;           	//0x0080 ↓	产品编码
	unsigned int P_ID1;
//	unsigned int RunTime;			//电机允许运行时间	200-65535	单位：小时
//	unsigned int LockKey;			//锁键使能	0：禁止锁键，1：锁定键盘（需密码解锁）
//	unsigned int MotorFunOpenTemp;	//电机风扇开启温度	0-100.0	单位：0.1度
//	unsigned int OverTemp;			//控制器过热保护温度	0-120.0	单位：0.1度
//	unsigned int MotorOverTemp;		//电机过热保护温度	0-180.0	单位：0.1度
//	unsigned int PIstrategy;			//转速PI控制方式
//	unsigned int P2;
//	unsigned int I2;
//	unsigned int P3;
//	unsigned int I3;
//	unsigned int P4;
//	unsigned int I4;
//	unsigned int SwitchPara1;		//切换参数转速1
//	unsigned int SwitchPara2;
//    unsigned int SwitchPara3;
//	unsigned int Test;			//测试内容
//	unsigned int DO;				//内部开关量输出测试
//	unsigned int ExtDO ;			//外部开关量输出测试
//	unsigned int BusVoltage ;   //0x00A5 ↑	实际母线电压输入	单位：0.1V
};
struct _S_Curve
{
	unsigned int UpStartTime;   //0x00B0 ↓
	unsigned int UpEndTime;
	unsigned int DownStartTime;
	unsigned int DownEndTime;
	unsigned int UpStartRatio;
	unsigned int UpEndRatio;
	unsigned int DownStartRatio;
	unsigned int DownEndRatio;  //0x00B7 ↑
};
struct _ParaRead
{
	unsigned int DIState;       	//0x00C0 ↓ 开关量输入状态
	unsigned int DOState;		//开关量输出状态
	unsigned int AI1State;		//模拟量1路输入		0-10	单位：0.1V(电流模式 0.5mA)
	unsigned int AI2State;		//模拟量2路输入		0-10	单位：0.1V(电流模式 0.5mA)
	unsigned int AI3State;		//模拟量3路输入		0-10	单位：0.1V(电流模式 0.5mA)
	unsigned int AO1State;		//模拟量1路输出		单位：0.1mA
	unsigned int AO2State;		//模拟量2路输出		单位：0.1mA
	unsigned int InPulseState;	//脉冲输入频率		0-50kHz	单位：Hz
	unsigned int OutPulseState;  //0x00C8 ↑	脉冲输出频率		0-50kHz	单位：Hz
};
struct _Fault1
{
	unsigned int D0;    	     	//0x00D0 ↓	故障参数1
	signed char D1;
	unsigned int D2;				//故障记录序列号
	unsigned int D3;				//故障发生时反馈转速
	unsigned int D4;				//故障发生时电流
	unsigned int D5;				//故障发生时母线电压
	unsigned int D6;				//故障发生时运行状态标志
	unsigned int D7;          	//0x00D7 ↑	故障发生时累计运行时间
};
struct _Fault2
{
	unsigned int DA;    	     	//0x00DA ↓	故障参数2
	signed char DB;
	unsigned int DC;				//故障记录序列号
	unsigned int DD;				//故障发生时反馈转速
	unsigned int DE;				//故障发生时电流
	unsigned int DF;				//故障发生时母线电压
	unsigned int E0;				//故障发生时运行状态标志
	unsigned int E1;          	//0x00E1 ↑	故障发生时累计运行时间
};

struct _ExFunPara
{
	//unsigned int TerminalCtr;   	//0x0100	端口控制方式 	0：两线制1,1：两线制2:2：三线制1,3：三线制2
	unsigned int SpeedCtrSrc;   	//0x0101
	unsigned int AssistCtrSrc;  	//0x0102	转速辅助给定方式
	unsigned int AssistRange;   	//0x0103	转速辅助给定范围	-额定转速-额定转速	单位：0.1rpm
	unsigned int AssistRate;    	//0x0104	转速辅助给定比例系数	0-100	单位：0.1%
	unsigned int Relation;      	//0x0105	转速辅助给定关系	0：主+辅，1：主-辅，2：max{主，辅}，3：min{主，辅}，4主辅切换
};

struct _TerminalFunDef
{
    unsigned int TerminalCtr; 	//端口控制方式
    unsigned int DI1Function;    //0x0110 ↓	DI1功能选择
	unsigned int DI2Function;
	unsigned int DI3Function;
	unsigned int DI4Function;
    
	unsigned int DI14Function;
	unsigned int DI15Function;
    unsigned int DI16Function;  
	unsigned int DO1Function;	//DO1功能选择  
	unsigned int DO2Function; 
    
	unsigned int DI5Function;
	unsigned int DI6Function;
	unsigned int DI7Function;
    unsigned int DI8Function;    //0x0110 ↓	DI1功能选择
	unsigned int DI9Function;
	unsigned int DI11Function;
	unsigned int DI12Function;
	unsigned int DI13Function;

	unsigned int DO3Function;
	unsigned int DO4Function;
	unsigned int DO5Function;	//DO1功能选择  
	unsigned int DO6Function;
	unsigned int DO7Function;
	unsigned int DO8Function;
    
	unsigned int AO1Function;
	unsigned int AO2Function;
    
//	unsigned int PulseFunction;   //0x011d ↑	脉冲输出功能选择
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
	unsigned int MaxSpeed;        	//0x0120 ↓	转速上限	0-最大转速	单位：0.1rpm
	unsigned int MinSpeed;		 	//转速下限		0-上限转速	单位：0.1rpm
	unsigned int AI_FilterTime;	 	//AI输入滤波时间			0.01-10.00	单位：0.01s
    union _DiVirtualIn DiVirtualIn;   
	unsigned int DI_FilterTime;		//DI输入滤波时间			0.01-10.00	单位：0.01s
    unsigned int DO_Delay;			//DO输出延时设置			0.1-10.0	单位：0.1s
    
	unsigned int AI1_Min;			//AI1最小输入			0-10.00 	单位：0.01V
	unsigned int AI1_MinRatio;		//AI1最小输入对应设定		0-100.0		单位：0.1%
	unsigned int AI1_Mid1;			//AI1拐点1输入			0-10.00 	单位：0.01V
	unsigned int AI1_Mid1Ratio;		//AI1拐点1输入对应设定	0-100.0		单位：0.1%
	unsigned int AI1_Mid2;			//AI1拐点2输入			0-10.00 	单位：0.01V
	unsigned int AI1_Mid2Ratio;		//AI1拐点2输入对应设定	0-100.0		单位：0.1%
	unsigned int AI1_Max;			//AI1最大输入			0-10.00 	单位：0.01V
	unsigned int AI1_MaxRatio;		//AI1最大输入对应设定		0-100.0		单位：0.1%
    
	unsigned int AI2_Min;		//0x0170 AI2最小输入	0-10.00 	单位：0.01V
	unsigned int AI2_MinRatio;	//AI2最小输入对应设定		0-100.0		单位：0.1%
	unsigned int AI2_Mid1;		//AI2拐点1输入			0-10.00 	单位：0.01V
	unsigned int AI2_Mid1Ratio;	//AI2拐点1输入对应设定	0-100.0		单位：0.1%
	unsigned int AI2_Mid2;		//AI2拐点2输入			0-10.00 	单位：0.01V
	unsigned int AI2_Mid2Ratio;	//AI2拐点2输入对应设定	0-100.0		单位：0.1%
	unsigned int AI2_Max;		//AI2最大输入			0-10.00 	单位：0.01V
	unsigned int AI2_MaxRatio;	//AI2最大输入对应设定		0-100.0		单位：0.1%    

	signed char AI3_Min;		//AI3最小输入			0-10.00 	单位：0.01V
	signed char AI3_MinRatio;	//AI3最小输入对应设定		0-100.0		单位：0.1%
	signed char AI3_Mid1;		//AI3拐点1输入			0-10.00 	单位：0.01V
	signed char AI3_Mid1Ratio;	//AI3拐点1输入对应设定	0-100.0		单位：0.1%
	signed char AI3_Mid2;		//AI3拐点2输入			0-10.00 	单位：0.01V
	signed char AI3_Mid2Ratio;	//AI3拐点2输入对应设定	0-100.0		单位：0.1%
	signed char AI3_Max;		//AI3最大输入			0-10.00 	单位：0.01V
	signed char AI3_MaxRatio;	//0x017F AI2最大输入对应设定		0-100.0		单位：0.1%
    
	//unsigned int Pulse_FilterTime;	//脉冲输入滤波时间		0.1-10.0	单位：0.1s
	unsigned int Pulse_Min;			//脉冲最小输入			0。1-50		单位：0.1kHz
	unsigned int Pulse_MinRatio;		//脉冲最小输入对应设定		-100-100	单位：0.1%
	unsigned int Pulse_Max;			//脉冲最大输入			0。1-50		单位：0.1kHz
	unsigned int Pulse_MaxRatio;		//脉冲最大输入对应设定		-100-100	单位：0.1%
    

//	unsigned int Pulse_Delay;		//脉冲输出延时设置		0.1-10.0	单位：0.1s
//	unsigned int AO_Delay;			//AO输出延时设置			0.1-10.0	单位：0.1s
//	unsigned int AO1_Zero;			//AO1零偏				-100.0-100.0	单位：0.1%
//	unsigned int AO1_Gain;			//AO1增益				-2.00-2.00	单位：0.01
//	unsigned int AO2_Zero;			//AO2零偏				-100.0-100.0	单位：0.1%
//	unsigned int AO2_Gain;			//AO2增益				-2.00-2.00	单位：0.01
//	unsigned int Pulse_Range;		//脉冲输出最大范围		0。1-50		单位：0.1kHz
//	unsigned int Pulse_Centre;		//脉冲输出频率中心点		0：无中心点，1：有中心点，频率大于最大频率/2为正输出，2：有中心点，频率小于最大频率/2为正输出
//	unsigned int DeadZone_Time;  	//0x013A ↑	正反转死区时间	0-3000.0	单位：0.1s
};
struct _TerminalAICfg
{
	unsigned int AI2_Min;		//0x0170 AI2最小输入	0-10.00 	单位：0.01V
	unsigned int AI2_MinRatio;	//AI2最小输入对应设定		0-100.0		单位：0.1%
	unsigned int AI2_Mid1;		//AI2拐点1输入			0-10.00 	单位：0.01V
	unsigned int AI2_Mid1Ratio;	//AI2拐点1输入对应设定	0-100.0		单位：0.1%
	unsigned int AI2_Mid2;		//AI2拐点2输入			0-10.00 	单位：0.01V
	unsigned int AI2_Mid2Ratio;	//AI2拐点2输入对应设定	0-100.0		单位：0.1%
	unsigned int AI2_Max;		//AI2最大输入			0-10.00 	单位：0.01V
	unsigned int AI2_MaxRatio;	//AI2最大输入对应设定		0-100.0		单位：0.1%
	signed char AI3_Min;		//AI3最小输入			0-10.00 	单位：0.01V
	signed char AI3_MinRatio;	//AI3最小输入对应设定		0-100.0		单位：0.1%
	signed char AI3_Mid1;		//AI3拐点1输入			0-10.00 	单位：0.01V
	signed char AI3_Mid1Ratio;	//AI3拐点1输入对应设定	0-100.0		单位：0.1%
	signed char AI3_Mid2;		//AI3拐点2输入			0-10.00 	单位：0.01V
	signed char AI3_Mid2Ratio;	//AI3拐点2输入对应设定	0-100.0		单位：0.1%
	signed char AI3_Max;		//AI3最大输入			0-10.00 	单位：0.01V
	signed char AI3_MaxRatio;	//0x017F AI2最大输入对应设定		0-100.0		单位：0.1%
};
struct _MultiStageSpeed
{
	unsigned int Stage0;         //0x0140 ↓ 多线段 0	负最大转速--正最大转速	单位：0.1rpm
	unsigned int Stage1;
	unsigned int Stage2;
	unsigned int Stage3;
	unsigned int Stage4;
	unsigned int Stage5;
	unsigned int Stage6;
	unsigned int Stage7;         //0x0147 ↑
};

struct _ProcessPID
{
	unsigned int SetSrc;         //0x0160 ↓	过程PID给定方式	0：PID数字给定，1：AI1，2：AI2，3：AI3，4：脉冲输入
	unsigned int SetGain;		//过程PID数字给定	0.0-100	单位：0.1%
	unsigned int FeedMode;		//过程PID反馈方式
	unsigned int ActMode;		//0x0166 ↑	过程PID反馈方式	0；正作用，1：反作用	
	unsigned int P_gain;			//过程PID比例增益	0-100.0	单位：0.1
	unsigned int I_time;			//过程PID积分时间	0-100.0	单位：0.1s
	unsigned int D_time;			//过程PID微分时间	0-100.0	单位：0.1s

};

struct _CommPara
{
	unsigned int AddrCode;       //0x01F0 ↓通信地址码
	unsigned int Bode;			//波特率
	unsigned int Check;			//0x01F2 ↑检验方式
	unsigned int ReplyDelay;		//延时时间		单位1ms
//	unsigned int CAN_Control;
};

struct _RealtimeInfo   	//实时信息
{
	unsigned int SystemState;   	//0x0200 运行状态
	unsigned int Speed;         	//0x0201 转速		单位:0.1rpm
	unsigned int Toque;        	//0x0202 转矩		单位:N/m
	unsigned int blank0;		   	//0x0203 reserve
	unsigned int DCVolt;        	//0x0204 母线电压	单位：0.1V
	unsigned int Position;      	//0x0205 转子位置	单位：0.1度
	unsigned int PhaseA_Temp;   	//0x0206 A相温度	单位：0.1度
	unsigned int PhaseB_Temp;   	//0x0207 B相温度	单位：0.1度
	unsigned int PhaseC_Temp;   	//0x0208 C相温度	单位：0.1度
    unsigned int blank1 ;       	//0x0209 reserve
	unsigned int PhaseA_I;      	//0x020A A相电流	0-65535	单位：0.1A
	unsigned int PhaseB_I;      	//0x020B B相电流	0-65535	单位：0.1A
	unsigned int PhaseC_I;      	//0x020C C相电流	0-65535	单位：0.1A
	unsigned int DriveTemp ;     //0x020D 驱动器温度		0-1000	单位：0.1度
	unsigned int AngleOn;	   	//0x020E 开通角	单位：0.1度
	unsigned int AngleOff;      	//0x020F 关断角	单位：0.1度
	unsigned int DesireDAC;     	//0x0210 电流给定	0-65535	单位：0.1A
	unsigned int blank3;	       	//0x0211 reserve
	unsigned int SpeedAdj_P;    	//0x0212 转速PI调节的P
	unsigned int SpeedAdj_I;    	//0x0213 转速PI调节的I
	unsigned int RunHour;       	//0x0214 电机累计运行时间		0-65535	单位：小时
	unsigned int DesireSpeed;   	//0x0215 设定的速度	0-30000	单位：0.1rpm
	unsigned int ERr1;   	    //0x0216 当前故障参数低16位
	unsigned int ERr2;   	    //0x0217 当前故障参数低16位
};

struct _Product
{
	unsigned int RatedPower;     //0x0300 ↓额定功率  		单位： 0.1kW
	unsigned int RatedVoltage;	//0x0301 ↓额定电压  		单位：0.1V
	unsigned int RateCurrent;
    unsigned int MaxCurrent;		//0x0305 ↓最大相电流	单位：0.1A
    unsigned int CalCyrrent;
    unsigned int RateCap;
    unsigned int OverHeart;
    unsigned int OverVoltage;
    unsigned int ForwardAngle;
    unsigned int RevAngle;
    unsigned int P_ID0;           	//0x0080 ↓	产品编码
	unsigned int P_ID1;
    
	unsigned int Ratedspeed;		//0x0302 ↓额定转速 		单位：0.1rpm
	unsigned int RatedTorque;	//0x0303 ↓额定转矩   	单位：0.1N.m
	unsigned int ActiveCurrent;	//0x0304 ↓相电流有效值 	单位：0.1A
	unsigned int MinInductance;	//0x0306 ↓最小相电感	单位：0.1mH
	unsigned int CPLDNum;	//
	//unsigned int CoinResistance;	//0x0308 ↓线圈电阻		单位：0.1mΩ
	//unsigned int LeakageInductance;//0x030A ↑电机漏电感	单位：0。1uH
	//unsigned int SV;				//reserve
};

struct _Coefficient
{
	unsigned int ZeroPosition;	//0x0310 ↓位置零点校正值  单位：度    0-360
	unsigned int BusVoltage;		//母线电压校正系数  0-65535
	unsigned int OutCurrent;		//输出电流校正系数 0-65535
	unsigned int ACurrent;		//A相电流检测校正系数  0-65535
	unsigned int BCurrent;		//B相电流检测校正系数  0-65535
	unsigned int CCurrent;		//C相电流检测校正系数  0-65535
	unsigned int Blank1;			//reserve
	unsigned int ControllerTemp;	//散热器温度校正系数  0-65535
	unsigned int MotorTemp;		//电机温度校正系数  0-65535
	unsigned int AI1;			//AI1校准系数  0-65535
	unsigned int AI2;			//AI2校准系数  0-65535
	unsigned int AI3;			//AI3校准系数  0-65535
	unsigned int AO1;			//AO1校准系数  0-65535
	unsigned int AO2;			//0x031D ↑	//AO2校准系数  0-65535
};

struct _FitPoint
{
	unsigned int Current1;		//0x0380 ↓ 电流拟合点1
	unsigned int Current2;
	unsigned int Current3;
	unsigned int Current4;
	unsigned int Current5;
	unsigned int Torque1;		//转矩拟合点1
	unsigned int Torque2;
	unsigned int Torque3;
	unsigned int Torque4;
	unsigned int Torque5;
	unsigned int Environment;	//0x038A ↑
};
struct _JKConfig
{
	//unsigned int Len;      //0x038C 监控参数个数
	unsigned int Row0;	  //监控参数1
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
	unsigned int TxReq     :1;     //1:有发送请求 0：无
	unsigned int TxIdle    :1;     //1:总线状态为空闲 0：其它
	unsigned int Rxed      :1;     //1:接收到新的有效数据 0：无
 	unsigned int rsv       :13;
} ;

union _Com
{
	unsigned int            ALL;
	struct _COM   BIT;
};

struct _Flag_
{
	unsigned int LcdBack   :1;  //1:LCD背光亮     0：LCD背光暗
	unsigned int InitEnd   :1;  //1:初始化后  0:未初始化
	unsigned int Loading   :1;  //1:下载  0:其它
	unsigned int UpLoad    :1;  //1:上传  0:其它
	unsigned int KeyScanEn :1;  //1：按键扫描使能  0:其它
	unsigned int AccessEnd :1;  //1：获取配置结束  0:其它
	unsigned int FRroll    :1;  //1：正向     0：反向
	unsigned int DisFix    :1;  //1:不可修改  0：可修改
	unsigned int DisCfg    :1;  //1:显示当前配置 0：其它
	unsigned int TestCmd   :1;  //测试参数，补发指令
	unsigned int Stop      :1;  //1：正常待机（停机）   0：其它
	unsigned int JKlocked  :1; 
	unsigned int LockPos   :1;	//锁住光标位置
	unsigned int rsv       :3;
} ;
union _Flag
{
	unsigned int              ALL;
	struct _Flag_   BIT;
};
struct _Sign_
{
	unsigned int JKlocked  :1;  //1：监控参数锁住  0:未锁住
	unsigned int Restore   :1;  //开机或重启
	unsigned int rsv       :14;
} ;

union _Sign
{
	unsigned int              ALL;
	struct _Sign_   BIT;
};
enum _State
{
	NoPress          = 0,     //没按下
	Press            = 1,     //按下
	SHold            = 2,     //短保持
	LHold            = 3,     //长保持
	LLHold           = 4,     //长长保持
	SHold_Release    = 5,     //短保持释放
	LHold_Release    = 6,     //长保持释放
	LLHold_Release   = 7      //长长保持释放
};

struct _Key
{
	unsigned int Wave;
	unsigned int Holdtime;
	enum _State State;
} ;

struct	_Dis
{
	unsigned int  ComAddr;    //当前画面通信地址
	unsigned int  ComDat;     //当前画面通信数据
	unsigned int  Config;     //当前菜单配置的选项
	unsigned char   Pos[8];     //各级菜单的光标位置记录
	unsigned char   Opt[8];	 //各级菜单的光标所指的选项记录
	unsigned char   CurLvl;     //当前菜单的等级深度
	unsigned char   CurPos;     //当前菜单的光标位置
	unsigned char   CurOpt;     //当前菜单的光标所指的选项
	unsigned char   CurLen;     //当前菜单的子菜单的长度
};
struct _Attr_
{    				 // 位   描述
	unsigned char Tip  :1;      // 0    是否是菜单末梢，末梢不进行下一级菜单
    unsigned char TxEn :1;      // 1    按确定键时，是否需要发指令  1 Yes
  	unsigned char Fresh:1;      // 2    是否刷新液晶        1 Yes
	unsigned char Wr   :1;      // 3    发送指令是读、写    1 Read  0 Write
	unsigned char CFG  :1;      // 4    是否显示配置
	unsigned char Dot  :2;      // 5 6  小数位数            0：整数 1：1位小数 2：2位
	unsigned char Sign :1;      // 7    有无符号
};

union _Attr
{
   unsigned char                ALL;
   struct _Attr_    BIT;
};

#endif
