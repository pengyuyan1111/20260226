#include <stdio.h>
#include<time.h>
#include<math.h>
int main04 ()
{
	/* 模板: typedef 现有类型名 自定义名称   */
	 
	/*1 基本数据类型定义*/
	//typedef int integer;
	//integer a, b;
	//int c, d;
	////增强代码的 可读性
	////java——字节类型
	//typedef char byte;
	//byte zj;
	//size_t cc;
	//time_t sj;
	//wchar_t wz;
	// KB——千字节  char  [1024]
	//char arr[1024];//数组名
	////数组类型的——封装
	//typedef char KB[1024];//数组类型 名
	//KB k1, k2, k3;// 数组类型  变量
	//KB* p1, * p2, * p3;//数组类型指针  变量
	//char(*p4)[1024];


	/*2  指针类型定义*/
	 //统一变量创建模式：  类型名   变量列表,,,,
	//typedef int* PINT;//减少 *的 存在
	//int* p, *q, *m;
	//PINT x, y, z;
	//char(*p4)[1024];//一维数组 指针 变量
	//typedef char(*P_KB)[1024];//一维数组 指针 类型
	//P_KB p1, p2;


	/*3  函数类型定义*/ 
	//double can[4] = { 2,-2,3.999,2.001 };
	//typedef double  (*P_MATH)(double);
	////double(*pms[4])(double) = { sqrt,fabs,ceil,floor };
	//P_MATH pms[4] = { sqrt,fabs,ceil,floor };
	//for (int i = 0; i < 4; i++)
	//{
	//	printf("%f\n", pms[i](can[i]));
	//}


	/*4 嵌套定义*/
	  //一维数组指针
	typedef int ARR10 [10];
	typedef ARR10* PA;
	PA p1, p2;
	typedef PA PointIntTenArray;
	PointIntTenArray m1;
	return 0;
}