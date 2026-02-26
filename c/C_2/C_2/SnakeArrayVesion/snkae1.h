//全集变量声明
extern int FX ;// 0 右    1 上    2 左    3 下
extern int snakeY[100] ;
extern int snakeX[100] ;
extern int snakesize ;
//函数声明#pragma once
void snakeMove(void);

int canEat(void);

void grow(void);

int canOut(void);

int canEatSelf(void);

void turnLeft(void);

void turnRight(void);

void turnUp(void);

void turnDown(void);

void initsnake(void);

void showsnake(void);