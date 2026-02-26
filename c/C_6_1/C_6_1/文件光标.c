#include<stdio.h>
int maingb()
{
					//文件的读 写混合
	FILE* pf = fopen("D:\\myfile\\zm.txt", "r+t");
	if (pf != NULL)
	{
		//向下移动
		printf("位置：%ld\n", ftell(pf));
		fgetc(pf);
		printf("位置：%ld\n", ftell(pf));
		char str[10]; 
		fscanf(pf,"%5s",str);
		printf("位置：%ld\n", ftell(pf));
		//回到开头
		rewind(pf);
		fscanf(pf, "%5s", str);
		printf("位置：%ld\n", ftell(pf));
		//任意位置
		fpos_t wz;
		fgetpos(pf, &wz);//读取当前光标位置
		printf("位 置：%lld\n",wz);
		wz += 5;
		fsetpos(pf, &wz);//设置光标位置
		fscanf(pf, "%5s", str);
		printf("位置：%ld\n", ftell(pf));
		 
		//改写 当前位置的数据
		//改写前 重新定位修改位置
		fseek(pf, 0, SEEK_CUR);
		fputc('8', pf);
		fseek(pf, 3, SEEK_SET);
		fputs("123456", pf);
		fclose(pf);
		pf = NULL;
	}


	return 0;
}