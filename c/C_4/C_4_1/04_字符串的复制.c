#include <stdio.h>
#include <string.h>
char* my_strcpy(char* dest, const char* src);
int main04  ()
{
	/*字符串复制函数*/ 
	char * p="12345";
	char a[20];
	/*strcpy*/
	my_strcpy(a,"hello world");
	printf("%s\n",a);
	printf("%s\n", my_strcpy(a,"money"));
	/*strcpy_s  _s安全函数  C11的标准*/
	//strcpy_s(a,20 , "how are you");
	/*strncpy*/
	//strncpy(a, p, 3);//没有加\0
	
	/*strncpy_s*/
	/*strncpy_s(a, 10, p, 4);
	printf("%s\n", a);*/
	/*仿真字符串复制函数 strcpy   */
	return 0;
}
char* my_strcpy(char* dest, const char* src)
{
	//方法1
	//char* pd = dest;
	//const char* ps = src;
	//while ( *ps!='\0')
	//{
	//	*pd = *ps;
	//	pd++;
	//	ps++;
	//}
	//*pd = '\0';//变成字符串
	//return dest;
	// 方法2——尽量用现有函数解决问题
	memcpy(dest, src,strlen(src)+1);
	//memcpy(dest, src, sizeof(src));
	return dest;
}