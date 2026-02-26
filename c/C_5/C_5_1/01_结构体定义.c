#include <stdio.h>
int main01  ()
{
	/*定义一个结构体
	 
	//*创建结构体变量*/
	//复习枚举的用法
	typedef enum yxzj {SFZ,JSZ,XSZ} CARD_TYPE;

	struct stu_info
	{
		int stuNum;
		CARD_TYPE  cardType;
		char cardNum[20];
		char stuName[30];
		char sex;
	}   s1,s2 ;

	/*创建结构体变量并赋初值*/
	//int a, b=3, c;//创建**  赋初始值**
	//scanf_s("%d",&a);//键盘赋值**
	//printf("%d\n",b);//读取 值
	struct stu_info s3 = {3,SFZ,"230102355255","ZHANGSAN",'M'},
					s4 = { .stuName="XIAOHONG",.sex='W',.cardType=SFZ };
	/*存取结构体成员值 用.操作符*/
	scanf_s("%d%d%s%s %c",&s1.stuNum,&s1.cardType
						,s1.cardNum,20
						,s1.stuName,30
						,&s1.sex,1);

	return 0;
}