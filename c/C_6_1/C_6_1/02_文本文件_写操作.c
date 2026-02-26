#include<stdio.h>
#include<stdlib.h>
 
int main02 ()
{	 
	//1 覆盖重写模式 wt
	//FILE* pf = fopen("d:\\myfile\\ddd.txt", "wt");
	//2 打开追加模式 at
	FILE* pf=fopen("d:\\myfile\\ddd.txt", "at");
	if (pf!=NULL)
	{
		//能向  屏幕 打印  
		printf("北京时间 %02d:%02d %s %.2f\n",9,51,"hello world",3.14159);
		putchar('A');
		puts("how are you");

		//就能 向 文件 中 打印
		fprintf(pf, "北京时间 %02d:%02d %s %.2f\n", 9, 51, "hello world", 3.14159);
		fputc('A', pf);
		fputs("how are you",pf);
		//stdin 键盘  stdout屏幕
		fprintf(stdout, "北京时间 %02d:%02d %s %.2f\n", 9, 51, "hello world", 3.14159);
		fputc('A', stdout);
		fputs("how are you", stdout);

		fclose(pf);
		pf = NULL;
	}



	//3 读写混合方式
	return 0;
}