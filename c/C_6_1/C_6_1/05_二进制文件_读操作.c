#include <stdio.h>
#include <stdlib.h>
typedef struct 
{
	char a;
	double b ;
	int c;
} AAA;
int main05   ()
{
	FILE * readFile=fopen("d:\\myfile\\data.txt","rb");
	//1 读取一个整型变量
	int a;
	fread(&a,sizeof(int),1, readFile);
	printf("%d\n",a);
	//2 读取一个数组
	int arr[30];
	int len=fread(arr, sizeof(int), 30, readFile);
	for (int i=0;i<len;i++)
	{
		printf("%d\n", arr[i]);
	}
	//3 读取一个字符串
	
	//4 读取一个结构体
	
	fclose(readFile);
	return 0;
}