#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<conio.h>//控制台输入输出
int main09  ()
{
	 
	char c;
	char a[300];
	/* 输入一个字符*/
	/*scanf("%c",&c);
	scanf_s("%c",&c,1);*/
	//c = getchar();//输入一个字符 需要用换行 确认 而且换行符\n也在键盘缓冲区
	//putchar(c);
	//c=getchar();
	//c = _getch();// 输入一个字符被立即读取，不需要换行确认。而且屏幕不显示输入的内容
	//putchar(c);
	//c=_getche();// 输入一个字符被立即读取，不需要换行确认。而且屏幕会显示输入的内容
	//putchar(c);
	/*输入字符串*/
	/*scanf("%s",a);
	scanf_s("%s",a,300);*/
	//gets(a);//能用 但不建议了
	//gets_s(a, 300);
	fgets(a,300,stdin);//从键盘读取缓冲区所有内容（包括\n输入结束标记）
	//去掉\n   strlen("abcd") -->字符串长度是4 ，4也是\0的下标
	a[strlen(a)-1] = '\0';
	puts(a);
	return 0;
}