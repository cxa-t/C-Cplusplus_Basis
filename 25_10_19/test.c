#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void menu(void)
{
	printf("***********************************\n");
	printf("*********   1. play   *************\n");
	printf("*********   0. exit   *************\n");
	printf("***********************************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };

	//初始化棋盘函数
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);

	//开始下棋
	while (1)
	{
		PlayerMove(board, ROW, COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		DisplayBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);

		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		DisplayBoard(board, ROW, COL);
	}
	//判断输赢
	if (ret == '*')
		printf("玩家赢！！！\n");
	else if (ret == '#')
		printf("电脑赢！！！\n");
	else
		printf("平局！！！\n");
	DisplayBoard(board, ROW, COL);

}

int main()
{
	srand((unsigned int)time(NULL));//设置随机数生成起点。
	int choice = 0;
	do
	{
		menu();
		printf("请选择(0/1):>");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			//printf("注意！1秒后清屏进入游戏！！！\n");
			//Sleep(1000);
			//system("cls");
			game();
			//printf("1111111\n");
			break;
		case 0:
			break;
		default:
			printf("选择错误，请重新选择(0/1):>\n");
			break;
		}
	} while (choice);
	return 0;
}
