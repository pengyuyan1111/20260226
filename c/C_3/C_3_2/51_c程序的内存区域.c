#include <stdio.h>
//#include <malloc.h>
#include<stdlib.h>
int* fun51()
{
	int a;//申请一个 整数空间
	a = 10;//向空间 存入数据
	return &a;//分享 空间
}
int* fun52()
{
	int *p=malloc( sizeof(int));//申请一个 整数空间
	if (p!=NULL)
	{
		*p = 100;//向空间 存入数据
	}
	return p ;//分享 空间
}

int main()
{
	/*代码区code zone · 常数区constant zone · 全局变量区global zone · 栈区stack zone · 堆区heap zone */
	/*栈区 stack*/
	//int* p = fun51();
	///*堆区 heap */
	/*int* p = fun52();
	printf("%d\n", *p);
	printf("%d\n", *p);*/
	//printf("%d\n", *p);
	//printf("%d\n", *p);
	//
	////当堆空间不用时 及时释放
	//free(p);
	//p = NULL;
	//堆区的函数用法
	//对比：栈区
	//申请一个变量
	//int age = 5;
	////申请 多个变量——数组
	//int arr[5] = {1};
	//堆区heap：——像放风筝
	int len = 5;
	////int* ph = malloc(sizeof(int)*len);
	int* ph = calloc(len, sizeof(int));
	////*(ph + 0) = 1;
	ph[0] = 1;
	ph[1] = 3;
	ph[2] = 5;
	ph[3] = 6;
	ph[4] = 7;
	//扩容空间
	len += 50;
	ph=realloc(ph,sizeof(int)*len);
	ph[9] = 9;
	free(ph);
	ph = NULL;
	return 0;
}
