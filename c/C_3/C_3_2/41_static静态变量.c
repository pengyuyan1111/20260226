#include <stdio.h>
void fun41()
{
	static int c;//静态 局部 变量
	int i;//非 静态 局部 变量
	i=10;
	i++;
	c++;
	
	printf("c=%d,i=%d\n",c,i);
}
int main41 ()
{
	/*static 理解为局部内的 唯一变量 相当于全局，但全局不可访问  */
	//fun41();
	//fun41();
	//fun41();
	//fun41();
	//extern int age;
	/*int getAge();
	printf("%d\n",getAge());*/
	return 0;
}
