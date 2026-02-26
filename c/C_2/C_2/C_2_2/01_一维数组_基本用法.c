#include <stdio.h>
int main01()
{
	/*0 数组的特性：长度固定 、 同类型、 连续存储  */

	/* 1 一维数组声明生成： 类型 数组名[长度]  */
	int age = 8;
	int ages[5] ;//int[5] 理解为一种 数据类型
	printf("字节数：%d %d\n",sizeof(int),sizeof(age));
	printf("字节数：%d %d\n", sizeof(int[5]), sizeof(ages));
//	/* 2 数组元素（成员）的使用：[下标]  */
	ages[0] = 1;
	ages[1] = 2;
	ages[2] = 3;
	ages[3] = 4;
	ages[4] = 5;
//	/* 3 注意事项：不要下标越界使用。  */
//	 //ages[50] = 8;
//	/*4 循环  遍历 每个成员 */
//	//int len = sizeof(ages) / sizeof(int);
//	//数组长度最小是 1 要大于0
////	int arr[1];//array英文：数组
//	//不允许用变量当数组长度 :一次性创建足够大  用变量控制实际大小
//	/*int dx = 20;
//	int arr[dx];*/
	int len = sizeof(ages) / sizeof(ages[0]);
	for ( int i=0 ; i<len ;i++  )//index索引·下标
	{
		printf("下标 %d 下标对应值 %d\n",i,ages[i]);
	}

	return 0;
}