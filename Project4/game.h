#pragma once
//符号的定义
#define ROW 3
#define COL 3
#include<stdio.h>//头文件的包含


//函数的声明

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘

void DisplayBoard(char board[ROW][COL],int row,int col);