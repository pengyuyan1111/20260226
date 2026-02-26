#include <stdio.h>
#include <string.h>

int main04   ()
{
	FILE * writeFile=fopen("d:\\myfile\\data.txt","wb");
	//1 存储一个整型变量
	int n = -1;
	int m = 0x41424244;
	fwrite(&n, sizeof(int), 1, writeFile);
	fwrite(&m, sizeof(int), 1, writeFile);
	//2 存储一个数组
	int arr[] = {97,98,65,10,66,48,49};
	fwrite(arr, sizeof(int), 7, writeFile);
	//3 存储一个字符串
	  
	//4 存储一个结构体
	 
	fclose(writeFile);
	return 0;
}