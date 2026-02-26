#include <stdio.h>
#include <string.h>
size_t my_strlen(const char* str);
int main03  ()
{
	/* 如何得到字符串的长度 */
	 char str1[] ="Hello";
	 char *p1 = "Hello";
	 char *p2="Hello";
	 //会用函数strlen
	 printf("字符数组长度 %d | 字符串长度%d\n",sizeof(str1),strlen(str1+3));
	/*仿真 strlen */
	 printf("%d\n", my_strlen(str1 + 3));
	return 0;
}

size_t my_strlen(const char* str)
{
	//1方法
	//int count = 0;
	//const char* p = str;
	//while (  *p!='\0')
	//{
	//	count++;
	//	p++;
	//} 
	//return count;
	//2 方法
	const char* p = str;
	while (*p)
	{
		p++;
	}
	return p- str;//地址特点：连续 小号~大号  地址差即长度
}