#include <stdio.h>
//void addarr(int arr[], int len);
void prints(char str[]);
int main01  ()
{
	/*字符显示的原理*/
	/*字符数组 与 \0*/
	char arr[5] = {'A',65,'\101','\x41','\0'};
	printf("%s\n",arr);//String 字符串
	/*字符串: 从一个地址出发 到第一个\0之间的字符称为：有效字符串*/
	char str[20] = "hello world";
	printf("%s\n",str);
	/* 仿真 %s 封装函数 */
	prints(arr);
	prints(str);
	return 0;
}
//  %c
void prints(char str[])
{
	 //1下标方式
	/*for (int i=0 ;str[i]!='\0';i++)
	{
		printf("%c",str[i]);
	}*/
	//2指针方式-推荐
	char* p = str;
	while (  *p!='\0')
	{
		printf("%c",*p);
		p++;
	}
	printf("\n");
}