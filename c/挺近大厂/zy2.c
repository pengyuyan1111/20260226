#include<stdio.h>
#include<string.h>
int main()
{
	////996
	////创建 变量
	//int  money = 996;
	////模板思维=固定+可变
	//printf("100元需要%d张\n",money /100);//整除
	//money %= 100;
	////printf("100元需要%f张\n", 368. / 100);//带小数的商
	//printf("50元需要%i张\n", money /50);//%取余数
	//money %= 50;
	//printf("20元需要%i张\n", money /20  );

	char a[10] = "ab\0cde";
	printf("%s\n",a);
	printf("%d\n", strlen(a));
	return 0;
}