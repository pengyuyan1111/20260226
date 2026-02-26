#include <stdio.h>
int main02 ()
{
	//1 什么是指针变量：存储内存地址的变量为指针变量 
	//声明指针变量
	int a = 5;
	int* p;//
	p=&a;
	/*printf("直接访问：%d\n",a);
	printf("间接访问：%d\n",*p);*/
	//2 指针变量的字节数：根据操作系统的位数而不同。
	char *pc=&a;
	short* ps = &a;
	long long* pll = &a;
	printf("%d %d %d %d \n",sizeof(p),sizeof(pc),sizeof(ps),sizeof(pll));
	printf("%d %d %d %d \n", sizeof(*p), sizeof(*pc), sizeof(*ps), sizeof(*pll));
	//3 指针的移动：根据数据类型不同，移动的步伐大小也不同
	//地址+整数==找到另一个地址
	printf("%d %d %d\n", p,p+1,p+2);
	printf("%d %d %d\n",  pc, pc + 1, pc + 2);
	printf("%d %d %d\n",  ps, ps + 1, ps + 2);
	printf("%d %d %d\n",  pll, pll + 1, pll + 2);
	//特殊的指针类型
	//void 空类型·无类型·不确定类型  ——是个类型的占位符号
	void* pv = &a;//void* 仅仅用于保留地址 无法间接访问 无法偏移另一个地址
	//*pv = 100;
	//pv + 1;

	//4 利用指针对存储值进行算术运算（注意运算符的优先级）。
	//直接访问能干啥
	/*a = 6;
	a += 2;
	a *= 3;
	a++;
	++a;*/
	//间接访问
	*p = 6;
	*p += 2;
	*p *= 3;
	(*p)++;
	++*p;
	return 0;
}