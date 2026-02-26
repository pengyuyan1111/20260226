#include <stdio.h>
int main02()
{
	/* 二维数组 在 声明的同时 直接初始化赋值  */

	/* 1  完全初始化：形式1：一维摸样 形式2：{}行方式  */
	int arr1[2][3] = {1,3,7,8,9,2,};
	int arr2[2][3] = { {1,3,7},
					   {8,9,2} };
	/* 2 不完全初始化、其它成员默认 0     */
	int arr3[2][3] = { 1,3  };
	int arr4[2][3] = { {1 },
					   {8,9 } };
	/* 3 初始化成员个数 列数不能省略,根据列数自动决定行数。  */
	int arr5[ ][3 ] = { {1,3,7},
					   {8,9,2} };
	/*4 循环遍历 每个成员 */
	int hang = sizeof(arr1) / sizeof(arr1[0]);
	int lie = sizeof(arr1[0]) / sizeof(arr1[0][0]);
	for (int i = 0; i < hang; i++) {
		for (int j =0;j<lie;j++) {
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	 
	return 0;
}