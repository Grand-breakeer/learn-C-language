#pragma once

#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//初始化棋盘
void c(char board[ROW][COL], int row, int col);

//打印棋盘
void p(char board[ROW][COL], int row, int col);

//玩家下棋
void PM(char board[ROW][COL], int row, int col);

//电脑下棋
void CM(char board[ROW][COL], int row, int col);

//判断输赢平局
char IW(char board[ROW][COL], int row, int col);