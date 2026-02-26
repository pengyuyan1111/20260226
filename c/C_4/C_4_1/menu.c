#include<stdio.h>

int mainmenu() {
	//显示菜单
	puts("***菜单***");
	puts("*a*增加***"); 
	puts("*u*修改***"); 
	puts("*d*删除***");
	puts("*s*查找***"); 
	puts("*q*退出***");
	//相应菜单
	char menuID;
	do {
		puts("请输入：");
		menuID=_getche();
		switch (menuID) {
		case 'a':
		case 'A':
			puts("增加");
			break;
		case 'u':
		case 'U':
			puts("修改");
			break;
		case 'd':
		case 'D':
			puts("删除");
			break;
		case 's':
		case 'S':
			puts("查找");
			break;

		}
	} while (!(menuID=='q'||menuID=="Q"));
	puts("byebye");
	return 0;
}