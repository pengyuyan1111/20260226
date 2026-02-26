#include <stdio.h>
int main02()
{
	/*用debug调试观察变量信息 总结：字符数组与字符指针对字符串处理的区别*/
	 char str1[] ="Hello";
	 // const char *  字符串常量指针
	 char const *p1 = "Hello";
	 const char *p2="Hello";

	 str1[0]='h';
	 //常量区不能 被 修改
	/* p1[0]='h';
	 p2[0]='h';*/
	 //str1[4] = "world";//数组名是地址常量 不可被修改
	 p1 = "world";//p1 p2是指针变量 可以指向任意字符串
	 p2 = "world";
	 //代码中 务必 把 字符串常量 当 地址看
	 printf("%s\n","how are you"+5);
	 printf("%c\n", "how are you" [5]);
	return 0;
}

 