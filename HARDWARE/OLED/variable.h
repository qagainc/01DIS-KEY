#ifndef VARIABLE_H_
#define VARIABLE_H_

#ifdef   _SIMIRE_
#define  _extern
#else
#define  _extern  extern
#endif

//_extern enum _Button Button;
//_extern enum _ErrType ErrType;
//_extern enum _Authority Authority;
//_extern enum _Interface Interface,InterfaceBackup;
//_extern enum _Interface Interface;

//_extern struct _RunModeSet  RunModeSet;
//_extern struct _GivenSource GivenSource;
//_extern struct _RunParaSet  RunParaSet;
//_extern struct _AutoModeSet AutoModeSet;
//_extern struct _ForgePara ForgePara;
//_extern struct _ForgeSpeed ForgeSpeed;
//_extern struct _CANCom CANCom;
//_extern struct _SystemPara  SystemPara;
//_extern struct _S_Curve S_Curve;
//_extern struct _ParaRead    ParaRead;
//_extern struct _Fault1      Fault1;
//_extern struct _Fault2      Fault2;
//_extern struct _ExFunPara   ExFunPara;
//_extern struct _TerminalFunDef   TerminalFunDef;
//_extern struct _TerminalParaCfg  TerminalParaCfg;
//_extern struct _TerminalAICfg  TerminalAICfg;
//_extern struct _MultiStageSpeed  MultiStageSpeed;
//_extern struct _ProcessPID   ProcessPID;
//_extern struct _CommPara     CommPara;
//_extern struct _RealtimeInfo RealtimeInfo;
//_extern struct _Product      Product;
//_extern struct _Coefficient  Coefficient;
//_extern struct _FitPoint     FitPoint;
//_extern struct _JKConfig     JKConfig;

_extern struct _Dis  Dis;
//_extern struct _DatRX DatRX;
//_extern struct _ComRX ComRX;
//_extern struct _ComTX ComTX,DatTX;
//_extern struct _Key ESC,JOG,FWD,UP,DOWN,RUN,ENTER,SHIFT,STOP;

//_extern union _Com  Com;
_extern union _Attr Attr;
//_extern union _Sign Sign;
//_extern union _Flag Flag;
//_extern unsigned int AccessStep;
//_extern unsigned int SystemStateBackup;

//_extern unsigned int DisBuf[12];
//_extern unsigned int CurJK;
//_extern unsigned int ShiftBuf[11];

//_extern unsigned int Initdelay;
//_extern unsigned int Rxdelay;
//_extern unsigned int Stepdelay;
//_extern unsigned int Leddelay;
//_extern unsigned int Keydelay;
//_extern unsigned int Keydelay1;
//_extern unsigned int Lcddelay;
//_extern unsigned int Stopdelay;
//_extern unsigned int Statedelay;
//_extern unsigned int AutoTxdelay;
//_extern unsigned int AutoJKdelay;
//_extern unsigned int LcdBackJKdelay;
//_extern unsigned int PosAdjdelay;
_extern const unsigned char*  CurList;
#endif
