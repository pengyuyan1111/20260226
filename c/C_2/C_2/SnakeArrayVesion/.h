#pragma once
#include<graphics.h>
//全局变量   声明
//extern 外部的 此变量的定义来自外部
//本处只是 借用
//外部链接声明
//没有初始值 可以是声明 声明可以无数次
extern int appleLie  ;//苹果所在列
extern int appleHang ;//苹果所在行
//extern IMAGE imgApple;
//函数 声明
/*生新苹果*/
void newApple(void );

/*初始化苹果*/
void initApple();
/*显示苹果*/
void showApple();