#include <stdio.h>
#include <string.h>
const char* my_strstr(const char* str1, const char* str2);
 int main07 ()
{
	/*字符串匹配函数
		搜索字符串在另一个字符串中首次出现的位置。
	*/
	/*strstr*/
	 const char* p = "how are you";
	 const char* q= my_strstr(p,"are");
	 printf("%c\n",*q);
	 printf("%s\n", q);
	 printf("匹配的下标：%d\n",q-p);
	 printf("%s\n", my_strstr(p, "am"));//匹配不到 返回NULL空指针
	/*仿真字符串匹配函数 strstr */
	return 0;
}

 const char* my_strstr(const char* str1, const char* str2)
 {
	 const char* p = str1;
	 while ( *p!=NULL)
	 {
		 const char* pp = p;
		 const char* q = str2;
		 while ( *pp==*q && *pp!='\0')
		 {
			 pp++;
			 q++;
		 }
		 if (*q=='\0')
		 {
			 return p;
		 }
		 p++;
	 }
	 return NULL;
 }