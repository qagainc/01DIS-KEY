#ifndef FUNCTION_H_
#define FUNCTION_H_

extern void DisSIMIRE(void);
extern const unsigned char* _GetGB2312ZK(unsigned char ISN_H,unsigned char ISN_L);
extern void _DisString(unsigned char page,unsigned char column,unsigned char type,const unsigned char* pt);
extern void DisAscii(unsigned char page,unsigned char column,unsigned char type,unsigned char ascii);
extern void _DisNormalAscii(unsigned char page,unsigned char column,const unsigned char* pt);
extern void _DisReverseAscii(unsigned char page,unsigned char column,const unsigned char* pt);
extern void _DisUnderlineAscii(unsigned char page,unsigned char column,const unsigned char* pt);
extern void DisSpaceUnderline(unsigned char page,unsigned char column,unsigned char len);

//DIS
extern void ListLv1(void);


#endif
