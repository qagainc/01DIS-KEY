#ifndef LIST_H_
#define LIST_H_

const unsigned char YCf[4] ="�� ";
const unsigned char Tab0[5] ="  0:";
const unsigned char Tab1[5] ="  1:";
const unsigned char Blank3[4] ="   ";
const unsigned char Blank6[7] ="      ";
const unsigned char Blank7[8] ="       ";
const unsigned char Blank9[10]="          ";
const unsigned char Blank19[20]={"                    "};
const unsigned char rpm[]="           rpm ";
const unsigned char RunState[9][5]={{"����"},{"����"},{"����"},{"����"},{"�㶯"},{"�ƶ�"},{"��ס"},{"����"},{"�쳣"}};
const unsigned char  List_Menu[16][13] =        //LV1
{
    {"�˵�        "},
	{"���з�ʽ    "},
    {"ת�ٸ���    "},
	{"���в���    "},
    {"���Ӷ���    "},
	{"��������    "},
	//{"ģ��ӳ��    "},
	{"�����      "},
    {"PID����     "},
    {"�̿�ģʽ    "},
	{"����ͨ��    "},
    {"CANͨ��     "},
	{"���Բ���    "},
	{"���ϼ�¼    "},
    {"���Բ���    "},
	{"�߼�����    "},
	{"�������    "}
	//{"���Ҳ���    "},
	//{"��ѹ����    "}
};
const unsigned char  List_RunMode[14][13] =     //LV4
{
    {"00- ���з�ʽ"},
	{"��������ѡ��"},
    {"����ģʽѡ��"},
	{"�������ѡ��"},
	//{"ͣ������ѡ��"},
	{"��������ѡ��"},
	{"��������ѡ��"},
	{"����ͣ��ѡ��"},
    {"����ͣ��ѡ��"},
	{"��ͣ����ѡ��"},
	{"�ƶ���ʽѡ��"},
	{"��������ѡ��"},
    {"ת������    "},
    {"ת������    "},
    {"ת����������"}
};
//const unsigned char  List_RunMode2[11][13] =     //LV4
//{
//    {"00- ���з�ʽ"},
//	{"��������ѡ��"},
//	{"�������ѡ��"},
//	{"ͣ������ѡ��"},
//	{"��������ѡ��"},
//	{"��������ѡ��"},
//	{"����ͣ��ѡ��"},
//    {"����ͣ��ѡ��"},
//	{"��ͣ����ѡ��"},
//	{"�ƶ���ʽѡ��"},
//	{"��������ʹ��"}
//};
const unsigned char List_RunPara[20][13] = //01>>02
{
    {"02- ���в���"},
	{"������ת�ٶ�"},
	{"������ת�ٶ�"},
	{"����ʱ��    "},
	{"����ʱ��    "},
	{"�㶯��ת�ٶ�"},
	{"�㶯��ת�ٶ�"},
    {"�㶯����ʱ��"},
	{"�㶯����ʱ��"},
	{"���������趨"},
	{"��������ֵ  "},
	{"��������ʱ��"},
	{"ת������    "},
	{"ת������    "},
	{"ת���޶�    "},//qagainc+
	{"ת���޶�    "},//qagainc+
	{"�������нǶ�"},
	{"�������нǶ�"},
	{"����Ť���趨"},
	{"����Ť���趨"}

};
const unsigned char List_SpeedSet[6][13] = //02>>01
{
    {"01- ת�ٸ���"},
	{"������ϵ    "},
	{"������      "},
	{"��������    "},
	{"λ�ø���    "},
	{"ת�ظ���    "}
};
const unsigned char List_TerminalDef[28][13] =  //16>>28
{
	{"03- ���Ӷ���"},
	{"���ӿ��Ʒ�ʽ"},
	{"DI1����ѡ�� "},
	{"DI2����ѡ�� "},
	{"DI3����ѡ�� "},
	{"DI4����ѡ�� "},
	{"DI5����ѡ�� "},
	{"DI6����ѡ�� "},
	{"DI7����ѡ�� "},
	{"DI8����ѡ�� "},//+
	{"DI9����ѡ�� "},//+
	{"DI11����ѡ��"},//+
	{"DI12����ѡ��"},//+
	{"DI13����ѡ��"},//+	
	{"DI14��������"},//+
	{"DI15��������"},//+
	{"DI16��������"},//+		
	{"D01����ѡ�� "},
	{"D02����ѡ�� "},
	{"D03����ѡ�� "},
	{"D04����ѡ�� "},
	{"D05����ѡ�� "},//+	
	{"D06����ѡ�� "},//+	
	{"D07����ѡ�� "},//+	
	{"D08����ѡ�� "},//+		
	{"A01����ѡ�� "},
	{"A02����ѡ�� "},
	//{"�������ѡ��"}
};
const unsigned char List_TerminalCfg[35][13] =
{
	{"04- ��������"},
    {"AI�˲�ʱ��  "},
	{"DI�˲�ʱ��  "},
    {"DO�ӳ��趨  "},
	{"AI1��С���� "},
	{"AI1��Сӳ�� "},
	{"AI1�յ�1����"},
	{"AI1�յ�1ӳ��"},
	{"AI1�յ�2����"},
	{"AI1�յ�2ӳ��"},
	{"AI1������� "},
	{"AI1���ӳ�� "},
	{"AI2��С���� "},
	{"AI2��Сӳ�� "},
	{"AI2�յ�1����"},
	{"AI2�յ�1ӳ��"},
	{"AI2�յ�2����"},
	{"AI2�յ�2ӳ��"},
	{"AI2������� "},
	{"AI2���ӳ�� "},
	{"AI3��С���� "},
	{"AI3��Сӳ�� "},
	{"AI3�յ�1����"},
	{"AI3�յ�1ӳ��"},
	{"AI3�յ�2����"},
	{"AI3�յ�2ӳ��"},
	{"AI3������� "},
	{"AI3���ӳ�� "},
	{"������С����"},
	{"������Сӳ��"},
	{"�����������"},
	{"�������ӳ��"},
    {"DI14�������"},
    {"DI15�������"},
    {"DI16�������"}
};
const unsigned char List_AnalogICfg[26][13] =
{
	{"05- ģ��ӳ��"},
	{"AI�˲�ʱ��  "},
	{"AI1��С���� "},
	{"AI1��Сӳ�� "},
	{"AI1�յ�1����"},
	{"AI1�յ�1ӳ��"},
	{"AI1�յ�2����"},
	{"AI1�յ�2ӳ��"},
	{"AI1������� "},
	{"AI1���ӳ�� "},
	{"AI2��С���� "},
	{"AI2��Сӳ�� "},
	{"AI2�յ�1����"},
	{"AI2�յ�1ӳ��"},
	{"AI2�յ�2����"},
	{"AI2�յ�2ӳ��"},
	{"AI2������� "},
	{"AI2���ӳ�� "},
	{"AI3��С���� "},
	{"AI3��Сӳ�� "},
	{"AI3�յ�1����"},
	{"AI3�յ�1ӳ��"},
	{"AI3�յ�2����"},
	{"AI3�յ�2ӳ��"},
	{"AI3������� "},
	{"AI3���ӳ�� "},
};
const unsigned char List_MultistageSpeed[9][13] =
{
    {"05- �����  "},
	{"�����0     "},
	{"�����1     "},
	{"�����2     "},
	{"�����3     "},
	{"�����4     "},
	{"�����5     "},
	{"�����6     "},
	{"�����7     "}
};
const unsigned char List_ProcessPID[8][13] =
{
    {"06- PID���� "},	
	{"PID����Դ   "},
	{"PID���ָ��� "},
	{"PID����Դ   "},
	{"PID�������� "},
	{"PID�������� "},
	{"PID����ʱ�� "},
	{"PID΢��ʱ�� "}
};
const unsigned char List_CommPara[5][13] =
{
    {"08- ����ͨ��"},
	{"��ַ��      "},
	{"������      "},
	{"У�鷽ʽ    "},
	{"��ʱʱ��    "}

};
const unsigned char List_CommPara2[4][13] =
{
    {"09- CANͨѶ "},
	{"��ַ��      "},
	{"������      "},
	{"ˢ��ʱ��    "}
};

const unsigned char List_ProcessControl[13][13] =
{
    {"07- �̿�ģʽ"},
	{"�̿�ģʽʹ��"},
	{"��ʱ����ʹ��"},
	{"����ʱ��ʹ��"},
	{"����ʱ��ʹ��"},
	{"����Ƕ�ʹ��"},
	{"����Ƕ�ʹ��"},
	{"�����Զ�����"},
	{"�����Զ�����"}, 
	//{"��ת�Ƕ��趨"},
	//{"��ת�Ƕ��趨"},
	{"��תʱ���趨"},
	{"��תʱ���趨"},
	//{"�������ٶ�"},
	//{"�������ٶ�"}
};
const unsigned char List_Characteristic[17][13] =
{
    {"10- ���Բ���"},
	{"�����    "},
	{"���ѹ    "},
	{"�����    "},
	{"������    "},
	{"�궨����    "},
	{"�����    "},
	{"���ȱ���    "},
	{"ĸ�߹�ѹֵ  "},
	{"ǰ�ý�      "},
	{"���ý�      "},
	//{"�ת��    "},
	//{"�ת��    "},
	//{"������  "},
	//{"Ӧ�ó���    "},
	{"��Ʒ����    "},
	{"�����¶�    "},
	{"��������ʱ��"},
	{"�����ϵ�ʱ��"},
	{"����汾��  "},
	{"CPLD����汾"}
};
const unsigned char List_ErrorHistory[3][13] =
{
    {"11- ���ϼ�¼"},
	{"���ϼ�¼1   "},
	{"���ϼ�¼2   "}
};
const unsigned char List_TestPara[11][13] =
{
    {"12- ���Բ���"},
	{"ֱ��ĸ��У׼"},
	{"λ�����У׼"},
	{"A��������� "},
	{"B��������� "},
	{"C��������� "},
    //{"�ƶ�����    "},
	{"�ڲ�������  "},
	{"�ⲿ������  "},
	{"�ϴ�����    "},
	{"���ز���    "},
	{"�ָ���������"}
};
const unsigned char List_AdvancePar[21][13] =
{
    {"13- �߼�����"},
	{"ն��Ƶ��    "},
	//{"������ȿ���"},
	{"ɢ�ȷ��ȿ���"},
    {"���ٱ���ֵ  "},
	//{"������ȱ���"},
	//{"�������ȱ���"},	
	//{"ĸ�߹�ѹֵ  "},
	{"ĸ��Ƿѹֵ  "},
	{"��ת�ؼ��ֵ"},	
	{"��ת����ʱ��"},
	{"�ƶ���������"},
	{"����������  "},	
	{"˲ͣ����ʱ��"},
	//{"�Ӽ���ģʽ  "},
	{"PI���ڱ���1 "},
	{"PI���ڻ���1 "},
    {"ת����������"},
    {"й�ŵ����趨"},
    {"й�ŵ�������"},
    {"�ƶ�������ѹ"},
    {"Ӧ�ó���    "},      
    {"�û�����    "},
    {"��ʼλ��    "},
    {"��������    "}, 
    {"ȡ������    "}    
	//{"����ʱ��2   "},
	//{"����ʱ��2   "},
	//{"����ʱ��3   "},
	//{"����ʱ��3   "},
	//{"����ʱ��4   "},
	//{"����ʱ��4   "},
	//{"�л�ת��1   "},
	//{"�л�ת��2   "},
	//{"�л�ת��3   "},
	//{"������ʼʱ��"},
	//{"���ٽ���ʱ��"},
	//{"������ʼʱ��"},
	//{"���ٽ���ʱ��"},
	//{"������ʼ����"},
	//{"���ٽ�������"},
	//{"������ʼ����"},
	//{"���ٽ�������"},
	//{"����²�1   "},
	//{"����²�2   "},
	//{"����²�3   "},
	//{"����ʹ��    "},

//	{"���Ҳ���    "}
};
const unsigned char List_InterfaceManage[3][13] =
{
    {"14- �������"},
	{"��ز˵�����"},
	{"��ز˵�����"}
};
const unsigned char List_FirmPara[41][13] =
{
    {"14- ���Ҳ���"},
	{"A��������� "},
	{"B��������� "},
	{"C��������� "},
	{"ɢ�����¶�  "},
	{"��ͨ��      "},
	{"�ضϽ�      "},
	{"��������    "},
	{"ת��PI����  "},
	{"ת��PI����  "},
	{"��������ֵ"},
	{"������Сֵ"},
	{"�������ֵ"},
	{"��Ȧ����    "},
	{"���©���  "},
	{"���У��ֵ  "},
	{"ĸ�ߵ�ѹϵ��"},
	{"�������ϵ��"},
	{"A�����ϵ�� "},
	{"B�����ϵ�� "},
	{"C�����ϵ�� "},
	{"�����¶�ϵ��"},
	{"����¶�ϵ��"},
	{"AI1У׼ϵ�� "},
	{"AI2У׼ϵ�� "},
	{"AI3У׼ϵ�� "},
	{"AO1У׼ϵ�� "},
	{"AO2У׼ϵ�� "},
	{"������ϵ�1 "},
	{"������ϵ�2 "},
	{"������ϵ�3 "},
	{"������ϵ�4 "},
	{"������ϵ�5 "},
	{"ת����ϵ�1 "},
	{"ת����ϵ�2 "},
	{"ת����ϵ�3 "},
	{"ת����ϵ�4 "},
	{"ת����ϵ�5 "},
    {"��������ʱ��"},
    {"�û�����    "},
    {"�˳����Ҳ���"}
};
const unsigned char List_ForgePara[31][13] =
{
    {"15-��ѹ���� "},
	{"�������1   "},
	{"���нǶ�1   "},
	{"����ٶ�1   "},
	{"�����ٶ�1   "},
	{"����ʱ��1   "},
    {"���ת��1   "},
	{"�������2   "},
	{"���нǶ�2   "},
	{"����ٶ�2   "},
	{"�����ٶ�2   "},
	{"����ʱ��2   "},
    {"���ת��2   "},
	{"�������3   "},
	{"���нǶ�3   "},
	{"����ٶ�3   "},
	{"�����ٶ�3   "},
	{"����ʱ��3   "},
    {"���ת��3   "},
	{"�������4   "},
	{"���нǶ�4   "},
	{"����ٶ�4   "},
	{"�����ٶ�4   "},
	{"����ʱ��4   "},
    {"���ת��4   "},
	{"�������5   "},
	{"���нǶ�5   "},
	{"����ٶ�5   "},
	{"�����ٶ�5   "},
	{"����ʱ��5   "},
    {"���ת��5   "}
};
//00
const unsigned char List_CtrSrc[4][13] =
{
    {"��������ѡ��"},
	{"�������    "},
	{"��������    "},
	{"ͨѶ����    "},
	//{"CAN����   "}
};
const unsigned char List_CtrSrc2[4][13] =
{
    {"����ģʽѡ��"},
	{"�ٶȿ���    "},
	{"ת�ؿ���    "},
	{"λ�ÿ���    "},
	//{"CAN����   "}
};

const unsigned char List_DirSet[4][13] =
{
    {"�������ѡ��"},
	{"��������ת  "},
	{"ֻ������ת  "},
	{"ֻ����ת  "}
};
const unsigned char List_StopLock[3][13] =
{
    {"ͣ������ѡ��"},
	{"��Ч        "},
	{"��Ч        "}
};
const unsigned char List_FwdStart[4][13] =
{
    {"��������ѡ��"},
	{"����ͣ������"},
	{"��������    "},
	{"�ƶ�������  "}
};
const unsigned char List_RevStart[4][13] =
{
	{"��������ѡ��"},
	{"����ͣ������"},
	{"��������    "},
	{"�ƶ�������  "}
};
const unsigned char List_FwdStop[3][13] =
{
    {"����ͣ��ѡ��"},
	{"����ͣ��    "},
	{"����ͣ��    "}
};
const unsigned char List_RevStop[3][13] =
{
    {"����ͣ��ѡ��"},
	{"����ͣ��    "},
	{"����ͣ��    "}
};
const unsigned char List_ONOFF[5][13] =
{
    {"��ͣ����ѡ��"},
	{"��������A   "},
	{"��������B   "},
	{"��ƽ����    "},
	{"�ⲿʹ��    "}
};
const unsigned char List_BrakeSel[4][13] =
{
    {"�ƶ���ʽѡ��"},
	{"�ӳ��ƶ�    "},
	{"�����ƶ�    "},
	{"���ػ�ģʽ  "}
};
const unsigned char List_LcompenEn1[3][13] =
{
    {"ת������    "},
	{"��Ч        "},
	{"��Ч        "}
};
const unsigned char List_LcompenEn2[3][13] =
{
    {"ת������    "},
	{"��Ч        "},
	{"��Ч        "}
};
const unsigned char List_LcompenEn3[3][13] =
{
    {"��������ʹ��"},
	{"��Ч        "},
	{"��Ч        "}
};


const unsigned char List_LcompenEn[3][13] =
{
    {"��������ʹ��"},
	{"��Ч        "},
	{"��Ч        "}
};
//01
//01>>02
const unsigned char List_FwdSpeed[3][13] =
{
    {"������ת�ٶ�"},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_RevSpeed[3][13] =
{
    {"������ת�ٶ�"},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_JogFwdSpeed[3][13] =
{
    {"�㶯��ת�ٶ�"},
	{" rpm        "},
	{"0.0-750.0   "}
};
const unsigned char List_JogRevSpeed[3][13] =
{
    {"�㶯��ת�ٶ�"},
	{" rpm        "},
	{"0.0-750.0   "}
};
const unsigned char List_AdjStep[3][13] =
{
    {"UP/DOWN ����"},
	{" rpm/s      "},
	{"0.0-3000.0  "}
};
const unsigned char List_RisingTime[3][13] =
{
    {"����ʱ��    "},
	{" s          "},
	{"0.1-600.0   "}
};
const unsigned char List_FallingTime[3][13] =
{
    {"����ʱ��    "},
	{" s          "},
	{"0.1-600.0   "}
};
const unsigned char List_JogRisingTime[3][13] =
{
    {"�㶯����ʱ��"},
	{" s          "},
	{"0.1-300.0   "}
};
const unsigned char List_JogFallingTime[3][13] =
{
    {"�㶯����ʱ��"},
	{" s          "},
	{"0.1-300.0   "}
};
const unsigned char List_StartCurrentSet[3][13] =
{
    {"���������趨"},
	{" A          "},
	{"0.0-6553.5  "}
};
const unsigned char List_LockCurrent[3][13] =
{
    {"��������ֵ  "},
	{" A          "},
	{"0.0-819.2   "}
};
const unsigned char List_JumpSpeed[3][13] =
{
    {"��Ծת��    "},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_JumpRange[3][13] =
{
    {"��Ծ��Χ    "},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_DeadZone[3][13] =
{
    {"��������ʱ��"},
	{" s          "},
	{"0.0-3000.0  "}
};
const unsigned char List_BleedResist[3][13] =
{
    {"й�ŵ�������"},
	{" ��         "},
	{"3.0-50.0    "}
};
const unsigned char List_BleedCurrent[3][13] =
{
    {"й�ŵ����趨"},
	{" A          "},
	{"0.0-1000.0  "}
};
const unsigned char List_BleedUpVolt[3][13] =
{
    {"�ƶ�������ѹ"},
	{" V          "},
	{"0.0-3000.0  "}
};
const unsigned char List_MaxSpeed[3][13] =
{
    {"ת������    "},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_MinSpeed[3][13] =
{
    {"ת������    "},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_Speed0216[3][13] =
{
    {"ת���޶�    "},
	{" %          "},
	{"5-150       "}
};
const unsigned char List_Speed0217[3][13] =
{
    {"ת���޶�    "},
	{" %          "},
	{"5-150       "}
};
const unsigned char List_Speed0218[3][13] =
{
    {"�������нǶ�"},
	{" ��		  "},
	{"0-65535	  "}

};
const unsigned char List_Speed0219[3][13] =
{
    {"�������нǶ�"},
	{" ��         "},
	{"0-65535     "}
};

const unsigned char List_Speed0220[3][13] =
{
    {"����Ť���趨"},
	{" %          "},
	{"2-150       "}
};
const unsigned char List_Speed0221[3][13] =
{
    {"����Ť���趨"},
	{" %          "},
	{"2-150       "}
};


//02
//02>>01
const unsigned char List_Relation[5][13] =
{
    {"ת�ٸ�����ϵ"},
	{"���Ӹ�      "},
	{"������      "},
	{"�����ϴ���  "},
	{"������С��  "}
	//{"�����л�    "}
};
const unsigned char List_SpeedMainSrc[13][13] =
{
    {"ת��������  "},
	{"��岻����  "},
	{"������    "},
	{"AI1         "},
	{"AI2         "},
	{"AI3         "},
	{"�����      "},
	{"����PID     "},
	{"ͨѶ����    "},
	{"�������1   "},
	{"�������2   "},
	{"�������3   "},
	{"CAN����    "}
};
const unsigned char List_SpeedAssistSrc[7][13] =
{
    {"ת�ٸ�������"},
	{"�޸���      "},
	{"AI1         "},
	{"AI2         "},
	{"AI3         "},
	{"����PID     "},
//	{"����UP/DOWN "},
    {"��������1   "}
};
const unsigned char List_Src0103[7][13] =
{
    {"λ�ø���    "},
	{"������    "},
	{"�������1   "},	
	{"ͨѶ����    "},
	{"�������2   "},
	{"�������3   "},
	{"CAN����     "}
};
const unsigned char List_Src0104[8][13] =
{
    {"ת�ٸ���    "},
	{"���        "},
	{"AI1         "},
	{"AI2         "},
	{"AI3         "},
	{"��������2   "},
    {"ͨѶ����	  "},
	{"CAN����     "}
};


const unsigned char List_AssistSrcRange[3][13] =
{
    {"������������"},
	{" rpm        "},
	{"-1500=1500  "}
};
const unsigned char List_AssistSrcRate[3][13] =
{
    {"������������"},
	{" %          "},
	{"0.0-100.0   "}
};
//03
const unsigned char List_TerminalCtr[5][13] =
{
    {"���ӿ��Ʒ�ʽ"},
	{"������A     "},
	{"������B     "},
	{"������A     "},
	{"������B     "}
};
const unsigned char List_DI_Fun[18][13] =//24>>18
{
    {"DI ����ѡ�� "},
	{"�޹���      "},
	{"��ת����    "},
	{"��ת����    "},
	{"����ʽ����  "},
	{"��ת�㶯    "},
	{"��ת�㶯    "},
	{"��ͣʹ��    "},
	{"��λ	  "},
	{"�ⲿ���ϳ���"},
	{"�ⲿ���ϳ���"},
	{"����ٶ���1 "},
	{"����ٶ���2 "},
	{"����ٶ���3 "},
	{"ת�ٸ����л�"},	
	{"ת������	  "},
	{"ת������	  "},
	{"��������	  "}
};
const unsigned char List_DI7_Fun[18][13] =
{
    {"DI ����ѡ�� "},
	{"�޹���      "},
	{"��ת����    "},
	{"��ת����    "},
	{"����ʽ����  "},
	{"��ת�㶯    "},
	{"��ת�㶯    "},
	{"��ͣʹ��    "},
	{"��λ	  "},
	{"�ⲿ���ϳ���"},
	{"�ⲿ���ϳ���"},
	{"����ٶ���1 "},
	{"����ٶ���2 "},
	{"����ٶ���3 "},
	{"ת�ٸ����л�"},	
	{"ת������	  "},
	{"ת������	  "},
	{"��������	  "}

};
const unsigned char List_D0_Fun[9][13] =
{
    {"DO ����ѡ�� "},
	{"�����      "},
	{"ϵͳ������  "},
	{"���ϱ���    "},
	{"�����趨�ٶ�"},
	{"�����趨λ��"},	
	{"������ȿ���"},
	{"ת������    "},	
	{"ת������    "},	
};
const unsigned char List_DO4_Fun[6][13] =
{
    {"D0 ����ѡ�� "},
	{"�����      "},
	{"ϵͳ������  "},
	{"���ϱ���    "},
	{"�����趨�ٶ�"},
	{"�������    "}
};
const unsigned char List_A01_Fun[9][13] =
{
    {"A01����ѡ�� "},
	{"�����      "},
	{"����ת��    "},
	{"�趨ת��    "},
	{"�������    "},
	{"��������    "},
	{"AI1����     "},
	{"AI2����     "},
	{"AI3����     "}
};
const unsigned char List_A02_Fun[9][13] =
{
    {"A02����ѡ�� "},
	{"�����      "},
	{"����ת��    "},
	{"�趨ת��    "},
	{"�������    "},
	{"��������    "},
	{"AI1����     "},
	{"AI2����     "},
	{"AI3����     "}
};
const unsigned char List_Pulse_Fun[10][13] =
{
    {"�����������"},
	{"�����      "},
	{"����ת��    "},
	{"�趨ת��    "},
	{"�������    "},
	{"��������    "},
	{"AI1����     "},
	{"AI2����     "},
	{"AI3����     "},
    {"ͬ������    "}
};
//04
const unsigned char List_AI_FilterTime[3][13] =
{
    {"AI�˲�ʱ��  "},
	{" s          "},
	{"0.01-10.00  "}
};
const unsigned char List_DI_FilterTime01[3][13] =
{
    {"DI�˲�ʱ��  "},
	{" s          "},
	{"0.01-10.00  "}
};
const unsigned char List_DO_FilterTime02[3][13] =
{
    {"DO�ӳ��趨  "},
	{" s          "},
	{"0.01-10.00  "}
};

const unsigned char List_AI1_Min03[3][13] =
{
    {"AI1��С���� "},
	{" V          "},
	{"0-10.00     "}
};
const unsigned char List_AI1_MinRatio04[3][13] =
{
    {"AI1��Сӳ�� "},
	{" %          "},
	{"0-100.0     "}
};
const unsigned char List_AI1_Mid105[3][13] =
{
    {"AI1�յ�1����"},
	{" V          "},
	{"0-10.00     "}
};
const unsigned char List_AI1_Mid1Ratio06[3][13] =
{
    {"AI1�յ�1ӳ��"},
	{" %          "},
	{"0-100.0     "}
};
const unsigned char List_AI1_Mid207[3][13] =
{
    {"AI1�յ�2����"},
	{" V          "},
	{"0-10.00     "}
};
const unsigned char List_AI1_Mid2Ratio08[3][13] =
{
    {"AI1�յ�2ӳ��"},
	{" %          "},
	{"0-100.0     "}
};
const unsigned char List_AI1_Max09[3][13] =
{
    {"AI1������� "},
	{" V          "},
	{"0-10.00     "}
};
const unsigned char List_AI1_MaxRatio10[3][13] =
{
    {"AI1���ӳ�� "},
	{" %          "},
	{"0-100.0     "}
};
const unsigned char List_AI2_Min11[3][13] =
{
    {"AI2��С���� "},
	{" V          "},
	{"0-10.00     "}
};
const unsigned char List_AI2_MinRatio12[3][13] =
{
    {"AI2��Сӳ�� "},
	{" %          "},
	{"0-100.0     "}
};
const unsigned char List_AI2_Mid113[3][13] =
{
    {"AI2�յ�1����"},
	{" V          "},
	{"0-10.00     "}
};
const unsigned char List_AI2_Mid1Ratio14[3][13] =
{
    {"AI2�յ�1ӳ�� "},
	{" %          "},
	{"0-100.0     "}
};
const unsigned char List_AI2_Mid215[3][13] =
{
    {"AI2�յ�2����"},
	{" V          "},
	{"0-10.00     "}
};
const unsigned char List_AI2_Mid2Ratio16[3][13] =
{
    {"AI2�յ�2ӳ��"},
	{" %          "},
	{"0-100.0     "}
};
const unsigned char List_AI2_Max17[3][13] =
{
    {"AI2������� "},
	{" V          "},
	{"0-10.00     "}
};
const unsigned char List_AI2_MaxRatio18[3][13] =
{
    {"AI2���ӳ�� "},
	{" %          "},
	{"0-100.0     "}
};
const unsigned char List_AI3_Min19[3][13] =
{
    {"AI3��С���� "},
	{" V          "},
	{"-10.0-10.00" }
};
const unsigned char List_AI3_MinRatio20[3][13] =
{
    {"AI3��Сӳ�� "},
	{" %          "},
	{"-100.0-100.0"}
};
const unsigned char List_AI3_Mid121[3][13] =
{
    {"AI3�յ�1����"},
	{" V          "},
	{"-10.00-10.00"}
};
const unsigned char List_AI3_Mid1Ratio22[3][13] =
{
    {"AI3�յ�1ӳ��"},
	{" %          "},
	{"-100.0-100.0"}
};
const unsigned char List_AI3_Mid223[3][13] =
{
    {"AI3�յ�2����"},
	{" V          "},
	{"-10.00-10.00"}
};
const unsigned char List_AI3_Mid2Ratio24[3][13] =
{
    {"AI3�յ�2ӳ��"},
	{" %          "},
	{"-100.0-100.0"}
};
const unsigned char List_AI3_Max25[3][13] =
{
    {"AI3������� "},
	{" V          "},
	{"-10.00-10.00"}
};
const unsigned char List_AI3_MaxRatio26[3][13] =
{
    {"AI3���ӳ�� "},
	{" %          "},
	{"-100.0-100.0"}
};
const unsigned char List_DI_FilterTime[3][13] =
{
    {"DI�˲�ʱ��  "},
	{" s          "},
	{"0.01-10.00  "}
};
const unsigned char List_Pulse_FilterTime[3][13] =
{
    {"���������˲�"},
	{" s          "},
	{"0.1-10.0    "}
};
const unsigned char List_Pulse_Min27[3][13] =
{
    {"������С����"},
	{" kHz        "},
	{"0.1-50.0    "}
};
const unsigned char List_Pulse_MinRatio28[3][13] =
{
    {"������Сӳ��"},
	{" %          "},
	{"-100.0-100.0"}
};
const unsigned char List_Pulse_Max29[3][13] =
{
    {"�����������"},
	{" kHz        "},
	{"0.1-50.0    "}
};
const unsigned char List_Pulse_MaxRatio30[3][13] =
{
    {"�������ӳ��"},
	{" %          "},
	{"-100.0-100.0"}
};
const unsigned char List_DICtrEn313233[3][13] =
{
    {"DI��������  "},
	{"��Ч        "},
	{"��Ч        "}
};

const unsigned char List_DO_Delay[3][13] =
{
    {"DO�ӳ��趨  "},
	{" s          "},
	{"0.1-10.0    "}
};
const unsigned char List_Pulse_Delay[3][13] =
{
    {"��������ӳ�"},
	{" s          "},
	{"0.1-10.0    "}
};
const unsigned char List_AO_Delay[3][13] =
{
    {"AO�ӳ��趨  "},
	{" s          "},
	{"0.1-10.0    "}
};
const unsigned char List_AO1_Zero[3][13] =
{
    {"AO1��ƫ     "},
	{" %          "},
	{"-100.0-100.0"}
};
const unsigned char List_AO1_Gain[3][13] =
{
    {"AO1����     "},
	{"            "},
	{"-2.00-2.00  "}
};
const unsigned char List_AO2_Zero[3][13] =
{
    {"AO2��ƫ     "},
	{" %          "},
	{"-100.0-100.0"}
};
const unsigned char List_AO2_Gain[3][13] =
{
    {"AO2����     "},
	{"            "},
	{"-2.00-2.00  "}
};
const unsigned char List_Pulse_Range[3][13] =
{
    {"���������Χ"},
	{" kHz        "},
	{"0.1-50.0    "}
};
const unsigned char List_Pulse_Centre[4][13] =
{
    {"��������Ƶ��"},
	{"�����ĵ�    "},
	{"�����      "},
	{"�����      "}
};

//05
const unsigned char List_Stage0[3][13] =
{
    {"�����0     "},
	{" rpm        "},
	{"            "}
};
const unsigned char List_Stage1[3][13] =
{
    {"�����1     "},
	{" rpm        "},
	{"            "}
};
const unsigned char List_Stage2[3][13] =
{
    {"�����2     "},
	{" rpm        "},
	{"            "}
};
const unsigned char List_Stage3[3][13] =
{
    {"�����3     "},
	{" rpm        "},
	{"            "}
};
const unsigned char List_Stage4[3][13] =
{
    {"�����4     "},
	{" rpm        "},
	{"            "}
};
const unsigned char List_Stage5[3][13] =
{
    {"�����5     "},
	{" rpm        "},
	{"            "}
};
const unsigned char List_Stage6[3][13] =
{
    {"�����6     "},
	{" rpm        "},
	{"            "}
};
const unsigned char List_Stage7[3][13] =
{
    {"�����7     "},
	{" rpm        "},
	{"            "}
};

//06 pid
const unsigned char List_SetSrc[6][13] =
{
    {"PID����Դ   "},
	{"���ָ���    "},
	{"AI1         "},
	{"AI2         "},
	{"AI3         "},
	{"��������    "}
};
const unsigned char List_SetGain[3][13] =
{
    {"���ָ�������"},
	{" %          "},
	{"0.1-100.0   "}
};
const unsigned char List_FeedbackSrc[9][13] =
{
    {"PID����Դ   "},
	{"AI1         "},
	{"AI2         "},
	{"AI3         "},
	{"AI1+AI2     "},
	{"AI1-AI2     "},
	{"max(AI1,AI2)"},
	{"Min(AI1,AI2)"},
	{"��������    "}
};
const unsigned char List_Feedback[3][13] =
{
    {"PID�������� "},
	{"������      "},
	{"������      "}
};
const unsigned char List_P_gain[3][13] =
{
    {"PID�������� "},
	{"            "},
	{"0.1-100.0   "}
};
const unsigned char List_I_time[3][13] =
{
    {"PID����ʱ�� "},
	{"            "},
	{"0.1-100.0   "}
};
const unsigned char List_D_time[3][13] =
{
    {"PID΢��ʱ�� "},
	{"            "},
	{"0.1-100.0   "}
};
const unsigned char List_Cal_Mode[3][13] =
{
    {"PID����ģʽ "},
	{"ͣ��������  "},
	{"ͣ��ʱ����  "}
};
//07
const unsigned char List_AddrCode[3][13] =
{
    {"��ַ��      "},
	{"            "},
	{"0-255       "}
};
const unsigned char List_Bode[3][13] =
{
    {"������      "},
	{" 00bps      "},
	{"300-38400   "}
};
const unsigned char List_Check[4][13] =
{
    {"У�鷽ʽ    "},
	{"��У��      "},
	{"żУ��      "},
	{"��У��      "}
};
const unsigned char List_ComDelaytime[3][13] =
{
    {"��ʱʱ��    "},
	{" ms         "},
	{"0-255       "}
};
const unsigned char List_CAN_ControlMS[3][13] =
{
    {"CAN���ӹ�ϵ "},
	{"  ��        "},
	{"  ��        "}
};
const unsigned char List_CAN_ControlEN[3][13] =
{
    {"CANϵͳʹ�� "},
	{" ��         "},
	{" ��         "}
};
const unsigned char List_CAN_knot[3][13] =
{
    {"CAN�ڵ�     "},
	{"            "},
	{"0-125       "}
};
const unsigned char List_CAN_bps[3][13] =
{
    {"CAN������   "},
	{" 0bps       "},
	{"1-100       "}
};
const unsigned char List_CAN_Refresh[3][13] =
{
    {"CAN��ʱʱ�� "},
	{" 0ms        "},
	{"1-100       "}
};
//09
const unsigned char List_AddrCode2[3][13] =
{
    {"��ַ��      "},
	{"            "},
	{"0-255       "}
};
const unsigned char List_Bode2[3][13] =
{
    {"������      "},
	{"   kbps      "},
	{"100-1000    "}
};
const unsigned char List_CAN_Refresh2[3][13] =
{
    {"ˢ��ʱ��    "},
	{" 0ms        "},
	{"1-100       "}
};

//08
const unsigned char List_ProcessCtrEn[3][13] =
{
    {"�̿�ģʽʹ��"},
	{"��Ч        "},
	{"��Ч        "}
};

const unsigned char List_TimeSet[3][13] =
{
    {"��ʱ����ʹ��"},
	{"��Ч        "},
	{"��Ч        "}
};
const unsigned char List_ForCounterSet[3][13] =
{
    {"����ʱ��ʹ��"},
	{"��Ч        "},
	{"��Ч        "}
};
const unsigned char List_RevCounterSet[3][13] =
{
    {"����ʱ��ʹ��"},
	{"��Ч        "},
	{"��Ч        "}
};
const unsigned char List_ForAngleSet[3][13] =
{
    {"����Ƕ�ʹ��"},
	{"��Ч        "},
	{"��Ч        "}
};
const unsigned char List_RevAngleSet[3][13] =
{
    {"����Ƕ�ʹ��"},
	{"��Ч        "},
	{"��Ч        "}
};
const unsigned char List_StartDir[3][13] =
{
    {"�����Զ�����"},
	{"��Ч        "},
	{"��Ч        "}
};
const unsigned char List_BrakeEn[3][13] =
{
    {"�����Զ�����"},
	{"��Ч        "},
	{"��Ч        "}
};
const unsigned char List_FwdBreakEn[3][13]=
{
    {"��ת����ͣ��"},
	{"��Ч        "},
	{"��Ч        "}
};
const unsigned char List_RevBreakEn[3][13]=
{
    {"��ת����ͣ��"},
	{"��Ч        "},
	{"��Ч        "}
};
const unsigned char List_FwdAngle[3][13] =
{
    {"����Ƕ��趨"},
	{" ��          "},
	{"0-65535     "}
};
const unsigned char List_RevAngle[3][13] =
{
    {"����Ƕ��趨"},
	{" ��          "},
	{"0-65535     "}
};
const unsigned char List_FwdTime[3][13] =
{
    {"��תʱ���趨"},
	{" s          "},
	{"0.0-6553.5  "}
};
const unsigned char List_RevTime[3][13] =
{
    {"����ʱ���趨"},
	{" s          "},
	{"0.0-6553.5  "}
};
const unsigned char List_ForwStart_speed[3][13] =
{
    {"�������ٶ�"},
	{" %          "},
	{"0-40        "}
};
const unsigned char List_RevStart_speed[3][13] =
{
    {"�������ٶ�"},
	{" %          "},
	{"0-40        "}
};
//09
const unsigned char List_RRatedPower[2][13] =
{
    {"�����    "},
	{" kW         "}
};
const unsigned char List_RRatedVoltage[2][13] =
{
    {"���ѹ    "},
	{" V          "}
};
const unsigned char List_RRatedSpeed[2][13] =
{
    {"�ת��    "},
	{" rpm        "}
};
const unsigned char List_RRatedTorque[2][13] =
{
    {"�ת��    "},
	{" N.m        "}
};
const unsigned char List_RPhaseCurrent[2][13] =
{
    {"������  "},
	{" A          "}
};
const unsigned char List_RPhaseCurrent1002[2][13] =
{
    {"�����    "},
	{" A          "}
};
const unsigned char List_RPhaseCurrent1003[2][13] =
{
    {"������    "},
	{" A          "}
};
const unsigned char List_RPhaseCurrent1004[2][13] =
{
    {"�궨����    "},
	{" A          "}
};
const unsigned char List_RPhaseCurrent1005[2][13] =
{
    {"�����    "},
	{" uF         "}
};
const unsigned char List_Characteristic1006[2][13] =
{
    {"���ȱ���    "},
	{" ��         "}
};
const unsigned char List_RRatedVoltage1007[2][13] =
{
    {"ĸ�߹�ѹֵ  "},
	{" V          "}
};

const unsigned char List_Characteristic1008[2][13] =
{
	{"ǰ�ý�      "},
	{" ��         "}
};
const unsigned char List_Characteristic1009[2][13] =
{
	{"���ý�      "},
	{" ��         "}
};



const unsigned char List_RApplication[6][13] =
{
    {"Ӧ�ó���    "},
	{"       ͨ�� "},
	{"       ��ɽ "},
	{"       ��֯ "},
	{"       ���� "},
	{"       ע�� "}
};
const unsigned char List_RPID[2][13] =
{
    {"��Ʒ����    "},
	{"            "}
};
const unsigned char List_Characteristic1011[2][13] =
{
	{"�����¶�    "},
	{" ��         "}
};
const unsigned char List_Characteristic1012[3][13] =
{
	{"��������ʱ��"},
	{" s          "},
	{"100-65535   "}		
};
const unsigned char List_Characteristic1013[3][13] =
{
	{"�����ϵ�ʱ��"},
	{" s		  "},
	{"200-65535   "}

};

const unsigned char List_SVDSP[3][13] =
{
    {"����汾    "},
	{"            "},
	{"            "}
};
const unsigned char List_SVCPLD[3][13] =
{
    {"CPLD����汾"},
	{"            "},
	{"            "}
};
//10
const unsigned char List_Err1[7][13] =
{
    {"���ϼ�¼1   "},
    {"��������    "},
    {"����ת��    "},
    {"�������    "},
    {"ĸ�ߵ�ѹ    "},
    {"����״̬    "},
    {"�ۼ�����ʱ��"}
};
const unsigned char List_Err2[7][13] =
{
    {"���ϼ�¼2   "},
    {"��������    "},
    {"����ת��    "},
    {"�������    "},
    {"ĸ�ߵ�ѹ    "},
    {"����״̬    "},
    {"�ۼ�����ʱ��"}
};
//11
const unsigned char List_BusAdj[3][13] =
{
    {"ĸ�ߵ�ѹ����"},
	{" v          "},
	{"0.0-999.9   "}
};
const unsigned char List_PosAdj[2][20] =
{
    {"λ�����У׼       "},
	{"     У׼�� ...    "}
};
const unsigned char List_PosAdjEnd[2][20] =
{
    {"��ESC�˳�          "},
	{"   λ��У׼���    "}
};
const unsigned char ACurrentTest[2][20] =
{
    {"A���������        "},
	{"     ������ ...    "}
};
const unsigned char BCurrentTest[2][20] =
{
    {"B���������        "},
	{"     ������ ...    "}
};
const unsigned char CCurrentTest[2][20] =
{
    {"C���������        "},
	{"     ������ ...    "}
};
const unsigned char BrakeTest[2][20] =
{
    {"�ƶ�����           "},
	{"     ������ ...    "}
};

const unsigned char List_nei[9][13] =
{
    {"�ڲ�������  "},
	{"0·���     "},
	{"1·���     "},
	{"2·���     "},
	{"3·���     "},
	{"4·���     "},
	{"5·���     "},
	{"6·���     "},
	{"7·���     "}
};
const unsigned char List_wai[9][13] =
{
    {"�ⲿ������  "},
	{"0·���     "},
	{"1·���     "},
	{"2·���     "},
	{"3·���     "},
	{"4·���     "},
	{"5·���     "},
	{"6·���     "},
	{"7·���     "}
};
const unsigned char List_Test7FFF[2][20] =
{
    {"��ESC�˳�        "},
	{"     �ָ��ɹ�!   "}
};
//12
//12>13
const unsigned char List_CarrierFrequency[3][13] =
{
    {"ն��Ƶ��    "},
	{" Hz         "},
	{"1-20000     "}
};
const unsigned char List_MotorFun[3][13] =
{
    {"������ȿ���"},
	{" ��         "},
	{"0.0-99.9    "}
};
const unsigned char List_CtrFun[3][13] =
{
    {"ɢ�ȷ��ȿ���"},
	{" ��         "},
	{"0.0-99.9    "}
};
const unsigned char List_MotorOverTemp[3][13] =
{
    {"������ȱ���"},
	{" ��         "},
	{"0.0-180.0   "}
};
const unsigned char List_OverTemp[3][13] =
{
    {"�������ȱ���"},
	{" ��         "},
	{"0.0-120.0   "}
};
const unsigned char List_OverSpeed[3][13] =
{
    {"���ٱ���ֵ  "},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_OverVoltage[3][13] =
{
    {"ĸ�߹�ѹֵ  "},
	{" V          "},
	{"0.0-450.0   "}
};
const unsigned char List_LowVoltage[3][13] =
{
    {"ĸ��Ƿѹֵ  "},
	{" V          "},
	//{"0.0-300.0   "}
	{"200-1600    "}
};
const unsigned char List_OverTorqueTime[3][13] =
{
    {"��ת����ʱ��"},
	{" s          "},
	{"0.0-100.0   "}
};
const unsigned char List_OverTorque[3][13] =
{
    {"��ת�ؼ��ֵ"},
	{" N.m        "},
	{"105-150     "}
};
const unsigned char List_BrakeCurrentRatio[3][13] =
{
    {"�ƶ���������"},
	{" %          "},
	{"10-80       "}
};
const unsigned char List_AutoStartNum[3][13] =
{
    {"����������  "},
	{" ��         "},
	{"0-10        "}
};
const unsigned char List_StopRunTime[3][13] =
{
    {"˲ͣ����ʱ��"},
	{" S          "},
	{"0.0-2.0     "}
};
const unsigned char List_RotaryInertia[3][13] =
{
    {"ת����������"},
	{" kg.m2      "},
	{"0.01-600.00 "}
};
const unsigned char List_gjcs1312[3][13] =
{
    {"й�ŵ����趨"},
	{" A          "},
	{"0.0-1000.0 "}
};
const unsigned char List_gjcs1313[3][13] =
{
    {"й�ŵ�������"},
	{" ��         "},
	{"0.1-9.0     "}
};
const unsigned char List_gjcs1314[3][13] =
{
    {"�ƶ�������ѹ"},
	{" V          "},
	{"0.0-3000.0  "}
};
const unsigned char List_gjcs1317[3][13] =
{
    {"��ʼλ��    "},
	{"            "},
	{"0-65535     "}
};
const unsigned char List_gjcs1315[2][13] =
{
    {"Ӧ�ó���    "},
	{"            "},
};


const unsigned char List_PISet[8][13] =
{
    {"�Ӽ���ģʽ  "},
	{"ֱ�߼Ӽ���  "},
	{"2�μӼ���   "},
	{"3�μӼ���   "},
	{"4�μӼ���   "},
	{"���ӿ���    "},
	{"S����A      "},
	{"S����B      "}
};
const unsigned char S1P[3][13] =
{
    {"PI���ڱ���1 "},
	{"            "},
	{"25-25000    "}
};
const unsigned char S1I[3][13] =
{
    {"PI���ڻ���1 "},
	{"            "},
	{"40-40000    "}
};
const unsigned char S2P[3][13] =
{
	{"����ʱ��2   "},
	{" s          "},
	{"0.1-3600.0  "}
};
const unsigned char S2I[3][13] =
{
    {"����ʱ��2   "},
	{" s          "},
	{"0.1-3600.0  "}
};
const unsigned char S3P[3][13] =
{
	{"����ʱ��3   "},
	{" s          "},
	{"0.1-3600.0  "}
};
const unsigned char S3I[3][13] =
{
	{"����ʱ��3   "},
	{" s          "},
	{"0.1-3600.0  "}
};
const unsigned char S4P[3][13] =
{
	{"����ʱ��4   "},
	{" s          "},
	{"0.1-3600.0  "}
};
const unsigned char S4I[3][13] =
{
	{"����ʱ��4   "},
	{" s          "},
	{"0.1-3600.0  "}
};
const unsigned char List_SwitchPara1[3][13] =
{
    {"�л��ٶ�1   "},
	{" rpm        "},
	{"0.1-3600.0  "}
};
const unsigned char List_SwitchPara2[3][13] =
{
    {"�л��ٶ�2   "},
	{" rpm        "},
	{"0.1-3600.0  "}
};
const unsigned char List_SwitchPara3[3][13] =
{
    {"�л��ٶ�3   "},
	{" rpm        "},
	{"0.1-3600.0  "}
};
const unsigned char List_SpeedUpStartTime[3][13] =
{
    {"������ʼʱ��"},
	{" s          "},
	{"0.02-60.00  "}
};
const unsigned char List_SpeedUpEndTime[3][13] =
{
    {"���ٽ���ʱ��"},
	{" s          "},
	{"0.02-60.00  "}
};
const unsigned char List_SpeedDownStartTime[3][13] =
{
    {"������ʼʱ��"},
	{" s          "},
	{"0.02-60.00  "}
};
const unsigned char List_SpeedDownEndTime[3][13] =
{
    {"���ٽ���ʱ��"},
	{" s          "},
	{"0.02-60.00  "}
};
const unsigned char List_SpeedUpStartP[3][13] =
{
    {"������ʼ����"},
	{" %          "},
	{"1.0-100.0   "}
};
const unsigned char List_SpeedUpEndP[3][13] =
{
    {"���ٽ�������"},
	{" s          "},
	{"1.0-100.0   "}
};
const unsigned char List_SpeedDownStartP[3][13] =
{
    {"������ʼ����"},
	{" s          "},
	{"1.0-100.0   "}
};
const unsigned char List_SpeedDownEndP[3][13] =
{
    {"���ٽ�������"},
	{" s          "},
	{"1.0-100.0   "}
};
const unsigned char Wenbu1[3][13] =
{
    {"����²�A   "},
	{"            "},
	{"-10-10      "}
};
const unsigned char Wenbu2[3][13] =
{
    {"����²�B   "},
	{"            "},
	{"-10-10      "}
};
const unsigned char Wenbu3[3][13] =
{
    {"����²�C   "},
	{"            "},
	{"-10-10      "}
};
const unsigned char  List_KeyLock[3][13] =
{
    {"����ʹ��    "},
	{"��Ч        "},
	{"��Ч        "}
};
const unsigned char List_Password[1][20] =
{
    {"����������         "}
};
const unsigned char List_Password3[1][20] =
{
    {"ȡ������           "}
};

//13
const unsigned char List_JKCustomMenu[26][13] =
{
    {"��ز˵�    "},
    {"ʵ��ת��$N$$"},
    {"����ת��$Ns$"},
	{"ĸ�ߵ�ѹ$U$$"},
	{"�������$I$$"},
	{"��ǰ����$$$$"},
	{"�����¶�$Td$"},
	{"��������$Is$"},
	{"ת�ظ���$Ts$"},
	{"A�����$$Ia$"},
	{"B�����$$Ib$"},
	{"C�����$$Ic$"},
	{"ת��λ��$Rp$"},
	{"�ƶ�ռ��$Bp$"},
	{"����ʱ��$Rt$"},	
	{"�ϵ�ʱ��$Pt$"},
 	{"��������$DI$"},
	{"�������$D0$"},
	{"ģ������$AI1"},
	{"ģ������$AI2"},
	{"ģ������$AI3"},
	{"ģ�����$AO1"},
	{"����Ƶ��$FI$"},	
 	{"�Ƕ�1$$$$Ad$"},
  	{"�Ƕ�2$$$$Ac$"},
	{"����$$$$$$$$"},
};

const unsigned char List_JKCustomMenu2[21][13] =
{
    {"��ز˵�    "},
    {"ʵ��ת��$N$$"},
    {"����ת��$Ns$"},
	{"ĸ�ߵ�ѹ$U$$"},
	{"�������$I$$"},
	{"����¶�$Tm$"},
	{"�����¶�$Td$"},
	{"ģ������$AI1"},
	{"ģ������$AI2"},
	{"ģ������$AI3"},
	{"ģ�����$AO1"},
	{"ģ�����$AO2"},
	{"����Ƶ��$FI$"},
 	{"���Ƶ��$FO$"},
 	{"��������$DI$"},
	{"�������$D0$"},
	{"ת��λ��$R$$"},
 	{"��ͨ��$$$Ad$"},
	{"��������$Is$"},
	{"�ۼ�ʱ��$Rt$"}
};
const unsigned char List_JKmenuLen[3][13] =
{
    {"��ز˵�����"},
	{"            "},
	{"3-20        "}
};


//14
const unsigned char List_PhaseA_I[2][13] =
{
    {"A��������� "},
	{" A          "}
};
const unsigned char List_PhaseB_I[2][13] =
{
    {"B��������� "},
	{" A          "}
};
const unsigned char List_PhaseC_I[2][13] =
{
    {"C��������� "},
	{" A          "}
};
const unsigned char List_Sanre[2][13] =
{
    {"ɢ�����¶�  "},
	{" ��         "}
};
const unsigned char List_AngleOn[2][13] =
{
    {"��ͨ��      "},
	{" ��          "}
};
const unsigned char List_AngleOff[2][13] =
{
    {"�ضϽ�      "},
	{" ��          "}
};
const unsigned char List_DesireDAC[2][13] =
{
    {"��������    "},
	{" A          "}
};
const unsigned char List_SpeedAdj_P[2][13] =
{
    {"ת��PI����  "},
	{"            "}
};
const unsigned char List_SpeedAdj_I[2][13] =
{
    {"ת��PI����  "},
	{"            "}
};
const unsigned char List_PhaseMaxCurrentSet[2][13] =
{
    {"��������ֵ"},
	{" A          "}
};
const unsigned char List_PhaseMinInductanceSet[2][13] =
{
    {"������Сֵ"},
	{" mH         "}
};
const unsigned char List_PhaseMaxInductanceSet[2][13] =
{
    {"�������ֵ"},
	{" mH         "}
};
const unsigned char List_CoilResistanceSet[2][13] =
{
    {"��Ȧ����    "},
	{" ��         "}
};
const unsigned char List_LeakageIndSet[2][13] =
{
    {"©�������  "},
	{" mH         "}
};
const unsigned char List_ZeroPosAdj[2][13] =
{
    {"���У��ֵ  "},
	{" ��          "}
};
const unsigned char List_BusDCV[2][13] =
{
    {"ĸ�ߵ�ѹϵ��"},
	{" V          "}
};
const unsigned char List_OutCurrent[2][13] =
{
    {"�������ϵ��"},
	{" A          "}
};
const unsigned char List_ACurrent[2][13] =
{
    {"A�����ϵ�� "},
	{" A          "}
};
const unsigned char List_BCurrent[2][13] =
{
    {"B�����ϵ�� "},
	{" A          "}
};
const unsigned char List_CCurrent[2][13] =
{
    {"C�����ϵ�� "},
	{" A          "}
};
const unsigned char List_Dtemp[2][13] =
{
    {"�����¶�ϵ��"},
	{" ��         "}
};
const unsigned char List_Mtemp[2][13] =
{
    {"����¶�ϵ��"},
	{" ��         "}
};
const unsigned char List_JAI1[2][13] =
{
    {"AI1У׼ϵ�� "},
	{"            "}
};
const unsigned char List_JAI2[2][13] =
{
    {"AI2У׼ϵ�� "},
	{"            "}
};
const unsigned char List_JAI3[2][13] =
{
    {"AI3У׼ϵ�� "},
	{"            "}
};
const unsigned char List_JAO1[2][13] =
{
    {"AO1У׼ϵ�� "},
	{"            "}
};
const unsigned char List_JAO2[2][13] =
{
    {"AO2У׼ϵ�� "},
	{"            "}
};
const unsigned char List_CurrentFPoint1[3][13] =
{
    {"������ϵ�1 "},
	{" A          "},
	{"            "}
};
const unsigned char List_CurrentFPoint2[3][13] =
{
    {"������ϵ�2 "},
	{" A          "},
	{"            "}
};
const unsigned char List_CurrentFPoint3[3][13] =
{
    {"������ϵ�3 "},
	{" A          "},
	{"            "}
};
const unsigned char List_CurrentFPoint4[3][13] =
{
    {"������ϵ�4 "},
	{" A          "},
	{"            "}
};
const unsigned char List_CurrentFPoint5[3][13] =
{
    {"������ϵ�5 "},
	{" A          "},
	{"            "}
};
const unsigned char List_TorqueFPoint1[3][13] =
{
    {"ת����ϵ�1 "},
	{" N.m        "},
	{"            "}
};
const unsigned char List_TorqueFPoint2[3][13] =
{
    {"ת����ϵ�2 "},
	{" N.m        "},
	{"            "}
};
const unsigned char List_TorqueFPoint3[3][13] =
{
    {"ת����ϵ�3 "},
	{" N.m        "},
	{"            "}
};
const unsigned char List_TorqueFPoint4[3][13] =
{
    {"ת����ϵ�4 "},
	{" N.m        "},
	{"            "}
};
const unsigned char List_TorqueFPoint5[3][13] =
{
    {"ת����ϵ�5 "},
	{" N.m        "},
	{"            "}
};
const unsigned char List_RunTime[3][13] =
{
    {"��������ʱ��"},
	{" h          "},
	{"1000-65535  "}
};

const unsigned char List_ForgeNum0[3][13] =
{
    {"�������1   "},
	{" ��         "},
	{"0-100       "}
};
const unsigned char List_ForgeAngle0[3][13] =
{
    {"����Ƕ�1   "},
	{" ��         "},
	{"0-32000     "}
};
const unsigned char List_ForgeSpeed0[3][13] =
{
    {"����ٶ�1   "},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_ReturnSpeed0[3][13] =
{
    {"�����ٶ�1   "},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_IntervalTime0[3][13] =
{
    {"����ʱ��1   "},
	{" s          "},
	{"0-5.0       "}
};
const unsigned char List_ForgeTorque0[3][13] =
{
    {"���ת��1   "},
	{" %          "},
	{"0-100       "}
};
const unsigned char List_ForgeNum1[3][13] =
{
    {"�������2   "},
	{" ��         "},
	{"0-100       "}
};
const unsigned char List_ForgeAngle1[3][13] =
{
    {"���нǶ�2   "},
	{" ��         "},
	{"0-32000     "}
};
const unsigned char List_ForgeSpeed1[3][13] =
{
    {"����ٶ�2   "},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_ReturnSpeed1[3][13] =
{
    {"�����ٶ�2   "},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_IntervalTime1[3][13] =
{
    {"����ʱ��2   "},
	{" s          "},
	{"0-5.0       "}
};
const unsigned char List_ForgeTorque1[3][13] =
{
    {"���ת��2   "},
	{" %          "},
	{"0-100       "}
};
const unsigned char List_ForgeNum2[3][13] =
{
    {"�������3   "},
	{" ��         "},
	{"0-100       "}
};
const unsigned char List_ForgeAngle2[3][13] =
{
    {"���нǶ�3   "},
	{" ��         "},
	{"0-32000     "}
};
const unsigned char List_ForgeSpeed2[3][13] =
{
    {"����ٶ�3   "},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_ReturnSpeed2[3][13] =
{
    {"�����ٶ�3   "},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_IntervalTime2[3][13] =
{
    {"����ʱ��3   "},
	{" s          "},
	{"0-5.0       "}
};
const unsigned char List_ForgeTorque2[3][13] =
{
    {"���ת��3   "},
	{" %          "},
	{"0-100       "}
};
const unsigned char List_ForgeNum3[3][13] =
{
    {"�������4   "},
	{" ��         "},
	{"0-100       "}
};
const unsigned char List_ForgeAngle3[3][13] =
{
    {"���нǶ�4   "},
	{" ��         "},
	{"0-32000     "}
};
const unsigned char List_ForgeSpeed3[3][13] =
{
    {"����ٶ�4   "},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_ReturnSpeed3[3][13] =
{
    {"�����ٶ�4   "},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_IntervalTime3[3][13] =
{
    {"����ʱ��4   "},
	{" s          "},
	{"0-5.0       "}
};
const unsigned char List_ForgeTorque3[3][13] =
{
    {"���ת��4   "},
	{" %          "},
	{"0-100       "}
};
const unsigned char List_ForgeNum4[3][13] =
{
    {"�������5   "},
	{" ��         "},
	{"0-100       "}
};
const unsigned char List_ForgeAngle4[3][13] =
{
    {"���нǶ�5   "},
	{" ��         "},
	{"0-32000     "}
};
const unsigned char List_ForgeSpeed4[3][13] =
{
    {"����ٶ�5   "},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_ReturnSpeed4[3][13] =
{
    {"�����ٶ�5   "},
	{" rpm        "},
	{"0.0-3000.0  "}
};
const unsigned char List_IntervalTime4[3][13] =
{
    {"����ʱ��5   "},
	{" s          "},
	{"0-5.0       "}
};
const unsigned char List_ForgeTorque4[3][13] =
{
    {"���ת��5   "},
	{" %          "},
	{"0-100       "}
};


const unsigned char List_Err1Type[22][13] =
{
    {"EEr1����    "},
	{"ֱ��ĸ�߹�ѹ"},
	{"ֱ��ĸ��Ƿѹ"},
	{"���������  "},
	{"����        "},
	{"λ�ô�����  "},
	{"�ƶ���ʱ    "},
	{"�ڲ�����    "},
	{"A��������� "},
	{"B��������� "},
	{"C��������� "},
	{"�ڲ�����    "},
	{"EEPROM����  "},
	{"����        "},
	{"����        "},
	{"ĸ�߽Ӵ���  "},
	{"������Դ����"},
	{"A�೬��     "},
	{"B�೬��     "},
	{"C�೬��     "},
	{"�ƶ�ģ�����"},
	{"��������ʱ��"}
};
const unsigned char List_Err1Feedspeed[2][13] =
{
    {"Err1����ת��"},
	{" rpm        "}
};
const unsigned char List_Err1BusI[2][13] =
{
    {"Err1�������"},
	{" A          "}
};
const unsigned char List_Err1BusV[2][13] =
{
    {"EEr1ĸ�ߵ�ѹ"},
	{" V          "}
};
const unsigned char List_Err1RunState[11][13] =
{
    {"EEr1����״̬"},
	{"    ��������"},
	{"    ���ϴ���"},
	{"    ����״̬"},
	{"    ��ת����"},
	{"    ��ת����"},
	{"    �㶯��ת"},
	{"    �㶯��ת"},
	{"    �ƶ�״̬"},
 	{"    �������"},
	{"    ϵͳ����"}
};
const unsigned char List_Err1Runtime[2][13] =
{
    {"EEr1����ʱ��"},
	{" h          "}
};
const unsigned char List_Err2Type[23][13] =
{
    {"EEr2����    "},
	{"ֱ��ĸ�߹�ѹ"},
	{"ֱ��ĸ��Ƿѹ"},
	{"���������  "},
	{"����        "},
	{"λ�ô�����  "},
	{"����        "},
	{"����        "},
	{"A��������� "},
	{"B��������� "},
	{"C��������� "},
	{"����        "},
	{"EEPROM����  "},
	{"����        "},
	{"����        "},
	{"ĸ�߽Ӵ���  "},
	{"������Դ����"},
	{"A�೬��     "},
	{"B�೬��     "},
	{"C�೬��     "},
	{"�ƶ�ģ�����"},
	{"��������ʱ��"},
    {"CANͬ���쳣 "}
};
const unsigned char List_SysErrType[23][13] =
{
    {"����        "},
	{"ֱ��ĸ�߹�ѹ"},
	{"ֱ��ĸ��Ƿѹ"},
	{"���������  "},
	{"����        "},
	{"λ�ô�����  "},
	{"�ƶ���ʱ    "},
	{"�ڲ�����    "},
	{"A��������� "},
	{"B��������� "},
	{"C��������� "},
	{"�ڲ�����    "},
	{"EEPROM����  "},
	{"����        "},
	{"����        "},
	{"ĸ�߽Ӵ���  "},
	{"������Դ����"},
	{"A�೬��     "},
	{"B�೬��     "},
	{"C�೬��     "},
	{"�ƶ�ģ�����"},
	{"��������ʱ��"},
	{"CANͬ���쳣 "}
};
const unsigned char List_Err2Feedspeed[2][13] =
{
    {"Err2����ת��"},
	{" rpm        "}
};
const unsigned char List_Err2BusI[2][13] =
{
    {"Err2�������"},
	{" A          "}
};
const unsigned char List_Err2BusV[2][13] =
{
    {"EEr2ĸ�ߵ�ѹ"},
	{" V          "}
};
const unsigned char List_Err2RunState[11][13] =
{
    {"EEr2����״̬"},
	{"    ��������"},
	{"    ���ϴ���"},
	{"    ����״̬"},
	{"    ��ת����"},
	{"    ��ת����"},
	{"    �㶯��ת"},
	{"    �㶯��ת"},
	{"    �ƶ�״̬"},
 	{"    �������"},
	{"    ϵͳ����"}
};
const unsigned char List_Err2Runtime[2][13] =
{
    {"EEr2����ʱ��"},
	{" h          "}
};

const unsigned char List_CurState[11][13] =
{
    {"��ǰ����״̬"},
	{"    ��������"},
	{"    ���ϴ���"},
	{"    ����״̬"},
	{"    ��ת����"},
	{"    ��ת����"},
	{"    �㶯��ת"},
	{"    �㶯��ת"},
	{"    �ƶ�״̬"},
 	{"    �������"},
	{"    ϵͳ����"}
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
	{"�� "},
	{"�� "},
	{"V  "},
	{"V  "},
	{"V  "},
	{"V  "},
	{"V  "},
	{"kHz"},
 	{"kHz"},
	{"   "},
	{"   "},
	{"��  "},
	{"��  "},
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
	{"��"},
	{"��"},
	{"��"}
};
const unsigned char List_Symbol3[5][4] =
{
    {"   "},
	{" ��"},
	{" ��"},
	{" ��"},
	{" ��"}
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
	{"��ESC�˳�          "},
	{"    �������!      "}
};
const unsigned char List_DownLOADErr[2][20] =
{
	{"��ESC�˳�          "},
	{"  �����в�������!  "}
};
const unsigned char List_UPloadErr[2][20] =
{
	{"��ESC�˳�          "},
	{"  �����в����ϴ�!  "}
};
const unsigned char DownLoadEnd[2][20] =
{
	{"��ESC�˳�          "},
    {"     �������!     "}
};
const unsigned char UpLoadEnd[2][20] =
{
	{"��ESC�˳�          "},
    {"     �ϴ����!     "}
};
const unsigned char ComErr[3][20] =
{
    {"����               "},
    {"     ͨ���쳣      "},
    {"                   "}
};
const unsigned char SysErr[3][20] =
{
    {"����               "},
	{"     ϵͳ����      "},
    {"                   "}
};
const unsigned char systemInit[2][20] =
{
    {"  ϵͳ��Ϣ��ȡ��   "},
    {"     .......       "}
};

const unsigned char UpLoadCfg[2][20] =
{
    {"    �����ϴ���     "},
    {"        ......     "}
};
const unsigned char ReUpLoadCfg[2][20] =
{
    {" ���������������  "},
    {"      ......       "}
};
const unsigned char Restore[2][20] =
{
    {" ���ڻָ���������  "},
    {"      ......       "}
};
const unsigned char DownLoadCfg[2][20] =
{
    {"   ����������    "},
    {"       ......      "}
};


#endif
