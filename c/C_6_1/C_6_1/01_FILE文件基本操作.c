#include<stdio.h>
#include<stdlib.h>
 
int main01()
{    
	//1 查看文件帮助文档 了解参数

	//2 用r只读模式打开文件流 
	//FILE* readFile = fopen("d:\\myfile\\bbb.txt","rb"); 
	//
	//if (readFile!=NULL)//如果文件打开成功
	//{
	//	 
	//	puts("cheng");
	//	fclose(readFile);//关闭文件流。
	//	readFile=NULL;//释放文件指针。
	//}
	//else
	//{
	//	printf("文件不存在\n");
	//}
	// 
	//3 用w只写模式 打开并创建文件
	/*FILE* p=fopen("d:/myfile/黑名单.txt","wt");
	if (p!=NULL)
	{
		puts("创建 成功");
		fclose(p);
		p = NULL;
	}
	else
	{
		puts("文件创建失败");
	}*/
	 
	//4 给文件改名：已有名字，新的名字
	//int r = rename("d:/myfile/黑名单.txt", "d:/myfile/白名单.txt");
	
	//5 删除文件：
	/*int r = remove("d:/myfile/白名单.txt");
	puts(r == 0 ? "成功" : "失败");*/
	return 0;
}