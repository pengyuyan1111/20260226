/*
  知识点列表：
  1 类型关键字
  2 命名规范
  3 字面值后缀
  4 字节大小与数据范围
  5 
  6 
  7 
  8 
  9
  10 打印格式
*/
#include<stdio.h>
int main02()
{
	float fValue = .25f;//单精度浮点数
	double dValue = .25;//双精度浮点数
	long double ldValue= .25l;//标准化组织IEEE 定义了  可能被升级。
	//类型字节数
	printf("%d %d %d\n",sizeof(float),sizeof(double),sizeof(long double));
	// 字面值
	//小数方式
	float pi = 3.1415926f;
	//指数方式——科学计数法
	float x = 56e5;
	//打印格式
	printf("小数方式%f %f\n",pi,x);
	printf("指数方式%e %e\n", pi, x);
	printf("最短方式%g %g\n", pi, x);
	return 0;
}