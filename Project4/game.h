#pragma once
//���ŵĶ���
#define ROW 3
#define COL 3
#include<stdio.h>//ͷ�ļ��İ���
#include<stdlib.h>
#include<time.h>


//����������

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void DisplayBoard(char board[ROW][COL],int row,int col);

//�������
void PlayerMove(char board[][COL], int row, int col);

//��������
void ComputerMove(char board[ROW][COL],int row, int col);

//�ж��Ƿ�Ӯ����Ϸ
//1.���Ӯ�ˡ�*��
//2.����Ӯ�ˡ�#��
//3.ƽ�֡�Q��
//4.��Ϸ������C"
char IsWin(char board[ROW][COL], int row, int col);