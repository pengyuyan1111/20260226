#include<stdio.h>

//方式1： enum 枚举名称 { 内容1,  内容2, 内容3,... };

//方式2： enum 枚举名称 { 内容1=整数,  内容2=整数, 内容3=整数, ...};

int main01 ()
{
	 //定义 枚举类型  {可能的值名称}
	enum fang_xiang {N,S,W,E};
	typedef enum fang_xiang FX;
	//用类型创建变量
	//int           a = 9;
	enum fang_xiang fx = N;
	FX fx2 = 2;
	
	typedef enum xx {A=10,B=20,O,AB}   XUE_XING;
	XUE_XING m1 = AB;
	switch (m1)
	{
	case A:
		break;
	case AB:
		break;
	case B:
		break;
	case O:
		break;
	}
	return 0;
}