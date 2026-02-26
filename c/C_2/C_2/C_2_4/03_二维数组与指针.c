#include <stdio.h>
int main03()
{
	/* 0.二维数组在内存中的存储形态 */
	int arr[3][4] = { {1,2,3,4},
					  {5,6,7,8},
					  {9,10,11,12 } };
	/* 1.用int指针遍历数组元素,证明二维数组在内存中是连续的 */
	/* int* p = &arr[0][0];
	for (int i=0 ;i<12 ;i++ )
	{
		printf("%d %d\n",p,*p);
		p++;
	}*/
	/* 2.数组名的用法*/
	//	//A：找到 某行的首  地址
	//printf("%d %d %d\n",arr,arr+1,arr+2);
	//	//B：得到 某行的存储空间
	//printf("%d %d %d\n", sizeof(*arr),sizeof( *(arr + 1) ),sizeof (*(arr + 2)));
	//printf("%d %d %d\n", sizeof(  arr [0] ), sizeof(  arr[1]  ), sizeof(  arr [ 2] ));
	////如下打印：本行空间内 第0列子空间的地址
	//printf("%d %d %d\n", *arr+0, *(arr + 1)+0, *(arr + 2)+0);
	//	//C：找到某行内--某列的地址
	//printf("%d %d %d\n", *(arr + 1) + 0, *(arr + 1) + 1, *(arr + 1) + 2);
	//	//D：得到某行 某列的存储空间
	//printf("%d %d %d\n", *(*(arr + 1) + 0), *(*(arr + 1) + 1),* (*(arr + 1) + 2));//分析指针表达值用
	//printf("%d %d %d\n", *(  arr[1]  + 0), *( arr[1]  + 1), *( arr [ 1 ] + 2));
	//printf("%d %d %d\n",  arr[1][0] ,  arr[1][1] ,  arr[1][2] );//开发项目用
	//	//E：跨度整个二维数组 
	//printf("%d %d\n",&arr,&arr+1);
	 
	/*3 . 利用指向一维数组的指针 遍历每一行的首地址*/
	//int(*ph)[4] = &arr;
	//for (int h=0 ;h<3 ;h++ )
	//{
	////	printf("%d\n",ph);
	//	/*4 . 利用指向一维数组的指针 遍历每一行 每一个元素成员*/
	//	printf("%d %d %d %d\n",**ph, (*ph)[1], *(*ph+2), (*ph)[3]);//*ph[3] 相当于*(*(ph+3)+0)
	//	ph++;
	//}
	/*5 . 利用指向二维数组的指针 遍历每一行 每一个元素成员*/
	int(*pm)[3][4] = &arr;
	 
	for (int h=0 ;h<3 ;h++ )
	{
		for ( int k=0; k<4; k++)
		{ 
			printf("%d %d %d %d\n",arr[h][k],*(*(arr+h) +k), (*pm)[h][k], *(*(*pm+h)+k)  );
		}
	}
	return 0;
}