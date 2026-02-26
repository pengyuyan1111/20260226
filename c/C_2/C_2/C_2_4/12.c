#include <stdio.h>
int main()
{

    int arr[2][3][4] = { 1,2,3,4,5,6,7,8 };
    int(*pm)[3][4] = arr;  // 指向第0面（3×4的二维表格）
    for (int i = 0; i < 2; i++)
    {  // 面
        for (int j = 0; j < 3; j++)
        {  // 行
            for (int k = 0; k < 4; k++)
            {  // 列
                printf("%d ", pm[i][j][k]);  // 访问第i面第j行第k列
            }
        }
    }
    return 0;

}