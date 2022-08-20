#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	char board[ROW][COL];
	c(board, ROW, COL);
	p(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		PM(board, ROW, COL);
		p(board, ROW, COL);
		ret=IW(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		CM(board, ROW, COL);
		p(board, ROW, COL);
		ret=IW(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}
}


void menu()
{
	printf("*********************************\n");
	printf("**************1.piay*************\n");
	printf("**************0.quit*************\n");
	printf("*********************************\n");
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误，请重新选择\n");
				break;
		}
	} while (input);
	return 0;
}