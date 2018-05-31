#include "sys.h"
#include "panel.h"
#include "fonts.h"
#include "list.h"
#include "struct.h"
#include "oled.h"
#include "delay.h"
#include "bmp.h"

enum _Interface Interface;


unsigned char t;

void Dis_Menu(void)
{
    unsigned char i;signed char temp;
    DisSpaceUnderline(0,0,3);
    
    _DisString(0,3,2,CurList);              //显示首行标题
    _DisString(0,87,2,Blank7);
	temp = Dis.CurOpt-Dis.CurPos;           //确定最上一行的位置
	for(i=2;i<8;i+=2)
	{
		DisAscii(i,14,0,temp/10+48);
		DisAscii(i,21,0,temp%10+48);
		temp++;
		if(i==Dis.CurPos*2+2)
		{
			if(Dis.CurOpt==0)
				_DisString(i,0,0,List_Symbol[1]);
			else if(Dis.CurOpt==Dis.CurLen-1)
				_DisString(i,0,0,List_Symbol[3]);
			else
				_DisString(i,0,0,List_Symbol[2]);
			_DisString(i,32,1,CurList+13*(temp));
		}
		else
		{
			_DisString(i,0,0,List_Symbol[0]);
			_DisString(i,32,0,CurList+13*(temp));
		}
	//	DisSpace(i,28,4);
		_DisString(i,116,0,Blank3);
	}
    
}

void oled_test(void)
{    
//         OLED_Clear();
          ListLv1();
         CurList = List_Menu[0];
         Dis_Menu();
//         _DisString(0,0,0,CurList);   
//         CurList = List_Menu[1];
//         _DisString(2,32,1,CurList);
//         CurList = List_Menu[2];
//         _DisString(4,32,2,CurList);
//         CurList = List_Menu[3];
//         _DisString(6,32,0,CurList); 
    
        delay_ms(200);
//        delay_ms(1000);
//        delay_ms(1000);
//        OLED_Clear();
		//OLED_ShowString(6,3,"0.96' OLED TEST",16);   

//		OLED_DrawBMP(0,0,128,8,BMP1);  //图片显示(图片显示慎用，生成的字表较大，会占用较多空间，FLASH空间8K以下慎用)
//		delay_ms(1000);
//		delay_ms(1000);
//		delay_ms(1000);       
            
}

void ListLv1(void)
{
	Dis.CurPos = Dis.Pos[Dis.CurLvl];   //更新显示位置
	Dis.CurOpt = Dis.Opt[Dis.CurLvl];   //更新选项位置
	Interface = MENU; 	      	        //通用列表格式
	Attr.ALL = 0;                       //其它属性
	CurList  = List_Menu[0];
//    if(Authority <2)
//		Dis.CurLen = 15;
//	if(Authority == Engineer)
//		Dis.CurLen = 15;
}

void DisSIMIRE(void)
{
	unsigned char i,j,page=2;
	const unsigned char* pt;
	pt= SIMIER;
    
	for(j=4;j;j--)
	{
        OLED_Set_Pos(6, page);
		for(i=118;i!=0;i--)
		{
             Write_IIC_Data2(*pt);
			pt++;
		}
		page++;
	}
}

//汉字底层显示，查找字库，显示，无字库时显示一条横线
void _DisNormalCharacter(unsigned char page,unsigned char column,const unsigned char* pt)
{
	unsigned char i;
	//OLED_Set_Pos(column, page);
    OLED_Set_Pos(column, page);
	for(i=14;i!=0;i--)
	{
        Write_IIC_Data2(*pt);
		pt++;
	}
	page++;
    OLED_Set_Pos(column, page);
	for(i=14;i!=0;i--)
	{
        Write_IIC_Data2(*pt);
		pt++;
	}
}

void _DisReverseCharacter(unsigned char page,unsigned char column,const unsigned char* pt)
{
	unsigned char i,temp;
	 OLED_Set_Pos(column, page);
	for(i=14;i!=0;i--)
	{
        Write_IIC_Data2(~*pt);
		pt++;
	}
	page++;
	 OLED_Set_Pos(column, page);
	for(i=14;i!=0;i--)
	{
	 temp=*pt^0x7F;
	 Write_IIC_Data2(temp);
		pt++;
	}
}

void _DisUnderlineCharacter(unsigned char page,unsigned char column,const unsigned char* pt)
{
	unsigned char i;
	OLED_Set_Pos(column, page);
	for(i=14;i!=0;i--)
	{
		Write_IIC_Data2(*pt);
		pt++;
	}
	page++;
    OLED_Set_Pos(column, page);
	for(i=14;i!=0;i--)
	{
		Write_IIC_Data2(*pt|0x40);
		pt++;
	}
}



//显示一行数据，数据指针指向ROM
void _DisString(unsigned char page,unsigned char column,unsigned char type,const unsigned char* pt)
{
	unsigned char temp,i=0;
	const unsigned char* p;
	while(pt[i]!='\0')
    {
    	if(pt[i]<128)
    	{
//    		temp=pt[i]-32;
//    		p=ASCII0716+temp*14;
//    		switch(type)
//    		{
//    			case 0:
//    				_DisNormalAscii(page,column,p);break;
//    			case 1:
//    				if(pt[i]==32)
//    				{	_DisNormalAscii(page,column,p);break;}
//    				else
//    					_DisReverseAscii(page,column,p);
//    					break;
//    			case 2:
//    				_DisUnderlineAscii(page,column,p);break;
//    		}
//    		column+=7;
    	}
    	else
    	{
    		temp=pt[i];
    		if(pt[i++]!='\0')
    		{
    			p=_GetGB2312ZK(temp,pt[i]);
        		switch(type)
        		{
        			case 0:
        				_DisNormalCharacter(page,column,p);break;
        			case 1:
        				_DisReverseCharacter(page,column,p);break;
        			case 2:
        				_DisUnderlineCharacter(page,column,p);break;
        		}
    		}
    		column+=14;
    	}
    	i++;
    }
}



void _DisNormalAscii(unsigned char page,unsigned char column,const unsigned char* pt)
{
	unsigned char i;
	OLED_Set_Pos(column, page);
	for(i=7;i!=0;i--)
	{
		Write_IIC_Data2(*pt);
		pt++;
	}
	page++;
	OLED_Set_Pos(column, page);
	for(i=7;i!=0;i--)
	{
		Write_IIC_Data2(*pt);
		pt++;
	}
}
void _DisReverseAscii(unsigned char page,unsigned char column,const unsigned char* pt)
{
	unsigned char i,temp;
	OLED_Set_Pos(column, page);
	for(i=7;i!=0;i--)
	{
		Write_IIC_Data2(~*pt);
		pt++;
	}
	page++;
	OLED_Set_Pos(column, page);
	for(i=7;i!=0;i--)
	{
		temp=*pt^0x7F;
		Write_IIC_Data2(temp);
		pt++;
	}
}
void _DisUnderlineAscii(unsigned char page,unsigned char column,const unsigned char* pt)
{
	unsigned char i;
	OLED_Set_Pos(column, page);
	for(i=7;i!=0;i--)
	{
		Write_IIC_Data2(*pt);
		pt++;
	}
	page++;
	OLED_Set_Pos(column, page);
	for(i=7;i!=0;i--)
	{
		Write_IIC_Data2(*pt|0x40);
		pt++;
	}
}

//显示一个ASCII code
void DisAscii(unsigned char page,unsigned char column,unsigned char type,unsigned char ascii)
{
	unsigned char temp;
	const unsigned char* p;
	temp=ascii-32;
    p=ASCII0716+temp*14;
	switch(type)
	{
		case 0:
			_DisNormalAscii(page,column,p);break;
		case 1:
			_DisReverseAscii(page,column,p);break;
		case 2:
			_DisUnderlineAscii(page,column,p);break;
	}
    column+=7;
}

void DisSpaceUnderline(unsigned char page,unsigned char column,unsigned char len)
{
	unsigned char i;
	OLED_Set_Pos(column, page);
	for(i=len;i!=0;i--)
	{
		Write_IIC_Data2(0x00);
	}
	page++;
	OLED_Set_Pos(column, page);
	for(i=len;i!=0;i--)
	{
		Write_IIC_Data2(0x40);
	}
}



void Display(void)
{
    switch(Interface)
    {
        case ACCESS:
            DisSIMIRE();
               break;
    }
}



//---------------------------------------------------------------------------
// _GetGB2312ZK:
//---------------------------------------------------------------------------
// 根据所给的汉字内码(高8位ISN_H和第8位ISN_L)，返回该汉字点阵字库的首指针。
// 由于430的指针寻址方式的差异，使用_表示的函数需要特别注意，
// 它的指针指向Flash，需要const *指针。
//---------------------------------------------------------------------------
const unsigned char* _GetGB2312ZK(unsigned char ISN_H,unsigned char ISN_L)
{
	switch (ISN_H)
	{
		case 0xA1:
		{
			switch (ISN_L)
			{
				case 0xE1 :return A1E1;
				case 0xE3 :return A1E3;
				case 0xE6 :return A1E6;
				case 0xEE :return A1EE;
				case 0xF0 :return A1F0;
				case 0xF1 :return A1F1;
				case 0xF3 :return A1F3;
				case 0xF4 :return A1F4;
				case 0xF8 :return A1F8;
				case 0xF9 :return A1F9;
			}
			break;
		}
		case 0xA6:
		{
			switch (ISN_L)
			{
				case 0xB8 :return A6B8;
			}
			break;
		}
		case 0xA8:
		{
			switch (ISN_L)
			{
				case 0x78 :return A878;
				case 0x8B :return A88B;
			}
			break;
		}
		case 0xB0:
		{
			switch (ISN_L)
			{
				case 0xB4 :return B0B4;
				case 0xB8 :return B0B8;
				case 0xE5 :return B0E5;
				case 0xE6 :return B0E6;
			}
			break;
		}
		case 0xB1:
		{
			switch (ISN_L)
			{
				case 0xA3 :return B1A3;
				case 0xA7 :return B1A7;
				case 0xA8 :return B1A8;
				case 0xC8 :return B1C8;
				case 0xBE :return B1BE;
				case 0xD5 :return B1D5;
				case 0xDF :return B1DF;
				case 0xE0 :return B1E0;
				case 0xEA :return B1EA;
			}
			break;
		}
		case 0xB2:
		{
			switch (ISN_L)
			{
				case 0xA8 :return B2A8;
				case 0xB9 :return B2B9;
				case 0xBB :return B2BB;
				case 0xBF :return B2BF;
				case 0xC9 :return B2C9;
				case 0xCB :return B2CB;
				case 0xCE :return B2CE;
				case 0xBD :return B2BD;
				case 0xE2 :return B2E2;
				case 0xE9 :return B2E9;
				case 0xFA :return B2FA;
			}
			break;
		}
		case 0xB3:
		{
			switch (ISN_L)
			{
				case 0xA1 :return B3A1;
				case 0xA3 :return B3A3;
				case 0xA4 :return B3A4;
				case 0xA5 :return B3A5;
				case 0xA7 :return B3A7;
				case 0xAC :return B3AC;
				case 0xB5 :return B3B5;
				case 0xC9 :return B3C9;
				case 0xCC :return B3CC;
				case 0xD9 :return B3D9;
				case 0xE5 :return B3E5;
				case 0xF6 :return B3F6;
                case 0xF5 :return B3F5;
			}
			break;
		}
		case 0xB4:
		{
			switch (ISN_L)
			{
				case 0xA5 :return B4A5;
				case 0xAB :return B4AB;
				case 0xAE :return B4AE;
				case 0xCE :return B4CE;
				case 0xD3 :return B4D3;
				case 0xED :return B4ED;
				case 0xEF :return B4EF;
				case 0xF2 :return B4F2;
				case 0xF3 :return B4F3;
				case 0xFD :return B4FD;
			}
			break;
		}
		case 0xB5:
		{
			switch (ISN_L)
			{
				case 0xA5 :return B5A5;
				case 0xB1 :return B5B1;
				case 0xBD :return B5BD;
				case 0xC8 :return B5C8;
				case 0xD8 :return B5D8;
				case 0xE3 :return B5E3;
				case 0xE7 :return B5E7;
				case 0xF5 :return B5F5;
				case 0xF7 :return B5F7;
			}
			break;
		}
		case 0xB6:
		{
			switch (ISN_L)
			{
				case 0xA8 :return B6A8;
				case 0xAF :return B6AF;
				case 0xC1 :return B6C1;
				case 0xC8 :return B6C8;
				case 0xCD :return B6CD;
				case 0xCB :return B6CB;
				case 0xCE :return B6CE;
				case 0xCF :return B6CF;
				case 0xE0 :return B6E0;
				case 0xEE :return B6EE;
				case 0xFE :return B6FE;
			}
			break;
		}
		case 0xB7:
		{
			switch (ISN_L)
			{
				case 0xB4 :return B7B4;
				case 0xB5 :return B7B5;
				case 0xB6 :return B7B6;
				case 0xBD :return B7BD;
				case 0xC5 :return B7C5;
				case 0xD6 :return B7D6;
				case 0xE7 :return B7E7;
				case 0xF1 :return B7F1;
			}
			break;
		}
		case 0xB8:
		{
			switch (ISN_L)
			{
				case 0xA8 :return B8A8;
				case 0xB4 :return B8B4;
				case 0xBA :return B8BA;
				case 0xC4 :return B8C4;
				case 0xD0 :return B8D0;
				case 0xDF :return B8DF;
				case 0xF1 :return B8F1;
				case 0xF8 :return B8F8;
				case 0xFA :return B8FA;
			}
			break;
		}
		case 0xB9:
		{
			switch (ISN_L)
			{
				case 0xA6 :return B9A6;
				case 0xCA :return B9CA;
				case 0xD5 :return B9D5;
				case 0xD8 :return B9D8;
				case 0xDC :return B9DC;
				case 0xDF :return B9DF;//20130820
				case 0xFD :return B9FD;
			}
			break;
		}
		case 0xBA:
		{
			switch (ISN_L)
			{
				case 0xC5 :return BAC5;
				case 0xCF :return BACF;
				case 0xF3 :return BAF3;
			}
			break;
		}
		case 0xBB:
		{
			switch (ISN_L)
			{
				case 0xA4 :return BBA4;
				case 0xA7 :return BBA7;
				case 0xAF :return BBAF;
				case 0xBA :return BBBA;
				case 0xBB :return BBBB;
				case 0xD6 :return BBD6;
				case 0xD8 :return BBD8;
				case 0xF7 :return BBF7;
				case 0xF9 :return BBF9;
				case 0xFA :return BBFA;
				case 0xFD :return BBFD;
			}
			break;
		}
		case 0xBC:
		{
			switch (ISN_L)
			{
				case 0xBC :return BCBC;
				case 0xB6 :return BCB6;
				case 0xC6 :return BCC6;
				case 0xC7 :return BCC7;
				case 0xCA :return BCCA;
				case 0xCC :return BCCC;
				case 0xD2 :return BCD2;
				case 0xD3 :return BCD3;
				case 0xE0 :return BCE0;
				case 0xE4 :return BCE4;
				case 0xEC :return BCEC;
				case 0xF5 :return BCF5;
				case 0xFC :return BCFC;
				case 0xFE :return BCFE;
			}
			break;
		}
		case 0xBD:
		{
			switch (ISN_L)
			{
				case 0xBB :return BDBB;
				case 0xC7 :return BDC7;
				case 0xCF :return BDCF;
				case 0xD3 :return BDD3;
				case 0xDA :return BDDA;
				case 0xE1 :return BDE1;
				case 0xE7 :return BDE7;
				case 0xF8 :return BDF8;
                case 0xB5 :return BDB5;
			}
			break;
		}
		case 0xBE:
		{
			switch (ISN_L)
			{
				case 0xAF :return BEAF;
				case 0xD8 :return BED8;
				case 0xDD :return BEDD;
			}
			break;
		}
		case 0xBF:
		{
			switch (ISN_L)
			{
				case 0xAA :return BFAA;
				case 0xDA :return BFDA;
				case 0xD8 :return BFD8;
				case 0xEC :return BFEC;
			}
			break;
		}
		case 0xC0:
		{
			switch (ISN_L)
			{
				case 0xA1 :return C0A1;
				case 0xA9 :return C0A9;
				case 0xE0 :return C0E0;
				case 0xDB :return C0DB;
				case 0xED :return C0ED;
				case 0xFA :return C0FA;
				case 0xFD :return C0FD;
			}
			break;
		}
		case 0xC1:
		{
			switch (ISN_L)
			{
				case 0xAC :return C1AC;
				case 0xBD :return C1BD;
				case 0xBF :return C1BF;
				case 0xE3 :return C1E3;
				case 0xEE :return C1EE;
				case 0xF7 :return C1F7;
				case 0xF4 :return C1F4;
			}
			break;
		}
		case 0xC2:
		{
			switch (ISN_L)
			{
				case 0xA9 :return C2A9;
				case 0xB7 :return C2B7;
				case 0xBC :return C2BC;
				case 0xCB :return C2CB;
				case 0xCA :return C2CA;
				case 0xEB :return C2EB;
				case 0xF6 :return C2F6;
				case 0xFD :return C2FD;
			}
			break;
		}
		case 0xC3:
		{
			switch (ISN_L)
			{
				case 0xDC :return C3DC;
				case 0xE6 :return C3E6;
				case 0xFC :return C3FC;
			}
			break;
		}
		case 0xC4:
		{
			switch (ISN_L)
			{
				case 0xA3 :return C4A3;
				case 0xB8 :return C4B8;
				case 0xDA :return C4DA;
				case 0xDC :return C4DC;
				case 0xE2 :return C4E2;
			}
			break;
		}
		case 0xC5:
		{
			switch (ISN_L)
			{
				case 0xE4:return C5E4;
				case 0xBC:return C5BC;
                case 0xA4:return C5A4;
			}
			break;
		}
		case 0xC6:
		{
			switch (ISN_L)
			{
				case 0xAB:return C6AB;
				case 0xB5:return C6B5;
				case 0xB7:return C6B7;
				case 0xBD:return C6BD;
				case 0xE6:return C6E6;
				case 0xF0:return C6F0;
				case 0xF4:return C6F4;
				case 0xF7:return C6F7;
			}
			break;
		}
		case 0xC7:
		{
			switch (ISN_L)
			{
				case 0xB0:return C7B0;
				case 0xB7:return C7B7;
				case 0xD0:return C7D0;
				case 0xE5:return C7E5;
				case 0xEB:return C7EB;
				case 0xF8:return C7F8;
				case 0xFA:return C7FA;
				case 0xFD:return C7FD;
			}
			break;
		}
		case 0xC8:
		{
			switch (ISN_L)
			{
				case 0xA1:return C8A1;
				case 0xA6:return C8A6;
				case 0xB7:return C8B7;
				case 0xC6:return C8C6;
				case 0xC8:return C8C8;
				case 0xDD:return C8DD;
				case 0xEB:return C8EB;
				case 0xED:return C8ED;
				case 0xF5:return C8F5;
				case 0xFD:return C8FD;
			}
			break;
		}
		case 0xC9:
		{
			switch (ISN_L)
			{
				case 0xA2 :return C9A2;
				case 0xC8 :return C9C8;
				case 0xCC :return C9CC;
				case 0xCF :return C9CF;
				case 0xD4 :return C9D4;
				case 0xE4 :return C9E4;
				case 0xE8 :return C9E8;
			}
			break;
		}
		case 0xCA:
		{
			switch (ISN_L)
			{
				case 0xB1 :return CAB1;
				case 0xB5 :return CAB5;
				case 0xB7 :return CAB7;
				case 0xB9 :return CAB9;
				case 0xBC :return CABC;
				case 0xBD :return CABD;
				case 0xC7 :return CAC7;
				case 0xD4 :return CAD4;
				case 0xD6 :return CAD6;
				case 0xE4 :return CAE4;
				case 0xFD :return CAFD;
				case 0xF5 :return CAF5;
				case 0xF8 :return CAF8;
			}
			break;
		}
		case 0xCB:
		{
			switch (ISN_L)
			{
				case 0xB2 :return CBB2;
				case 0xC0 :return CBC0;
				case 0xD9 :return CBD9;
				case 0xF8 :return CBF8;
				case 0xE6 :return CBE6;
                case 0xA2 :return CBA2;
			}
			break;
		}
		case 0xCC:
		{
			switch (ISN_L)
			{
				case 0xAC :return CCAC;
				case 0xD7 :return CCD7;
				case 0xD8 :return CCD8;
				case 0xF8 :return CCF8;
			}
			break;
		}
		case 0xCD:
		{
			switch (ISN_L)
			{
				case 0xA3 :return CDA3;
				case 0xA8 :return CDA8;
				case 0xAC :return CDAC;
				case 0xB3 :return CDB3;
				case 0xCB :return CDCB;
				case 0xE2 :return CDE2;
				case 0xEA :return CDEA;
			}
			break;
		}
		case 0xCE:
		{
			switch (ISN_L)
			{
				case 0xDE :return CEDE;
				case 0xC2 :return CEC2;
				case 0xBB :return CEBB;
				case 0xA7 :return CEA7;
				case 0xA2 :return CEA2;
				case 0xF3 :return CEF3;
			}
			break;
		}
		case 0xCF:
		{
			switch (ISN_L)
			{
				case 0xA2 :return CFA2;
				case 0xB5 :return CFB5;
				case 0xC2 :return CFC2;
				case 0xC8 :return CFC8;
				case 0xDE :return CFDE;
				case 0xDF :return CFDF;
				case 0xE0 :return CFE0;
				case 0xF2 :return CFF2;
				case 0xFB :return CFFB;
			}
			break;
		}
		case 0xD0:
		{
			switch (ISN_L)
			{
				case 0xA1 :return D0A1;
				case 0xA3 :return D0A3;
				case 0xA7 :return D0A7;
				case 0xB9 :return D0B9;
				case 0xC2 :return D0C2;
				case 0xC4 :return D0C4;
				case 0xC5 :return D0C5;
				case 0xCD :return D0CD;
				case 0xD0 :return D0D0;
				case 0xD4 :return D0D4;
				case 0xDE :return D0DE;
				case 0xED :return D0ED;
			}
			break;
		}
		case 0xD1:
		{
			switch (ISN_L)
			{
				case 0xA1 :return D1A1;
				case 0xAF :return D1AF;
				case 0xB9 :return D1B9;
				case 0xD3 :return D1D3;
				case 0xD8 :return D1D8;
				case 0xE9 :return D1E9;
                case 0xB6 :return D1B6;
			}
			break;
		}
		case 0xD2:
		{
			switch (ISN_L)
			{
				case 0xBB :return D2BB;
				case 0xE4 :return D2E4;
				case 0xE5 :return D2E5;
				case 0xE6 :return D2E6;
				case 0xEC :return D2EC;
			}
			break;
		}
		case 0xD3:
		{
			switch (ISN_L)
			{
				case 0xB3 :return D3B3;
				case 0xC3 :return D3C3;
				case 0xC5 :return D3C5;
				case 0xC9 :return D3C9;
				case 0xD0 :return D3D0;
				case 0xA6 :return D3A6;
			}
			break;
		}
		case 0xD4:
		{
			switch (ISN_L)
			{
				case 0xB1 :return D4B1;
				case 0xB4 :return D4B4;
				case 0xBE :return D4BE;
				case 0xCA :return D4CA;
				case 0xCB :return D4CB;
				case 0xD8 :return D4D8;
				case 0xD9 :return D4D9;
				case 0xDA :return D4DA;
				case 0xF1 :return D4F1;
				case 0xF6 :return D4F6;
			}
			break;
		}
		case 0xD5:
		{
			switch (ISN_L)
			{
				case 0xB6 :return D5B6;
				case 0xB9 :return D5B9;
				case 0xCF :return D5CF;
				case 0xDF :return D5DF;
				case 0xFD :return D5FD;
			}
			break;
		}
		case 0xD6:
		{
			switch (ISN_L)
			{
				case 0xB1 :return D6B1;
				case 0xB5 :return D6B5;
				case 0xB7 :return D6B7;
				case 0xBB :return D6BB;
				case 0xBE :return D6BB;
				case 0xC3 :return D6C3;
				case 0xC6 :return D6C6;
				case 0xD0 :return D6D0;
				case 0xD8 :return D6D8;
				case 0xF7 :return D6F7;
				case 0xFA :return D6FA;
			}
			break;
		}
		case 0xD7:
		{
			switch (ISN_L)
			{
				case 0xA1 :return D7A1;
				case 0xAA :return D7AA;
				case 0xB4 :return D7B4;
				case 0xBC :return D7BC;
				case 0xD3 :return D7D3;
				case 0xD4 :return D7D4;
				case 0xD6 :return D7D6;
				case 0xE8 :return D7E8;
				case 0xE9 :return D7E9;
				case 0xEE :return D7EE;
				case 0xF7 :return D7F7;
			}
			break;
		}

		case 0xE3:
		{
			switch (ISN_L)
			{
				case 0xD0 :return E3D0;
			}
			break;
		}
	}
	return D1BE;
}




