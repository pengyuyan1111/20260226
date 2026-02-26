#include <stdio.h>
int add(int a, int b);//全局声明 :声明状态
int add_all(int a[], int len);//更新声明  推荐
int add_all_2(int(*a)[6]);


int main02()
{

	/*函数的前置声明*/

	/*函数的执行原理：调用时执行，执行完消失*/
	//函数调用状态
	/*int da=add(14,3);
	printf("%d\n",da);*/
	//实参的执行顺序：从右侧到左侧
//printf("%d %d\n",add(36,48),add(159,562));

	//int arr[] = {8,7,5,6,9,1};
//	int he=add_all(arr,6);
	//int he = add_all_2( &arr);
	//printf("数组总和：%d\n",he);
	/*函数的数据（值）传递为：copy（复制）方式 */
	int a = 3, b = 4;
	printf("a=%d b=%d\n",a,b);
	//void exchange(int a, int b);//先声明
	//exchange(a,b);//再调用
	void swap(int* a, int* b);
	swap(&a,&b);
	printf("a=%d b=%d\n", a, b);
	/*自定义头文件*/

	return 0;
}
//函数 ：定义状态
int add(int a,int b)
{
	int sum=0;
	sum=a+b;
	return sum;
}
 
int add_all(int a[],int len )
{
	
	int sum=0;
	//int len=sizeof(a)/sizeof(a[0]);//a[0] == *(a+0)==*a
	int i;
	for(i=0;i<len;i++)
	{
		sum+=a[i];
	}
	return sum;
}
int add_all_2(int (*a)[6])
{
	int sum = 0;
	//int len=sizeof(a)/sizeof(a[0]);//a[0] == *(a+0)==*a
	int i;
	for (i = 0;i < 6;i++)
	{
		sum +=  (*a)[i];
	}
	return sum;
}
void exchange(int a, int b)
{
	int t;
	t = a; a = b; b = t;
	return;
}

void swap(int*a,int *b)
{
	int t;
	t = *a; *a = *b; *b = t;
}