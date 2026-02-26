#include <stdio.h>
int main04()
{
	//基本类型的指针
	int a=5;//有个 基本类型的空间
	int* p = &a;// 基本类型指针  指向 基本类型 空间
	//数组指针
	int arr[4] = {1,2,3,4};
	//int[4] * pa;//想法：4个整数 的 指针
//	  int (*) [4] //数组指针类型
	int(*pa)[4];//  数组类型 的  指针变量
	int*  parr[4];//指针类型的 数组：指针数组
	//printf( "%d %d\n",sizeof(p),sizeof(pa));// 4 4
	//printf("%d %d\n", sizeof(*p), sizeof(*pa));//4 16
	
	//pa = arr;//不建议：arr代表数组类型 是 第0个成员的地址 pa是4个整数空间的指针  不匹配
	pa = &arr;//建议：整个数组类型 的 地址
	////数组名与&数组名的 区别
	//printf("%d %d\n",arr,arr+1);
	//printf("%d %d\n",&arr,&arr + 1);
	//利用  数组指针 遍历 内部 空间
	//*pa[2] 拆  *((*pa)+2)
	//(*pa)[2] 拆    *((*pa)+2)   *(*pa+2) 代表
	//(*pa)[0]   拆  *((*pa)+0)   *(*pa+0)   *(*pa)  **pa--模样像个二级指针 其实是访问第0个子成员空间
	printf("%d %d %d %d\n", **pa, (*pa)[1],(*pa)[2] , *(*pa+3 ));//*(*pa+0)   *(*pa)
	return 0;
}