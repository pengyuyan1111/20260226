#include <stdio.h>
int main01()
{
	/*  */

	/*0 数组的特性：长度固定 、 同类型、 有编号（先行后列），逻辑造型：表格矩阵状  */

	/* 1 二维数组声明生成： 类型 数组名[行数][列数]  */
	int a=4;//点
	int as[5] = { 1,2,3, }; //线
	int ge[8][10] = {0};	//面
	/* 2 二维数组 内存原理*/

	/* 3 数组元素（成员）的使用：数组名[先行][后列]  */
	ge[0][0] = 1;
	ge[0][4] = 2;
	ge[3][0] =3 ;
	ge[3][4] = 4;
	/* 4 注意事项：不要下标越界使用。  */
	/* 5 循环遍历 每个成员 */
	//计算二维的行数 列数
	printf("整体 空间大小：%d \n",sizeof(ge));
	printf("0行 空间大小%d \n", sizeof(ge[0]));
	int hs = sizeof(ge) / sizeof(ge[0]);
	int ks = sizeof(ge[0]) / sizeof(int);
	for (int h=0 ;h<hs ;h++ )
	{
		for (int k=0 ; k<ks;k++ )
		{
			printf("%d ",ge[h][k]);
		}
		printf("\n");
	}
	return 0;
}