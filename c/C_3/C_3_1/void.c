//void的用法
#include<stdio.h>
//返回类型为 void 说明不需要return返回值
void f1( void );//有些 编译器 要求 必须明确说明 没有参数
double f2(void);
void* f3();

int mainvoid(  )//形参如果没有 可以空着
{

	return 0;
}
void f1(void)
{

	return  ;//返回类型是void  return 可以省略 
}
double f2(void)
{
	//如果返回类型 不是 void return 不能省略 必须要有明确返回值
	return 0.0;
}
void* f3()
{
	//void*  代表是 无类型的指针类型  return 不能省略
	return NULL; 
}