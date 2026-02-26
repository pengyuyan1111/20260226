#include <stdio.h>
#include <string.h>
#include <math.h>
int my_strcmp(const char* str1, const char* str2);
 int main06 ()
{
	/*字符串比较函数*/ 
	
	/*strcmp 不忽略大小字母*/
	 printf("%d\n", my_strcmp("ABCD","abcd"));
	 printf("%d\n", my_strcmp("e", "abcd"));
	 printf("%d\n", my_strcmp("ABCD", "ABCD"));
	 /*忽略大小字母的比较 stricmp不是标准库函数 */
	 printf("%d\n", stricmp("ABCD", "abcd"));
	/*仿真字符串比较函数 strcmp */
	return 0;
}

 int my_strcmp(const char* str1, const char* str2)
 {
	 const char* p = str1;
	 const char* q = str2;
	 while (  *p == *q && *p!='\0')
	 {
		 p++;
		 q++;
	 }
	// return *p-*q;
	 int r = *p - *q;
	 return r == 0 ? 0 : r / abs(r);
 }
