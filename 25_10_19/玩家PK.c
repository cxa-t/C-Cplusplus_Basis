#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>

#define ROW 10  //棋盘长
#define COL 10  //棋盘宽度
#define N 5    //获胜所需的连线字符数

void InitBoard(char board[ROW][COL], int row, int col);
void PrintBoard(char board[ROW][COL], int row, int col);
void Play1Board(char board[ROW][COL], int row, int col);
void Play2Board(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);
int IsWin(char board[ROW][COL], int row, int col);

//N子棋游戏
void menu(void)
{
	printf("********************************\n");
	printf("*******    1.  play      *******\n");
	printf("*******    0.  exit      *******\n");
	printf("********************************\n");
}

//N子棋游戏逻辑
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	PrintBoard(board, ROW, COL);

	while (1)
	{
		//开始下棋
		Play1Board(board, ROW, COL);

		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		system("cls");
		PrintBoard(board, ROW, COL);
		Play2Board(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		system("cls");
		PrintBoard(board, ROW, COL);
	}
	//判断输赢
	if (ret == 'F')
		printf("玩家1赢！！！将在2秒后重新进入菜单选择\n");
	else if (ret == 'S')
		printf("玩家2赢！！！将在2秒后重新进入菜单选择\n");
	else
		printf("平局！！！将在2秒后重新进入菜单选择\n");
	Sleep(2000);
	system("cls");
	//PrintBoard(board, ROW, COL);
}

// 棋盘初始化
void InitBoard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			board[i][j] = ' ';

}

// 打印棋盘
void PrintBoard(char board[ROW][COL], int row, int col)
{
	//打印分割
	////printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");

		//打印分割信息。
		//printf("---|---|---\n");
		if (i < row - 1)
		{
			for (int j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

// 玩家1输入
void Play1Board(char board[ROW][COL], int row, int col)
{
	printf("玩家1请输入棋子坐标:>");
	int x = 0;
	int y = 0;
	while (1)
	{
		scanf("%d %d", &x, &y);
		//坐标合法性判断
		if (x - 1 >= 0 && x <= row && y - 1 >= 0 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'X';
				break;
			}
			else
				printf("坐标已经被占用，请重新输入:>");
		}
		else
			printf("坐标非法，请重新输入:>");
	}
}

// 玩家2输入
void Play2Board(char board[ROW][COL], int row, int col)
{
	printf("玩家2请输入棋子坐标:>");
	int x = 0;
	int y = 0;
	while (1)
	{
		scanf("%d %d", &x, &y);
		//坐标合法性判断
		if (x - 1 >= 0 && x <= row && y - 1 >= 0 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '#';
				break;
			}
			else
				printf("坐标已经被占用，请重新输入:>");
		}
		else
			printf("坐标非法，请重新输入:>");
	}
}

// 判断棋盘是否还有空位
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
			if (board[i][j] == ' ')
				return 0;
	return 1;
}

// 判断是否有人获胜
int IsWin(char board[ROW][COL], int row, int col)
{
	// 检查行
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j <= col - N; j++)
		{
			int count = 0;
			char ch = board[i][j];
			for (int k = 0; k < N; k++)
			{
				if (board[i][j + k] == ch && ch != ' ')
					count++;
				else
					break;
			}
			if (count == N)
				return (ch == 'X') ? 'F' : 'S';
		}
	}

	// 检查列
	for (int i = 0; i <= row - N; i++)
	{
		for (int j = 0; j < col; j++)
		{
			int count = 0;
			char ch = board[i][j];
			for (int k = 0; k < N; k++)
			{
				if (board[i + k][j] == ch && ch != ' ')
					count++;
				else
					break;
			}
			if (count == N)
				return (ch == 'X') ? 'F' : 'S';
		}
	}

	// 检查对角线
	for (int i = 0; i <= row - N; i++)
	{
		for (int j = 0; j <= col - N; j++)
		{
			int count = 0;
			char ch = board[i][j];
			for (int k = 0; k < N; k++)
			{
				if (board[i + k][j + k] == ch && ch != ' ')
					count++;
				else
					break;
			}
			if (count == N)
				return (ch == 'X') ? 'F' : 'S';
		}
	}

	// 检查反对角线
	for (int i = 0; i <= row - N; i++)
	{
		for (int j = N - 1; j < col; j++)
		{
			int count = 0;
			char ch = board[i][j];
			for (int k = 0; k < N; k++)
			{
				if (board[i + k][j - k] == ch && ch != ' ')
					count++;
				else
					break;
			}
			if (count == N)
				return (ch == 'X') ? 'F' : 'S';
		}
	}

	// 判断是否平局
	if (IsFull(board, row, col))
		return 'P';

	return 'C';
}

int main()
{
	int choice = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("选择错误，请重新选择!!!\n");
			break;
		}
	} while (choice);
	return 0;
}


