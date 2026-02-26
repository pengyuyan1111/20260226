#include <stdio.h>
int main08 ()
{
	//分析下面代码的执行结构，并通过调试器进行验证
	//int a[4] = {1,2,3,4};
	//int *ptr1=(int*)(&a+1 );
	//int *ptr2 = (int*)((int)a+1 );

	//printf("%x, %x",ptr1[-1],*ptr2);
	//unsigned char endia[2] = { 0,1 };
	//short x;
	//x = *(short*)endia;
	//printf("%hx\n",x);//?  

	//0x12ff7c
	//0x9LL;//需要：8个字节的连续空间
	char aa[8];
	short bb[4];
	int cc[2];
	long long dd =0LL;
	//dd = 0x9LL;//直接访问
	//通过一个地址 间接访问 8个字节空间
	*(long long*)aa = 0x9LL;
	*(long long*)bb = 0x9LL;
	//给dd变量 的第3个字节变为 ff
	*((char*)&dd+2) = 0xff;
	return 0;
}