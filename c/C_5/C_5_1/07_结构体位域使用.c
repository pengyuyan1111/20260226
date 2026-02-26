#include <stdio.h>
/*定义一个结构体*/
//结构体  位域(二进制位的区域范围) 应用于嵌入式领域居多
typedef struct  
{
	 int a:2;//a变量占两个位的存储空间 但int会分配4个字节。
	 int b:8;
	 int c:2;

	 int :0;//断开
	 int d:2;

}  TT;
 
int main07   ()
{
	TT t ;
	t.a = 10;
	printf("%hhd\n",t.a);
 

	return 0;
}