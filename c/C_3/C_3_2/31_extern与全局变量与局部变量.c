#include <stdio.h>

extern int i  ;//全局变量：声明可以无数次  
extern int i;
extern int i;
extern int i;
extern int i;
void fun();
int main31 ()
{
	/*局部变量与全局变量的声明*/

	/*变量的作用域与生命周期*/
	printf("%d\n",i);
	fun();
	printf("%d\n",i);
	fun();
	return 0;
}

void fun()
{
	//变量访问的 原则：临近原则——最近的变量起作用，重名的外部变量被屏蔽
	int i=10;
	{
		int i;
		i = 100;
		{
			int i = 8;
			i--;
			printf("i--");
		}
		printf("i 100 ");
	}
	i++;
	printf("i++ %d\n",i);
}