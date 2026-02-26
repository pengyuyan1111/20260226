#include<stdio.h>
int main03 ()
{
	//1 读取若干个整数
	//FILE* pf = fopen("d:\\myfile\\cjd.txt", "rt");
	//if (pf != NULL)
	//{
	//	int n;
	//	//scanf("%d",&n);//从键盘读取到键盘缓冲区·再按格式读取
	//	//循环读取
	//	while ( !feof(pf)&& fscanf(pf, "%d,", &n)>=1)//!feof(pf) 不是在文件的尾部
	//	{
	//	//	fscanf(pf, "%d,", &n);//scanf返回值：成功存入到变量的 数量 scanf("%d%d",&a,&b);
	//		printf("%d\n", n);
	//	}
	//	

	//	fclose(pf);
	//	pf = NULL;
	//}
	//2 读取若干行文字
	 
	FILE* pf = fopen("d:\\myfile\\bbb.txt", "rt");
	if (pf != NULL)
	{
		char str[30];
		while (  !feof(pf)&& fscanf(pf,"%s",str)>0)
		{
			puts(str);
		}


		fclose(pf);
		pf = NULL;
	}
	return 0;
}