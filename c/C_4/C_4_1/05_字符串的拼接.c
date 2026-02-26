#include <stdio.h>
#include <string.h>
char* my_strcat(char* dest, const char* src);
int main05 ()
{
	/*字符串尾部拼接函数*/ 
	char a[50]="hello ";
	char *p="hi ";//大多数语言：拼接  "hello "+"hi "  "hello hi "
	/*strcat*/
	my_strcat(a, p);
	printf("%s\n",a);
	printf("%s\n", my_strcat(a,"you"));
	/*strcat_s*/
	//printf("%d\n", strcat_s(a, 50, "are"));
	//printf("%s\n", a);
	///*strncat*/
	//printf("%s\n", strncat(a,"how do you do",3));
	/*strncat_s*/

	/*仿真字符串拼接函数 strcat  strcat_s */
	 
	return 0;
}
char* my_strcat(char* dest, const char* src)
{
	//方法1
	//1找 尾部\0
	//char* p = dest;
	//while ( *p!='\0')
	//{
	//	p++;
	//}
	////2 把src的字符串 复制 到尾部
	//const char* q = src;
	//while ( *q!='\0')
	//{
	//	*p++ = *q++;
	//}
	//*p = '\0';
	//return dest;
	//方法2——使用既有函数
	//1找 尾部\0                    "abc"  strlen--> 3  \0的下标是3
	char* p = dest + strlen(dest);
	//2 把src的字符串 复制 到尾部
	strcpy(p , src);
	return dest;
}