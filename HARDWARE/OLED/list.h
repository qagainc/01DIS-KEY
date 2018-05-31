#ifndef LIST_H_
#define LIST_H_

const unsigned char YCf[4] ="◆ ";
const unsigned char Tab0[5] ="  0:";
const unsigned char Tab1[5] ="  1:";
const unsigned char Blank3[4] ="   ";
const unsigned char Blank6[7] ="      ";
const unsigned char Blank7[8] ="       ";
const unsigned char Blank9[10]="          ";
const unsigned char Blank19[20]={"                    "};
const unsigned char rpm[]="           rpm ";
const unsigned char RunState[9][5]={{"待机"},{"故障"},{"下载"},{"运行"},{"点动"},{"制动"},{"抱住"},{"测试"},{"异常"}};
const unsigned char  List_Menu[16][13] =        //LV1
{
    {"菜单        "},
	{"运行方式    "},
    {"转速给定    "},
	{"运行参数    "},
    {"端子定义    "},
	{"端子配置    "},
	//{"模拟映射    "},
	{"多段速      "},
    {"PID参数     "},
    {"程控模式    "},
	{"串口通信    "},
    {"CAN通信     "},
	{"特性参数    "},
	{"故障记录    "},
    {"测试参数    "},
	{"高级参数    "},
	{"界面管理    "}
	//{"厂家参数    "},
	//{"锻压参数    "}
};
const unsigned char  List_RunMode[14][13] =     //LV4
{
    {"00- 运行方式"},
	{"运行命令选择"},
    {"控制模式选择"},
	{"电机方向选择"},
	//{"停机抱死选择"},
	{"正向启动选择"},
	{"反向启动选择"},
	{"正向停机选择"},
    {"反向停机选择"},
	{"启停控制选择"},
	{"制动方式选择"},
	{"零速锁定选择"},
    {"转速限制    "},
    {"转矩限制    "},
    {"转动惯量补偿"}
};
//const unsigned char  List_RunMode2[11][13] =     //LV4
//{
//    {"00- 运行方式"},
//	{"运行命令选择"},
//	{"电机方向选择"},
//	{"停机抱死选择"},
//	{"正向启动选择"},
//	{"反向启动选择"},
//	{"正向停机选择"},
//    {"反向停机选择"},
//	{"启停控制选择"},
//	{"制动方式选择"},
//	{"惯量补偿使能"}
//};
const unsigned char List_RunPara[20][13] = //01>>02
{
    {"02- 运行参数"},
	{"正向运转速度"},
	{"反向运转速度"},
	{"加速时间    "},
	{"减速时间    "},
	{"点动正转速度"},
	{"点动反转速度"},
    {"点动加速时间"},
	{"点动减速时间"},
	{"启动电流设定"},
	{"抱死电流值  "},
	{"换向死区时间"},
	{"转速上限    "},
	{"转速下限    "},
	{"转矩限定    "},//qagainc+
	{"转速限定    "},//qagainc+
	{"正向运行角度"},
	{"反向运行角度"},
	{"正向扭矩设定"},
	{"反向扭矩设定"}

};
const unsigned char List_SpeedSet[6][13] = //02>>01
{
    {"01- 转速给定"},
	{"给定关系    "},
	{"主给定      "},
	{"辅助给定    "},
	{"位置给定    "},
	{"转矩给定    "}
};
const unsigned char List_TerminalDef[28][13] =  //16>>28
{
	{"03- 端子定义"},
	{"端子控制方式"},
	{"DI1功能选择 "},
	{"DI2功能选择 "},
	{"DI3功能选择 "},
	{"DI4功能选择 "},
	{"DI5功能选择 "},
	{"DI6功能选择 "},
	{"DI7功能选择 "},
	{"DI8功能选择 "},//+
	{"DI9功能选择 "},//+
	{"DI11功能选择"},//+
	{"DI12功能选择"},//+
	{"DI13功能选择"},//+	
	{"DI14虚拟输入"},//+
	{"DI15虚拟输入"},//+
	{"DI16虚拟输入"},//+		
	{"D01功能选择 "},
	{"D02功能选择 "},
	{"D03功能选择 "},
	{"D04功能选择 "},
	{"D05功能选择 "},//+	
	{"D06功能选择 "},//+	
	{"D07功能选择 "},//+	
	{"D08功能选择 "},//+		
	{"A01功能选择 "},
	{"A02功能选择 "},
	//{"脉冲输出选择"}
};
const unsigned char List_TerminalCfg[35][13] =
{
	{"04- 端子配置"},
    {"AI滤波时间  "},
	{"DI滤波时间  "},
    {"DO延迟设定  "},
	{"AI1最小输入 "},
	{"AI1最小映射 "},
	{"AI1拐点1输入"},
	{"AI1拐点1映射"},
	{"AI1拐点2输入"},
	{"AI1拐点2映射"},
	{"AI1最大输入 "},
	{"AI1最大映射 "},
	{"AI2最小输入 "},
	{"AI2最小映射 "},
	{"AI2拐点1输入"},
	{"AI2拐点1映射"},
	{"AI2拐点2输入"},
	{"AI2拐点2映射"},
	{"AI2最大输入 "},
	{"AI2最大映射 "},
	{"AI3最小输入 "},
	{"AI3最小映射 "},
	{"AI3拐点1输入"},
	{"AI3拐点1映射"},
	{"AI3拐点2输入"},
	{"AI3拐点2映射"},
	{"AI3最大输入 "},
	{"AI3最大映射 "},
	{"脉冲最小输入"},
	{"脉冲最小映射"},
	{"脉冲最大输入"},
	{"脉冲最大映射"},
    {"DI14最大输入"},
    {"DI15最大输入"},
    {"DI16最大输入"}
};
const unsigned char List_AnalogICfg[26][13] =
{
	{"05- 模拟映射"},
	{"AI滤波时间  "},
	{"AI1最小输入 "},
	{"AI1最小映射 "},
	{"AI1拐点1输入"},
	{"AI1拐点1映射"},
	{"AI1拐点2输入"},
	{"AI1拐点2映射"},
	{"AI1最大输入 "},
	{"AI1最大映射 "},
	{"AI2最小输入 "},
	{"AI2最小映射 "},
	{"AI2拐点1输入"},
	{"AI2拐点1映射"},
	{"AI2拐点2输入"},
	{"AI2拐点2映射"},
	{"AI2最大输入 "},
	{"AI2最大映射 "},
	{"AI3最小输入 "},
	{"AI3最小映射 "},
	{"AI3拐点1输入"},
	{"AI3拐点1映射"},
	{"AI3拐点2输入"},
	{"AI3拐点2映射"},
	{"AI3最大输入 "},
	{"AI3最大映射 "},
};
const unsigned char List_MultistageSpeed[9][13] =
{
    {"05- 多段速  "},
	{"多段速0     "},
	{"多段速1     "},
	{"多段速2     "},
	{"多段速3     "},
	{"多段速4     "},
	{"多段速5     "},
	{"多段速6     "},
	{"多段速7     "}
};
const unsigned char List_ProcessPID[8][13] =
{
    {"06- PID参数 "},	
	{"PID给定源   "},
	{"PID数字给定 "},
	{"PID反馈源   "},
	{"PID反馈方向 "},
	{"PID比例增益 "},
	{"PID积分时间 "},
	{"PID微分时间 "}
};
const unsigned char List_CommPara[5][13] =
{
    {"08- 串口通信"},
	{"地址码      "},
	{"波特率      "},
	{"校验方式    "},
	{"延时时间    "}

};
const unsigned char List_CommPara2[4][13] =
{
    {"09- CAN通讯 "},
	{"地址码      "},
	{"波特率      "},
	{"刷新时间    "}
};

const unsigned char List_ProcessControl[13][13] =
{
    {"07- 程控模式"},
	{"程控模式使能"},
	{"定时控制使能"},
	{"正向时间使能"},
	{"反向时间使能"},
	{"正向角度使能"},
	{"反向角度使能"},
	{"正向自动启动"},
	{"反向自动启动"}, 
	//{"正转角度设定"},
	//{"反转角度设定"},
	{"正转时间设定"},
	{"反转时间设定"},
	//{"正向换向速度"},
	//{"反向换向速度"}
};
const unsigned char List_Characteristic[17][13] =
{
    {"10- 特性参数"},
	{"额定功率    "},
	{"额定电压    "},
	{"额定电流    "},
	{"最大电流    "},
	{"标定电流    "},
	{"额定电容    "},
	{"过热保护    "},
	{"母线过压值  "},
	{"前置角      "},
	{"后置角      "},
	//{"额定转速    "},
	//{"额定转矩    "},
	//{"额定相电流  "},
	//{"应用场合    "},
	{"产品编码    "},
	{"降格温度    "},
	{"允许允许时间"},
	{"允许上电时间"},
	{"软件版本号  "},
	{"CPLD软件版本"}
};
const unsigned char List_ErrorHistory[3][13] =
{
    {"11- 故障记录"},
	{"故障记录1   "},
	{"故障记录2   "}
};
const unsigned char List_TestPara[11][13] =
{
    {"12- 测试参数"},
	{"直流母线校准"},
	{"位置零点校准"},
	{"A相电流测试 "},
	{"B相电流测试 "},
	{"C相电流测试 "},
    //{"制动测试    "},
	{"内部开关量  "},
	{"外部开关量  "},
	{"上传参数    "},
	{"下载参数    "},
	{"恢复出厂设置"}
};
const unsigned char List_AdvancePar[21][13] =
{
    {"13- 高级参数"},
	{"斩波频率    "},
	//{"电机风扇开启"},
	{"散热风扇开启"},
    {"超速报警值  "},
	//{"电机过热保护"},
	//{"驱动过热保护"},	
	//{"母线过压值  "},
	{"母线欠压值  "},
	{"过转矩检测值"},	
	{"过转矩限时间"},
	{"制动电流比率"},
	{"再启动次数  "},	
	{"瞬停启动时间"},
	//{"加减速模式  "},
	{"PI调节比例1 "},
	{"PI调节积分1 "},
    {"转动惯量补偿"},
    {"泄放电流设定"},
    {"泄放电阻输入"},
    {"制动启动电压"},
    {"应用场合    "},      
    {"用户密码    "},
    {"初始位置    "},
    {"超级密码    "}, 
    {"取消密码    "}    
	//{"加速时间2   "},
	//{"减速时间2   "},
	//{"加速时间3   "},
	//{"减速时间3   "},
	//{"加速时间4   "},
	//{"减速时间4   "},
	//{"切换转速1   "},
	//{"切换转速2   "},
	//{"切换转速3   "},
	//{"加速起始时间"},
	//{"加速结束时间"},
	//{"减速起始时间"},
	//{"减速结束时间"},
	//{"加速起始比例"},
	//{"加速结束比例"},
	//{"减速起始比例"},
	//{"减速结束比例"},
	//{"电机温补1   "},
	//{"电机温补2   "},
	//{"电机温补3   "},
	//{"锁键使能    "},

//	{"厂家参数    "}
};
const unsigned char List_InterfaceManage[3][13] =
{
    {"14- 界面管理"},
	{"监控菜单内容"},
	{"监控菜单长度"}
};
const unsigned char List_FirmPara[41][13] =
{
    {"14- 厂家参数"},
	{"A相绕组电流 "},
	{"B相绕组电流 "},
	{"C相绕组电流 "},
	{"散热器温度  "},
	{"开通角      "},
	{"关断角      "},
	{"电流给定    "},
	{"转速PI比例  "},
	{"转速PI积分  "},
	{"相电流最大值"},
	{"相电感最小值"},
	{"相电感最大值"},
	{"线圈电阻    "},
	{"电机漏电感  "},
	{"零点校正值  "},
	{"母线电压系数"},
	{"输出电流系数"},
	{"A相电流系数 "},
	{"B相电流系数 "},
	{"C相电流系数 "},
	{"驱动温度系数"},
	{"电机温度系数"},
	{"AI1校准系数 "},
	{"AI2校准系数 "},
	{"AI3校准系数 "},
	{"AO1校准系数 "},
	{"AO2校准系数 "},
	{"电流拟合点1 "},
	{"电流拟合点2 "},
	{"电流拟合点3 "},
	{"电流拟合点4 "},
	{"电流拟合点5 "},
	{"转矩拟合点1 "},
	{"转矩拟合点2 "},
	{"转矩拟合点3 "},
	{"转矩拟合点4 "},
	{"转矩拟合点5 "},
    {"允许运行时间"},
    {"用户密码    "},
    {"退出厂家参数"}
};
const unsigned char List_ForgePara[31][13] =
{
    {"15-锻压参数 "},
	{"打击次数1   "},
	{"运行角度1   "},
	{"打击速度1   "},
	{"返回速度1   "},
	{"换向时间1   "},
    {"打击转矩1   "},
	{"打击次数2   "},
	{"运行角度2   "},
	{"打击速度2   "},
	{"返回速度2   "},
	{"换向时间2   "},
    {"打击转矩2   "},
	{"打击次数3   "},
	{"运行角度3   "},
	{"打击速度3   "},
	{"返回速度3   "},
	{"换向时间3   "},
    {"打击转矩3   "},
	{"打击次数4   "},
	{"运行角度4   "},
	{"打击速度4   "},
	{"返回速度4   "},
	{"换向时间4   "},
    {"打击转矩4   "},
	{"打击次数5   "},
	{"运行角度5   "},
	{"打击速度5   "},
	{"返回速度5   "},
	{"换向时间5   "},
    {"打击转矩5   "}
};
//00
const unsigned char List_CtrSrc[4][13] =
{
    {"运行命令选择"},
	{"面板设置    "},
	{"端子设置    "},
	{"通讯设置    "},
	//{"CAN设置   "}
};
const unsigned char List_CtrSrc2[4][13] =
{
    {"控制模式选择"},
	{"速度控制    "},
	{"转矩控制    "},
	{"位置控制    "},
	//{"CAN设置   "}
};

const unsigned char List_DirSet[4][13] =
{
    {"电机方向选择"},
	{"允许正反转  "},
	{"只允许正转  "},
	{"只允许反转  "}
};
const unsigned char List_StopLock[3][13] =
{
    {"停机抱死选择"},
	{"无效        "},
	{"有效        "}
};
const unsigned char List_FwdStart[4][13] =
{
    {"正向启动选择"},
	{"自由停车启动"},
	{"跟随启动    "},
	{"制动后启动  "}
};
const unsigned char List_RevStart[4][13] =
{
	{"反向启动选择"},
	{"自由停车启动"},
	{"跟随启动    "},
	{"制动后启动  "}
};
const unsigned char List_FwdStop[3][13] =
{
    {"正向停机选择"},
	{"减速停机    "},
	{"自由停机    "}
};
const unsigned char List_RevStop[3][13] =
{
    {"反向停机选择"},
	{"减速停机    "},
	{"自由停机    "}
};
const unsigned char List_ONOFF[5][13] =
{
    {"启停控制选择"},
	{"边沿启动A   "},
	{"边沿启动B   "},
	{"电平启动    "},
	{"外部使能    "}
};
const unsigned char List_BrakeSel[4][13] =
{
    {"制动方式选择"},
	{"延迟制动    "},
	{"快速制动    "},
	{"起重机模式  "}
};
const unsigned char List_LcompenEn1[3][13] =
{
    {"转速限制    "},
	{"无效        "},
	{"有效        "}
};
const unsigned char List_LcompenEn2[3][13] =
{
    {"转矩限制    "},
	{"无效        "},
	{"有效        "}
};
const unsigned char List_LcompenEn3[3][13] =
{
    {"惯量补偿使能"},
	{"无效        "},
	{"有效        "}
};


const unsigned char List_LcompenEn[3][13] =
{
    {"惯量补偿使能"},
	{"无效        "},
	{"有效        "}
};
//01
//01>>02
const unsigned char List_FwdSpeed[3][13] =
{
    {"正向运转速度"},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_RevSpeed[3][13] =
{
    {"反向运转速度"},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_JogFwdSpeed[3][13] =
{
    {"点动正转速度"},
	{" rpm        "},
	{"0.0-750.0   "}
};
const unsigned char List_JogRevSpeed[3][13] =
{
    {"点动反转速度"},
	{" rpm        "},
	{"0.0-750.0   "}
};
const unsigned char List_AdjStep[3][13] =
{
    {"UP/DOWN 步长"},
	{" rpm/s      "},
	{"0.0-3000.0  "}
};
const unsigned char List_RisingTime[3][13] =
{
    {"加速时间    "},
	{" s          "},
	{"0.1-600.0   "}
};
const unsigned char List_FallingTime[3][13] =
{
    {"减速时间    "},
	{" s          "},
	{"0.1-600.0   "}
};
const unsigned char List_JogRisingTime[3][13] =
{
    {"点动加速时间"},
	{" s          "},
	{"0.1-300.0   "}
};
const unsigned char List_JogFallingTime[3][13] =
{
    {"点动减速时间"},
	{" s          "},
	{"0.1-300.0   "}
};
const unsigned char List_StartCurrentSet[3][13] =
{
    {"启动电流设定"},
	{" A          "},
	{"0.0-6553.5  "}
};
const unsigned char List_LockCurrent[3][13] =
{
    {"抱死电流值  "},
	{" A          "},
	{"0.0-819.2   "}
};
const unsigned char List_JumpSpeed[3][13] =
{
    {"跳跃转速    "},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_JumpRange[3][13] =
{
    {"跳跃范围    "},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_DeadZone[3][13] =
{
    {"换向死区时间"},
	{" s          "},
	{"0.0-3000.0  "}
};
const unsigned char List_BleedResist[3][13] =
{
    {"泄放电阻输入"},
	{" Ω         "},
	{"3.0-50.0    "}
};
const unsigned char List_BleedCurrent[3][13] =
{
    {"泄放电流设定"},
	{" A          "},
	{"0.0-1000.0  "}
};
const unsigned char List_BleedUpVolt[3][13] =
{
    {"制动启动电压"},
	{" V          "},
	{"0.0-3000.0  "}
};
const unsigned char List_MaxSpeed[3][13] =
{
    {"转速上限    "},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_MinSpeed[3][13] =
{
    {"转速下限    "},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_Speed0216[3][13] =
{
    {"转矩限定    "},
	{" %          "},
	{"5-150       "}
};
const unsigned char List_Speed0217[3][13] =
{
    {"转速限定    "},
	{" %          "},
	{"5-150       "}
};
const unsigned char List_Speed0218[3][13] =
{
    {"正向运行角度"},
	{" °		  "},
	{"0-65535	  "}

};
const unsigned char List_Speed0219[3][13] =
{
    {"反向运行角度"},
	{" °         "},
	{"0-65535     "}
};

const unsigned char List_Speed0220[3][13] =
{
    {"正向扭矩设定"},
	{" %          "},
	{"2-150       "}
};
const unsigned char List_Speed0221[3][13] =
{
    {"反向扭矩设定"},
	{" %          "},
	{"2-150       "}
};


//02
//02>>01
const unsigned char List_Relation[5][13] =
{
    {"转速给定关系"},
	{"主加辅      "},
	{"主减辅      "},
	{"主辅较大者  "},
	{"主辅较小者  "}
	//{"主辅切换    "}
};
const unsigned char List_SpeedMainSrc[13][13] =
{
    {"转速主给定  "},
	{"面板不记忆  "},
	{"面板记忆    "},
	{"AI1         "},
	{"AI2         "},
	{"AI3         "},
	{"多段速      "},
	{"过程PID     "},
	{"通讯给定    "},
	{"脉冲给定1   "},
	{"脉冲给定2   "},
	{"脉冲给定3   "},
	{"CAN给定    "}
};
const unsigned char List_SpeedAssistSrc[7][13] =
{
    {"转速辅助给定"},
	{"无给定      "},
	{"AI1         "},
	{"AI2         "},
	{"AI3         "},
	{"过程PID     "},
//	{"端子UP/DOWN "},
    {"脉冲输入1   "}
};
const unsigned char List_Src0103[7][13] =
{
    {"位置给定    "},
	{"面板记忆    "},
	{"脉冲给定1   "},	
	{"通讯给定    "},
	{"脉冲给定2   "},
	{"脉冲给定3   "},
	{"CAN给定     "}
};
const unsigned char List_Src0104[8][13] =
{
    {"转速给定    "},
	{"面板        "},
	{"AI1         "},
	{"AI2         "},
	{"AI3         "},
	{"脉冲输入2   "},
    {"通讯给定	  "},
	{"CAN给定     "}
};


const unsigned char List_AssistSrcRange[3][13] =
{
    {"辅助给定上限"},
	{" rpm        "},
	{"-1500=1500  "}
};
const unsigned char List_AssistSrcRate[3][13] =
{
    {"辅助给定比例"},
	{" %          "},
	{"0.0-100.0   "}
};
//03
const unsigned char List_TerminalCtr[5][13] =
{
    {"端子控制方式"},
	{"两线制A     "},
	{"两线制B     "},
	{"三线制A     "},
	{"三线制B     "}
};
const unsigned char List_DI_Fun[18][13] =//24>>18
{
    {"DI 功能选择 "},
	{"无功能      "},
	{"正转运行    "},
	{"反转运行    "},
	{"三线式控制  "},
	{"正转点动    "},
	{"反转点动    "},
	{"启停使能    "},
	{"软复位	  "},
	{"外部故障常开"},
	{"外部故障常闭"},
	{"多段速端子1 "},
	{"多段速端子2 "},
	{"多段速端子3 "},
	{"转速给定切换"},	
	{"转矩限制	  "},
	{"转速限制	  "},
	{"脉冲输入	  "}
};
const unsigned char List_DI7_Fun[18][13] =
{
    {"DI 功能选择 "},
	{"无功能      "},
	{"正转运行    "},
	{"反转运行    "},
	{"三线式控制  "},
	{"正转点动    "},
	{"反转点动    "},
	{"启停使能    "},
	{"软复位	  "},
	{"外部故障常开"},
	{"外部故障常闭"},
	{"多段速端子1 "},
	{"多段速端子2 "},
	{"多段速端子3 "},
	{"转速给定切换"},	
	{"转矩限制	  "},
	{"转速限制	  "},
	{"脉冲输入	  "}

};
const unsigned char List_D0_Fun[9][13] =
{
    {"DO 功能选择 "},
	{"无输出      "},
	{"系统运行中  "},
	{"故障报警    "},
	{"到达设定速度"},
	{"到达设定位置"},	
	{"电机风扇控制"},
	{"转矩限制    "},	
	{"转速限制    "},	
};
const unsigned char List_DO4_Fun[6][13] =
{
    {"D0 功能选择 "},
	{"无输出      "},
	{"系统运行中  "},
	{"故障报警    "},
	{"到达设定速度"},
	{"脉冲输出    "}
};
const unsigned char List_A01_Fun[9][13] =
{
    {"A01功能选择 "},
	{"无输出      "},
	{"运行转速    "},
	{"设定转速    "},
	{"输出电流    "},
	{"脉冲输入    "},
	{"AI1输入     "},
	{"AI2输入     "},
	{"AI3输入     "}
};
const unsigned char List_A02_Fun[9][13] =
{
    {"A02功能选择 "},
	{"无输出      "},
	{"运行转速    "},
	{"设定转速    "},
	{"输出电流    "},
	{"脉冲输入    "},
	{"AI1输入     "},
	{"AI2输入     "},
	{"AI3输入     "}
};
const unsigned char List_Pulse_Fun[10][13] =
{
    {"脉冲输出功能"},
	{"无输出      "},
	{"运行转速    "},
	{"设定转速    "},
	{"输出电流    "},
	{"脉冲输入    "},
	{"AI1输入     "},
	{"AI2输入     "},
	{"AI3输入     "},
    {"同步电流    "}
};
//04
const unsigned char List_AI_FilterTime[3][13] =
{
    {"AI滤波时间  "},
	{" s          "},
	{"0.01-10.00  "}
};
const unsigned char List_DI_FilterTime01[3][13] =
{
    {"DI滤波时间  "},
	{" s          "},
	{"0.01-10.00  "}
};
const unsigned char List_DO_FilterTime02[3][13] =
{
    {"DO延迟设定  "},
	{" s          "},
	{"0.01-10.00  "}
};

const unsigned char List_AI1_Min03[3][13] =
{
    {"AI1最小输入 "},
	{" V          "},
	{"0-10.00     "}
};
const unsigned char List_AI1_MinRatio04[3][13] =
{
    {"AI1最小映射 "},
	{" %          "},
	{"0-100.0     "}
};
const unsigned char List_AI1_Mid105[3][13] =
{
    {"AI1拐点1输入"},
	{" V          "},
	{"0-10.00     "}
};
const unsigned char List_AI1_Mid1Ratio06[3][13] =
{
    {"AI1拐点1映射"},
	{" %          "},
	{"0-100.0     "}
};
const unsigned char List_AI1_Mid207[3][13] =
{
    {"AI1拐点2输入"},
	{" V          "},
	{"0-10.00     "}
};
const unsigned char List_AI1_Mid2Ratio08[3][13] =
{
    {"AI1拐点2映射"},
	{" %          "},
	{"0-100.0     "}
};
const unsigned char List_AI1_Max09[3][13] =
{
    {"AI1最大输入 "},
	{" V          "},
	{"0-10.00     "}
};
const unsigned char List_AI1_MaxRatio10[3][13] =
{
    {"AI1最大映射 "},
	{" %          "},
	{"0-100.0     "}
};
const unsigned char List_AI2_Min11[3][13] =
{
    {"AI2最小输入 "},
	{" V          "},
	{"0-10.00     "}
};
const unsigned char List_AI2_MinRatio12[3][13] =
{
    {"AI2最小映射 "},
	{" %          "},
	{"0-100.0     "}
};
const unsigned char List_AI2_Mid113[3][13] =
{
    {"AI2拐点1输入"},
	{" V          "},
	{"0-10.00     "}
};
const unsigned char List_AI2_Mid1Ratio14[3][13] =
{
    {"AI2拐点1映射 "},
	{" %          "},
	{"0-100.0     "}
};
const unsigned char List_AI2_Mid215[3][13] =
{
    {"AI2拐点2输入"},
	{" V          "},
	{"0-10.00     "}
};
const unsigned char List_AI2_Mid2Ratio16[3][13] =
{
    {"AI2拐点2映射"},
	{" %          "},
	{"0-100.0     "}
};
const unsigned char List_AI2_Max17[3][13] =
{
    {"AI2最大输入 "},
	{" V          "},
	{"0-10.00     "}
};
const unsigned char List_AI2_MaxRatio18[3][13] =
{
    {"AI2最大映射 "},
	{" %          "},
	{"0-100.0     "}
};
const unsigned char List_AI3_Min19[3][13] =
{
    {"AI3最小输入 "},
	{" V          "},
	{"-10.0-10.00" }
};
const unsigned char List_AI3_MinRatio20[3][13] =
{
    {"AI3最小映射 "},
	{" %          "},
	{"-100.0-100.0"}
};
const unsigned char List_AI3_Mid121[3][13] =
{
    {"AI3拐点1输入"},
	{" V          "},
	{"-10.00-10.00"}
};
const unsigned char List_AI3_Mid1Ratio22[3][13] =
{
    {"AI3拐点1映射"},
	{" %          "},
	{"-100.0-100.0"}
};
const unsigned char List_AI3_Mid223[3][13] =
{
    {"AI3拐点2输入"},
	{" V          "},
	{"-10.00-10.00"}
};
const unsigned char List_AI3_Mid2Ratio24[3][13] =
{
    {"AI3拐点2映射"},
	{" %          "},
	{"-100.0-100.0"}
};
const unsigned char List_AI3_Max25[3][13] =
{
    {"AI3最大输入 "},
	{" V          "},
	{"-10.00-10.00"}
};
const unsigned char List_AI3_MaxRatio26[3][13] =
{
    {"AI3最大映射 "},
	{" %          "},
	{"-100.0-100.0"}
};
const unsigned char List_DI_FilterTime[3][13] =
{
    {"DI滤波时间  "},
	{" s          "},
	{"0.01-10.00  "}
};
const unsigned char List_Pulse_FilterTime[3][13] =
{
    {"脉冲输入滤波"},
	{" s          "},
	{"0.1-10.0    "}
};
const unsigned char List_Pulse_Min27[3][13] =
{
    {"脉冲最小输入"},
	{" kHz        "},
	{"0.1-50.0    "}
};
const unsigned char List_Pulse_MinRatio28[3][13] =
{
    {"脉冲最小映射"},
	{" %          "},
	{"-100.0-100.0"}
};
const unsigned char List_Pulse_Max29[3][13] =
{
    {"脉冲最大输入"},
	{" kHz        "},
	{"0.1-50.0    "}
};
const unsigned char List_Pulse_MaxRatio30[3][13] =
{
    {"脉冲最大映射"},
	{" %          "},
	{"-100.0-100.0"}
};
const unsigned char List_DICtrEn313233[3][13] =
{
    {"DI虚拟输入  "},
	{"无效        "},
	{"有效        "}
};

const unsigned char List_DO_Delay[3][13] =
{
    {"DO延迟设定  "},
	{" s          "},
	{"0.1-10.0    "}
};
const unsigned char List_Pulse_Delay[3][13] =
{
    {"脉冲输出延迟"},
	{" s          "},
	{"0.1-10.0    "}
};
const unsigned char List_AO_Delay[3][13] =
{
    {"AO延迟设定  "},
	{" s          "},
	{"0.1-10.0    "}
};
const unsigned char List_AO1_Zero[3][13] =
{
    {"AO1零偏     "},
	{" %          "},
	{"-100.0-100.0"}
};
const unsigned char List_AO1_Gain[3][13] =
{
    {"AO1增益     "},
	{"            "},
	{"-2.00-2.00  "}
};
const unsigned char List_AO2_Zero[3][13] =
{
    {"AO2零偏     "},
	{" %          "},
	{"-100.0-100.0"}
};
const unsigned char List_AO2_Gain[3][13] =
{
    {"AO2增益     "},
	{"            "},
	{"-2.00-2.00  "}
};
const unsigned char List_Pulse_Range[3][13] =
{
    {"脉冲输出范围"},
	{" kHz        "},
	{"0.1-50.0    "}
};
const unsigned char List_Pulse_Centre[4][13] =
{
    {"脉冲中心频率"},
	{"无中心点    "},
	{"正输出      "},
	{"负输出      "}
};

//05
const unsigned char List_Stage0[3][13] =
{
    {"多段速0     "},
	{" rpm        "},
	{"            "}
};
const unsigned char List_Stage1[3][13] =
{
    {"多段速1     "},
	{" rpm        "},
	{"            "}
};
const unsigned char List_Stage2[3][13] =
{
    {"多段速2     "},
	{" rpm        "},
	{"            "}
};
const unsigned char List_Stage3[3][13] =
{
    {"多段速3     "},
	{" rpm        "},
	{"            "}
};
const unsigned char List_Stage4[3][13] =
{
    {"多段速4     "},
	{" rpm        "},
	{"            "}
};
const unsigned char List_Stage5[3][13] =
{
    {"多段速5     "},
	{" rpm        "},
	{"            "}
};
const unsigned char List_Stage6[3][13] =
{
    {"多段速6     "},
	{" rpm        "},
	{"            "}
};
const unsigned char List_Stage7[3][13] =
{
    {"多段速7     "},
	{" rpm        "},
	{"            "}
};

//06 pid
const unsigned char List_SetSrc[6][13] =
{
    {"PID给定源   "},
	{"数字给定    "},
	{"AI1         "},
	{"AI2         "},
	{"AI3         "},
	{"脉冲输入    "}
};
const unsigned char List_SetGain[3][13] =
{
    {"数字给定比例"},
	{" %          "},
	{"0.1-100.0   "}
};
const unsigned char List_FeedbackSrc[9][13] =
{
    {"PID反馈源   "},
	{"AI1         "},
	{"AI2         "},
	{"AI3         "},
	{"AI1+AI2     "},
	{"AI1-AI2     "},
	{"max(AI1,AI2)"},
	{"Min(AI1,AI2)"},
	{"脉冲输入    "}
};
const unsigned char List_Feedback[3][13] =
{
    {"PID反馈方向 "},
	{"正作用      "},
	{"反作用      "}
};
const unsigned char List_P_gain[3][13] =
{
    {"PID比例增益 "},
	{"            "},
	{"0.1-100.0   "}
};
const unsigned char List_I_time[3][13] =
{
    {"PID积分时间 "},
	{"            "},
	{"0.1-100.0   "}
};
const unsigned char List_D_time[3][13] =
{
    {"PID微分时间 "},
	{"            "},
	{"0.1-100.0   "}
};
const unsigned char List_Cal_Mode[3][13] =
{
    {"PID作用模式 "},
	{"停机不作用  "},
	{"停机时作用  "}
};
//07
const unsigned char List_AddrCode[3][13] =
{
    {"地址码      "},
	{"            "},
	{"0-255       "}
};
const unsigned char List_Bode[3][13] =
{
    {"波特率      "},
	{" 00bps      "},
	{"300-38400   "}
};
const unsigned char List_Check[4][13] =
{
    {"校验方式    "},
	{"无校验      "},
	{"偶校验      "},
	{"奇校验      "}
};
const unsigned char List_ComDelaytime[3][13] =
{
    {"延时时间    "},
	{" ms         "},
	{"0-255       "}
};
const unsigned char List_CAN_ControlMS[3][13] =
{
    {"CAN主从关系 "},
	{"  从        "},
	{"  主        "}
};
const unsigned char List_CAN_ControlEN[3][13] =
{
    {"CAN系统使能 "},
	{" 否         "},
	{" 是         "}
};
const unsigned char List_CAN_knot[3][13] =
{
    {"CAN节点     "},
	{"            "},
	{"0-125       "}
};
const unsigned char List_CAN_bps[3][13] =
{
    {"CAN波特率   "},
	{" 0bps       "},
	{"1-100       "}
};
const unsigned char List_CAN_Refresh[3][13] =
{
    {"CAN延时时间 "},
	{" 0ms        "},
	{"1-100       "}
};
//09
const unsigned char List_AddrCode2[3][13] =
{
    {"地址码      "},
	{"            "},
	{"0-255       "}
};
const unsigned char List_Bode2[3][13] =
{
    {"波特率      "},
	{"   kbps      "},
	{"100-1000    "}
};
const unsigned char List_CAN_Refresh2[3][13] =
{
    {"刷新时间    "},
	{" 0ms        "},
	{"1-100       "}
};

//08
const unsigned char List_ProcessCtrEn[3][13] =
{
    {"程控模式使能"},
	{"无效        "},
	{"有效        "}
};

const unsigned char List_TimeSet[3][13] =
{
    {"定时控制使能"},
	{"无效        "},
	{"有效        "}
};
const unsigned char List_ForCounterSet[3][13] =
{
    {"正向时间使能"},
	{"无效        "},
	{"有效        "}
};
const unsigned char List_RevCounterSet[3][13] =
{
    {"反向时间使能"},
	{"无效        "},
	{"有效        "}
};
const unsigned char List_ForAngleSet[3][13] =
{
    {"正向角度使能"},
	{"无效        "},
	{"有效        "}
};
const unsigned char List_RevAngleSet[3][13] =
{
    {"反向角度使能"},
	{"无效        "},
	{"有效        "}
};
const unsigned char List_StartDir[3][13] =
{
    {"正向自动启动"},
	{"无效        "},
	{"有效        "}
};
const unsigned char List_BrakeEn[3][13] =
{
    {"反向自动启动"},
	{"无效        "},
	{"有效        "}
};
const unsigned char List_FwdBreakEn[3][13]=
{
    {"正转自由停车"},
	{"无效        "},
	{"有效        "}
};
const unsigned char List_RevBreakEn[3][13]=
{
    {"反转自由停车"},
	{"无效        "},
	{"有效        "}
};
const unsigned char List_FwdAngle[3][13] =
{
    {"正向角度设定"},
	{" °          "},
	{"0-65535     "}
};
const unsigned char List_RevAngle[3][13] =
{
    {"反向角度设定"},
	{" °          "},
	{"0-65535     "}
};
const unsigned char List_FwdTime[3][13] =
{
    {"正转时间设定"},
	{" s          "},
	{"0.0-6553.5  "}
};
const unsigned char List_RevTime[3][13] =
{
    {"反向时间设定"},
	{" s          "},
	{"0.0-6553.5  "}
};
const unsigned char List_ForwStart_speed[3][13] =
{
    {"正向换向速度"},
	{" %          "},
	{"0-40        "}
};
const unsigned char List_RevStart_speed[3][13] =
{
    {"反向换向速度"},
	{" %          "},
	{"0-40        "}
};
//09
const unsigned char List_RRatedPower[2][13] =
{
    {"额定功率    "},
	{" kW         "}
};
const unsigned char List_RRatedVoltage[2][13] =
{
    {"额定电压    "},
	{" V          "}
};
const unsigned char List_RRatedSpeed[2][13] =
{
    {"额定转速    "},
	{" rpm        "}
};
const unsigned char List_RRatedTorque[2][13] =
{
    {"额定转矩    "},
	{" N.m        "}
};
const unsigned char List_RPhaseCurrent[2][13] =
{
    {"额定相电流  "},
	{" A          "}
};
const unsigned char List_RPhaseCurrent1002[2][13] =
{
    {"额定电流    "},
	{" A          "}
};
const unsigned char List_RPhaseCurrent1003[2][13] =
{
    {"最大电流    "},
	{" A          "}
};
const unsigned char List_RPhaseCurrent1004[2][13] =
{
    {"标定电流    "},
	{" A          "}
};
const unsigned char List_RPhaseCurrent1005[2][13] =
{
    {"额定电容    "},
	{" uF         "}
};
const unsigned char List_Characteristic1006[2][13] =
{
    {"过热保护    "},
	{" ℃         "}
};
const unsigned char List_RRatedVoltage1007[2][13] =
{
    {"母线过压值  "},
	{" V          "}
};

const unsigned char List_Characteristic1008[2][13] =
{
	{"前置角      "},
	{" °         "}
};
const unsigned char List_Characteristic1009[2][13] =
{
	{"后置角      "},
	{" °         "}
};



const unsigned char List_RApplication[6][13] =
{
    {"应用场合    "},
	{"       通用 "},
	{"       矿山 "},
	{"       纺织 "},
	{"       电梯 "},
	{"       注塑 "}
};
const unsigned char List_RPID[2][13] =
{
    {"产品编码    "},
	{"            "}
};
const unsigned char List_Characteristic1011[2][13] =
{
	{"降格温度    "},
	{" ℃         "}
};
const unsigned char List_Characteristic1012[3][13] =
{
	{"允许运行时间"},
	{" s          "},
	{"100-65535   "}		
};
const unsigned char List_Characteristic1013[3][13] =
{
	{"允许上电时间"},
	{" s		  "},
	{"200-65535   "}

};

const unsigned char List_SVDSP[3][13] =
{
    {"软件版本    "},
	{"            "},
	{"            "}
};
const unsigned char List_SVCPLD[3][13] =
{
    {"CPLD软件版本"},
	{"            "},
	{"            "}
};
//10
const unsigned char List_Err1[7][13] =
{
    {"故障记录1   "},
    {"故障类型    "},
    {"反馈转速    "},
    {"输出电流    "},
    {"母线电压    "},
    {"运行状态    "},
    {"累计运行时间"}
};
const unsigned char List_Err2[7][13] =
{
    {"故障记录2   "},
    {"故障类型    "},
    {"反馈转速    "},
    {"输出电流    "},
    {"母线电压    "},
    {"运行状态    "},
    {"累计运行时间"}
};
//11
const unsigned char List_BusAdj[3][13] =
{
    {"母线电压输入"},
	{" v          "},
	{"0.0-999.9   "}
};
const unsigned char List_PosAdj[2][20] =
{
    {"位置零点校准       "},
	{"     校准中 ...    "}
};
const unsigned char List_PosAdjEnd[2][20] =
{
    {"按ESC退出          "},
	{"   位置校准完成    "}
};
const unsigned char ACurrentTest[2][20] =
{
    {"A相电流测试        "},
	{"     测试中 ...    "}
};
const unsigned char BCurrentTest[2][20] =
{
    {"B相电流测试        "},
	{"     测试中 ...    "}
};
const unsigned char CCurrentTest[2][20] =
{
    {"C相电流测试        "},
	{"     测试中 ...    "}
};
const unsigned char BrakeTest[2][20] =
{
    {"制动测试           "},
	{"     测试中 ...    "}
};

const unsigned char List_nei[9][13] =
{
    {"内部开关量  "},
	{"0路输出     "},
	{"1路输出     "},
	{"2路输出     "},
	{"3路输出     "},
	{"4路输出     "},
	{"5路输出     "},
	{"6路输出     "},
	{"7路输出     "}
};
const unsigned char List_wai[9][13] =
{
    {"外部开关量  "},
	{"0路输出     "},
	{"1路输出     "},
	{"2路输出     "},
	{"3路输出     "},
	{"4路输出     "},
	{"5路输出     "},
	{"6路输出     "},
	{"7路输出     "}
};
const unsigned char List_Test7FFF[2][20] =
{
    {"按ESC退出        "},
	{"     恢复成功!   "}
};
//12
//12>13
const unsigned char List_CarrierFrequency[3][13] =
{
    {"斩波频率    "},
	{" Hz         "},
	{"1-20000     "}
};
const unsigned char List_MotorFun[3][13] =
{
    {"电机风扇开启"},
	{" ℃         "},
	{"0.0-99.9    "}
};
const unsigned char List_CtrFun[3][13] =
{
    {"散热风扇开启"},
	{" ℃         "},
	{"0.0-99.9    "}
};
const unsigned char List_MotorOverTemp[3][13] =
{
    {"电机过热保护"},
	{" ℃         "},
	{"0.0-180.0   "}
};
const unsigned char List_OverTemp[3][13] =
{
    {"驱动过热保护"},
	{" ℃         "},
	{"0.0-120.0   "}
};
const unsigned char List_OverSpeed[3][13] =
{
    {"超速报警值  "},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_OverVoltage[3][13] =
{
    {"母线过压值  "},
	{" V          "},
	{"0.0-450.0   "}
};
const unsigned char List_LowVoltage[3][13] =
{
    {"母线欠压值  "},
	{" V          "},
	//{"0.0-300.0   "}
	{"200-1600    "}
};
const unsigned char List_OverTorqueTime[3][13] =
{
    {"过转矩限时间"},
	{" s          "},
	{"0.0-100.0   "}
};
const unsigned char List_OverTorque[3][13] =
{
    {"过转矩检测值"},
	{" N.m        "},
	{"105-150     "}
};
const unsigned char List_BrakeCurrentRatio[3][13] =
{
    {"制动电流比率"},
	{" %          "},
	{"10-80       "}
};
const unsigned char List_AutoStartNum[3][13] =
{
    {"再启动次数  "},
	{" 次         "},
	{"0-10        "}
};
const unsigned char List_StopRunTime[3][13] =
{
    {"瞬停启动时间"},
	{" S          "},
	{"0.0-2.0     "}
};
const unsigned char List_RotaryInertia[3][13] =
{
    {"转动惯量补偿"},
	{" kg.m2      "},
	{"0.01-600.00 "}
};
const unsigned char List_gjcs1312[3][13] =
{
    {"泄放电流设定"},
	{" A          "},
	{"0.0-1000.0 "}
};
const unsigned char List_gjcs1313[3][13] =
{
    {"泄放电阻输入"},
	{" Ω         "},
	{"0.1-9.0     "}
};
const unsigned char List_gjcs1314[3][13] =
{
    {"制动启动电压"},
	{" V          "},
	{"0.0-3000.0  "}
};
const unsigned char List_gjcs1317[3][13] =
{
    {"初始位置    "},
	{"            "},
	{"0-65535     "}
};
const unsigned char List_gjcs1315[2][13] =
{
    {"应用场合    "},
	{"            "},
};


const unsigned char List_PISet[8][13] =
{
    {"加减速模式  "},
	{"直线加减速  "},
	{"2段加减速   "},
	{"3段加减速   "},
	{"4段加减速   "},
	{"端子控制    "},
	{"S曲线A      "},
	{"S曲线B      "}
};
const unsigned char S1P[3][13] =
{
    {"PI调节比例1 "},
	{"            "},
	{"25-25000    "}
};
const unsigned char S1I[3][13] =
{
    {"PI调节积分1 "},
	{"            "},
	{"40-40000    "}
};
const unsigned char S2P[3][13] =
{
	{"加速时间2   "},
	{" s          "},
	{"0.1-3600.0  "}
};
const unsigned char S2I[3][13] =
{
    {"减速时间2   "},
	{" s          "},
	{"0.1-3600.0  "}
};
const unsigned char S3P[3][13] =
{
	{"加速时间3   "},
	{" s          "},
	{"0.1-3600.0  "}
};
const unsigned char S3I[3][13] =
{
	{"减速时间3   "},
	{" s          "},
	{"0.1-3600.0  "}
};
const unsigned char S4P[3][13] =
{
	{"加速时间4   "},
	{" s          "},
	{"0.1-3600.0  "}
};
const unsigned char S4I[3][13] =
{
	{"减速时间4   "},
	{" s          "},
	{"0.1-3600.0  "}
};
const unsigned char List_SwitchPara1[3][13] =
{
    {"切换速度1   "},
	{" rpm        "},
	{"0.1-3600.0  "}
};
const unsigned char List_SwitchPara2[3][13] =
{
    {"切换速度2   "},
	{" rpm        "},
	{"0.1-3600.0  "}
};
const unsigned char List_SwitchPara3[3][13] =
{
    {"切换速度3   "},
	{" rpm        "},
	{"0.1-3600.0  "}
};
const unsigned char List_SpeedUpStartTime[3][13] =
{
    {"加速起始时间"},
	{" s          "},
	{"0.02-60.00  "}
};
const unsigned char List_SpeedUpEndTime[3][13] =
{
    {"加速结束时间"},
	{" s          "},
	{"0.02-60.00  "}
};
const unsigned char List_SpeedDownStartTime[3][13] =
{
    {"减速起始时间"},
	{" s          "},
	{"0.02-60.00  "}
};
const unsigned char List_SpeedDownEndTime[3][13] =
{
    {"减速结束时间"},
	{" s          "},
	{"0.02-60.00  "}
};
const unsigned char List_SpeedUpStartP[3][13] =
{
    {"加速起始比例"},
	{" %          "},
	{"1.0-100.0   "}
};
const unsigned char List_SpeedUpEndP[3][13] =
{
    {"加速结束比例"},
	{" s          "},
	{"1.0-100.0   "}
};
const unsigned char List_SpeedDownStartP[3][13] =
{
    {"减速起始比例"},
	{" s          "},
	{"1.0-100.0   "}
};
const unsigned char List_SpeedDownEndP[3][13] =
{
    {"减速结束比例"},
	{" s          "},
	{"1.0-100.0   "}
};
const unsigned char Wenbu1[3][13] =
{
    {"电机温补A   "},
	{"            "},
	{"-10-10      "}
};
const unsigned char Wenbu2[3][13] =
{
    {"电机温补B   "},
	{"            "},
	{"-10-10      "}
};
const unsigned char Wenbu3[3][13] =
{
    {"电机温补C   "},
	{"            "},
	{"-10-10      "}
};
const unsigned char  List_KeyLock[3][13] =
{
    {"锁定使能    "},
	{"无效        "},
	{"有效        "}
};
const unsigned char List_Password[1][20] =
{
    {"请输入密码         "}
};
const unsigned char List_Password3[1][20] =
{
    {"取消密码           "}
};

//13
const unsigned char List_JKCustomMenu[26][13] =
{
    {"监控菜单    "},
    {"实际转速$N$$"},
    {"给定转速$Ns$"},
	{"母线电压$U$$"},
	{"输出电流$I$$"},
	{"当前故障$$$$"},
	{"驱动温度$Td$"},
	{"电流给定$Is$"},
	{"转矩给定$Ts$"},
	{"A相电流$$Ia$"},
	{"B相电流$$Ib$"},
	{"C相电流$$Ic$"},
	{"转子位置$Rp$"},
	{"制动占空$Bp$"},
	{"运行时间$Rt$"},	
	{"上电时间$Pt$"},
 	{"数字输入$DI$"},
	{"数字输出$D0$"},
	{"模拟输入$AI1"},
	{"模拟输入$AI2"},
	{"模拟输入$AI3"},
	{"模拟输出$AO1"},
	{"输入频率$FI$"},	
 	{"角度1$$$$Ad$"},
  	{"角度2$$$$Ac$"},
	{"保留$$$$$$$$"},
};

const unsigned char List_JKCustomMenu2[21][13] =
{
    {"监控菜单    "},
    {"实际转速$N$$"},
    {"给定转速$Ns$"},
	{"母线电压$U$$"},
	{"输出电流$I$$"},
	{"电机温度$Tm$"},
	{"驱动温度$Td$"},
	{"模拟输入$AI1"},
	{"模拟输入$AI2"},
	{"模拟输入$AI3"},
	{"模拟输出$AO1"},
	{"模拟输出$AO2"},
	{"输入频率$FI$"},
 	{"输出频率$FO$"},
 	{"数字输入$DI$"},
	{"数字输出$D0$"},
	{"转子位置$R$$"},
 	{"开通角$$$Ad$"},
	{"电流给定$Is$"},
	{"累计时间$Rt$"}
};
const unsigned char List_JKmenuLen[3][13] =
{
    {"监控菜单长度"},
	{"            "},
	{"3-20        "}
};


//14
const unsigned char List_PhaseA_I[2][13] =
{
    {"A相绕组电流 "},
	{" A          "}
};
const unsigned char List_PhaseB_I[2][13] =
{
    {"B相绕组电流 "},
	{" A          "}
};
const unsigned char List_PhaseC_I[2][13] =
{
    {"C相绕组电流 "},
	{" A          "}
};
const unsigned char List_Sanre[2][13] =
{
    {"散热器温度  "},
	{" ℃         "}
};
const unsigned char List_AngleOn[2][13] =
{
    {"开通角      "},
	{" °          "}
};
const unsigned char List_AngleOff[2][13] =
{
    {"关断角      "},
	{" °          "}
};
const unsigned char List_DesireDAC[2][13] =
{
    {"电流给定    "},
	{" A          "}
};
const unsigned char List_SpeedAdj_P[2][13] =
{
    {"转速PI比例  "},
	{"            "}
};
const unsigned char List_SpeedAdj_I[2][13] =
{
    {"转速PI积分  "},
	{"            "}
};
const unsigned char List_PhaseMaxCurrentSet[2][13] =
{
    {"相电流最大值"},
	{" A          "}
};
const unsigned char List_PhaseMinInductanceSet[2][13] =
{
    {"相电感最小值"},
	{" mH         "}
};
const unsigned char List_PhaseMaxInductanceSet[2][13] =
{
    {"相电感最大值"},
	{" mH         "}
};
const unsigned char List_CoilResistanceSet[2][13] =
{
    {"线圈电阻    "},
	{" Ω         "}
};
const unsigned char List_LeakageIndSet[2][13] =
{
    {"漏电感设置  "},
	{" mH         "}
};
const unsigned char List_ZeroPosAdj[2][13] =
{
    {"零点校正值  "},
	{" °          "}
};
const unsigned char List_BusDCV[2][13] =
{
    {"母线电压系数"},
	{" V          "}
};
const unsigned char List_OutCurrent[2][13] =
{
    {"输出电流系数"},
	{" A          "}
};
const unsigned char List_ACurrent[2][13] =
{
    {"A相电流系数 "},
	{" A          "}
};
const unsigned char List_BCurrent[2][13] =
{
    {"B相电流系数 "},
	{" A          "}
};
const unsigned char List_CCurrent[2][13] =
{
    {"C相电流系数 "},
	{" A          "}
};
const unsigned char List_Dtemp[2][13] =
{
    {"驱动温度系数"},
	{" ℃         "}
};
const unsigned char List_Mtemp[2][13] =
{
    {"电机温度系数"},
	{" ℃         "}
};
const unsigned char List_JAI1[2][13] =
{
    {"AI1校准系数 "},
	{"            "}
};
const unsigned char List_JAI2[2][13] =
{
    {"AI2校准系数 "},
	{"            "}
};
const unsigned char List_JAI3[2][13] =
{
    {"AI3校准系数 "},
	{"            "}
};
const unsigned char List_JAO1[2][13] =
{
    {"AO1校准系数 "},
	{"            "}
};
const unsigned char List_JAO2[2][13] =
{
    {"AO2校准系数 "},
	{"            "}
};
const unsigned char List_CurrentFPoint1[3][13] =
{
    {"电流拟合点1 "},
	{" A          "},
	{"            "}
};
const unsigned char List_CurrentFPoint2[3][13] =
{
    {"电流拟合点2 "},
	{" A          "},
	{"            "}
};
const unsigned char List_CurrentFPoint3[3][13] =
{
    {"电流拟合点3 "},
	{" A          "},
	{"            "}
};
const unsigned char List_CurrentFPoint4[3][13] =
{
    {"电流拟合点4 "},
	{" A          "},
	{"            "}
};
const unsigned char List_CurrentFPoint5[3][13] =
{
    {"电流拟合点5 "},
	{" A          "},
	{"            "}
};
const unsigned char List_TorqueFPoint1[3][13] =
{
    {"转矩拟合点1 "},
	{" N.m        "},
	{"            "}
};
const unsigned char List_TorqueFPoint2[3][13] =
{
    {"转矩拟合点2 "},
	{" N.m        "},
	{"            "}
};
const unsigned char List_TorqueFPoint3[3][13] =
{
    {"转矩拟合点3 "},
	{" N.m        "},
	{"            "}
};
const unsigned char List_TorqueFPoint4[3][13] =
{
    {"转矩拟合点4 "},
	{" N.m        "},
	{"            "}
};
const unsigned char List_TorqueFPoint5[3][13] =
{
    {"转矩拟合点5 "},
	{" N.m        "},
	{"            "}
};
const unsigned char List_RunTime[3][13] =
{
    {"允许运行时间"},
	{" h          "},
	{"1000-65535  "}
};

const unsigned char List_ForgeNum0[3][13] =
{
    {"打击次数1   "},
	{" 次         "},
	{"0-100       "}
};
const unsigned char List_ForgeAngle0[3][13] =
{
    {"打击角度1   "},
	{" 度         "},
	{"0-32000     "}
};
const unsigned char List_ForgeSpeed0[3][13] =
{
    {"打击速度1   "},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_ReturnSpeed0[3][13] =
{
    {"返回速度1   "},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_IntervalTime0[3][13] =
{
    {"换向时间1   "},
	{" s          "},
	{"0-5.0       "}
};
const unsigned char List_ForgeTorque0[3][13] =
{
    {"打击转矩1   "},
	{" %          "},
	{"0-100       "}
};
const unsigned char List_ForgeNum1[3][13] =
{
    {"打击次数2   "},
	{" 次         "},
	{"0-100       "}
};
const unsigned char List_ForgeAngle1[3][13] =
{
    {"运行角度2   "},
	{" 度         "},
	{"0-32000     "}
};
const unsigned char List_ForgeSpeed1[3][13] =
{
    {"打击速度2   "},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_ReturnSpeed1[3][13] =
{
    {"返回速度2   "},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_IntervalTime1[3][13] =
{
    {"换向时间2   "},
	{" s          "},
	{"0-5.0       "}
};
const unsigned char List_ForgeTorque1[3][13] =
{
    {"打击转矩2   "},
	{" %          "},
	{"0-100       "}
};
const unsigned char List_ForgeNum2[3][13] =
{
    {"打击次数3   "},
	{" 次         "},
	{"0-100       "}
};
const unsigned char List_ForgeAngle2[3][13] =
{
    {"运行角度3   "},
	{" 度         "},
	{"0-32000     "}
};
const unsigned char List_ForgeSpeed2[3][13] =
{
    {"打击速度3   "},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_ReturnSpeed2[3][13] =
{
    {"返回速度3   "},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_IntervalTime2[3][13] =
{
    {"换向时间3   "},
	{" s          "},
	{"0-5.0       "}
};
const unsigned char List_ForgeTorque2[3][13] =
{
    {"打击转矩3   "},
	{" %          "},
	{"0-100       "}
};
const unsigned char List_ForgeNum3[3][13] =
{
    {"打击次数4   "},
	{" 次         "},
	{"0-100       "}
};
const unsigned char List_ForgeAngle3[3][13] =
{
    {"运行角度4   "},
	{" 度         "},
	{"0-32000     "}
};
const unsigned char List_ForgeSpeed3[3][13] =
{
    {"打击速度4   "},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_ReturnSpeed3[3][13] =
{
    {"返回速度4   "},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_IntervalTime3[3][13] =
{
    {"换向时间4   "},
	{" s          "},
	{"0-5.0       "}
};
const unsigned char List_ForgeTorque3[3][13] =
{
    {"打击转矩4   "},
	{" %          "},
	{"0-100       "}
};
const unsigned char List_ForgeNum4[3][13] =
{
    {"打击次数5   "},
	{" 次         "},
	{"0-100       "}
};
const unsigned char List_ForgeAngle4[3][13] =
{
    {"运行角度5   "},
	{" 度         "},
	{"0-32000     "}
};
const unsigned char List_ForgeSpeed4[3][13] =
{
    {"打击速度5   "},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_ReturnSpeed4[3][13] =
{
    {"返回速度5   "},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_IntervalTime4[3][13] =
{
    {"换向时间5   "},
	{" s          "},
	{"0-5.0       "}
};
const unsigned char List_ForgeTorque4[3][13] =
{
    {"打击转矩5   "},
	{" %          "},
	{"0-100       "}
};


const unsigned char List_Err1Type[22][13] =
{
    {"EEr1类型    "},
	{"直流母线过压"},
	{"直流母线欠压"},
	{"输出过电流  "},
	{"过载        "},
	{"位置传感器  "},
	{"制动超时    "},
	{"内部故障    "},
	{"A相电流故障 "},
	{"B相电流故障 "},
	{"C相电流故障 "},
	{"内部故障    "},
	{"EEPROM故障  "},
	{"超速        "},
	{"超温        "},
	{"母线接触器  "},
	{"交流电源故障"},
	{"A相超温     "},
	{"B相超温     "},
	{"C相超温     "},
	{"制动模块故障"},
	{"超出允许时间"}
};
const unsigned char List_Err1Feedspeed[2][13] =
{
    {"Err1反馈转速"},
	{" rpm        "}
};
const unsigned char List_Err1BusI[2][13] =
{
    {"Err1输出电流"},
	{" A          "}
};
const unsigned char List_Err1BusV[2][13] =
{
    {"EEr1母线电压"},
	{" V          "}
};
const unsigned char List_Err1RunState[11][13] =
{
    {"EEr1运行状态"},
	{"    正常待机"},
	{"    故障待机"},
	{"    下载状态"},
	{"    正转运行"},
	{"    反转运行"},
	{"    点动正转"},
	{"    点动反转"},
	{"    制动状态"},
 	{"    电机抱死"},
	{"    系统测试"}
};
const unsigned char List_Err1Runtime[2][13] =
{
    {"EEr1运行时间"},
	{" h          "}
};
const unsigned char List_Err2Type[23][13] =
{
    {"EEr2类型    "},
	{"直流母线过压"},
	{"直流母线欠压"},
	{"输出过电流  "},
	{"过载        "},
	{"位置传感器  "},
	{"保留        "},
	{"保留        "},
	{"A相电流故障 "},
	{"B相电流故障 "},
	{"C相电流故障 "},
	{"保留        "},
	{"EEPROM故障  "},
	{"超速        "},
	{"超温        "},
	{"母线接触器  "},
	{"交流电源故障"},
	{"A相超温     "},
	{"B相超温     "},
	{"C相超温     "},
	{"制动模块故障"},
	{"超出允许时间"},
    {"CAN同步异常 "}
};
const unsigned char List_SysErrType[23][13] =
{
    {"故障        "},
	{"直流母线过压"},
	{"直流母线欠压"},
	{"输出过电流  "},
	{"过载        "},
	{"位置传感器  "},
	{"制动超时    "},
	{"内部故障    "},
	{"A相电流故障 "},
	{"B相电流故障 "},
	{"C相电流故障 "},
	{"内部故障    "},
	{"EEPROM故障  "},
	{"超速        "},
	{"超温        "},
	{"母线接触器  "},
	{"交流电源故障"},
	{"A相超温     "},
	{"B相超温     "},
	{"C相超温     "},
	{"制动模块故障"},
	{"超出允许时间"},
	{"CAN同步异常 "}
};
const unsigned char List_Err2Feedspeed[2][13] =
{
    {"Err2反馈转速"},
	{" rpm        "}
};
const unsigned char List_Err2BusI[2][13] =
{
    {"Err2输出电流"},
	{" A          "}
};
const unsigned char List_Err2BusV[2][13] =
{
    {"EEr2母线电压"},
	{" V          "}
};
const unsigned char List_Err2RunState[11][13] =
{
    {"EEr2运行状态"},
	{"    正常待机"},
	{"    故障待机"},
	{"    下载状态"},
	{"    正转运行"},
	{"    反转运行"},
	{"    点动正转"},
	{"    点动反转"},
	{"    制动状态"},
 	{"    电机抱死"},
	{"    系统测试"}
};
const unsigned char List_Err2Runtime[2][13] =
{
    {"EEr2运行时间"},
	{" h          "}
};

const unsigned char List_CurState[11][13] =
{
    {"当前运行状态"},
	{"    正常待机"},
	{"    故障待机"},
	{"    下载状态"},
	{"    正转运行"},
	{"    反转运行"},
	{"    点动正转"},
	{"    点动反转"},
	{"    制动状态"},
 	{"    电机抱死"},
	{"    系统测试"}
};
const unsigned char List_JKVariable[19][4] =
{
	{"Ns "},
	{"N  "},
	{"U  "},
	{"I  "},
	{"Tm "},
	{"Td "},
	{"AI1"},
	{"AI2"},
	{"AI3"},
	{"AO1"},
	{"AO2"},
	{"FI "},
 	{"FO "},
 	{"DI "},
	{"D0 "},
	{"Rp "},
 	{"Ad "},
	{"Is "},
	{"Rt "}
};
const unsigned char List_JkUnit[19][4] =
{
  	{"rpm"},
    {"rpm"},
    {"V  "},
    {"A  "},
	{"℃ "},
	{"℃ "},
	{"V  "},
	{"V  "},
	{"V  "},
	{"V  "},
	{"V  "},
	{"kHz"},
 	{"kHz"},
	{"   "},
	{"   "},
	{"°  "},
	{"°  "},
    {"A  "},
    {"h  "}
};
const unsigned char List_Sign[3][2] =
{
    {" "},
	{"-"},
	{"+"}
};
const unsigned char List_Symbol[4][3] =
{
    {"  "},
	{"▼"},
	{"◇"},
	{"▲"}
};
const unsigned char List_Symbol3[5][4] =
{
    {"   "},
	{" ▼"},
	{" ◇"},
	{" ▲"},
	{" ♂"}
};
const unsigned char List_SRC[4][6] =
{
	{"LOC  "},
	{"REM  "},
	{"COM  "},
	{"CAN  "}
};
const unsigned char List_JKState[13][6] =
{
	{"     "},
	{"  JOG"},
	{"FWD  "},
	{"REV  "},
	{"> RUN"},
	{"READY"},
	{" LOCK"},
	{" COPY"},
	{" TEST"},
	{"ERROR"},
	{"BRAKE"},
	{"< RUN"},
};
const unsigned char List_JKERr[22][5] =
{
	{"OV  "},
	{"LV  "},
	{"OC  "},
	{"OL  "},
	{"PSE "},
	{"IDL "},
	{"IDL "},
	{"ACE "},
	{"BCE "},
	{"CCE "},
	{"IDL "},
	{"EEP "},
	{"OS  "},
	{"OT  "},
	{"CCL "},
	{"ISF "},
	{"AOT "},
	{"BOT "},
	{"COT "},
	{"BM  "},
	{"RTA "},
	{"    "}
};
const unsigned char List_JKBlank1[1][12] =
{
    {"       "}
};
const unsigned char List_JKBlank[1][12] =
{
    {"           "}
};
const unsigned char List_PasswordErr[2][20] =
{
	{"按ESC退出          "},
	{"    密码错误!      "}
};
const unsigned char List_DownLOADErr[2][20] =
{
	{"按ESC退出          "},
	{"  运行中不能下载!  "}
};
const unsigned char List_UPloadErr[2][20] =
{
	{"按ESC退出          "},
	{"  运行中不能上传!  "}
};
const unsigned char DownLoadEnd[2][20] =
{
	{"按ESC退出          "},
    {"     下载完成!     "}
};
const unsigned char UpLoadEnd[2][20] =
{
	{"按ESC退出          "},
    {"     上传完成!     "}
};
const unsigned char ComErr[3][20] =
{
    {"故障               "},
    {"     通信异常      "},
    {"                   "}
};
const unsigned char SysErr[3][20] =
{
    {"故障               "},
	{"     系统错误      "},
    {"                   "}
};
const unsigned char systemInit[2][20] =
{
    {"  系统信息读取中   "},
    {"     .......       "}
};

const unsigned char UpLoadCfg[2][20] =
{
    {"    参数上传中     "},
    {"        ......     "}
};
const unsigned char ReUpLoadCfg[2][20] =
{
    {" 正在重新载入参数  "},
    {"      ......       "}
};
const unsigned char Restore[2][20] =
{
    {" 正在恢复出厂参数  "},
    {"      ......       "}
};
const unsigned char DownLoadCfg[2][20] =
{
    {"   下载面板参数    "},
    {"       ......      "}
};


#endif
