#pragma once

#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//��ʼ������
void c(char board[ROW][COL], int row, int col);

//��ӡ����
void p(char board[ROW][COL], int row, int col);

//�������
void PM(char board[ROW][COL], int row, int col);

//��������
void CM(char board[ROW][COL], int row, int col);

//�ж���Ӯƽ��
char IW(char board[ROW][COL], int row, int col);