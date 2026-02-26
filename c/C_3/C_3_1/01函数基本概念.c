#include <stdio.h>
void 判断结婚(int sex, int age);
int main01()
{
	/*重构基本思想*/
	/*函数的意义：对流程结构的封装*/
	int age = 18;
	int sex = 1;//在C语言中 非0的数字（比如1）代表逻辑‘真’ 0代表逻辑‘假’
			  //此例中：1 代表男  0 代表女	
	判断结婚(sex, age);//函数的调用

	/*函数的基本结构*/



 

	return 0;
}

void 判断结婚(int sex, int age)
{
	if (sex)
	{
		if (age >= 22)
		{
			printf("男的 能\n");
		}
		else
		{
			printf("男的 不能\n");
		}
	}
	else
	{
		if (age >= 20)
		{
			printf("女的 能\n");
		}
		else
		{
			printf("女的 不能\n");
		}
	}
}
