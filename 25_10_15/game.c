#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char arr[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = set;
		}
	}
}

void DisplayBoard(char arr[ROWS][COLS], int row, int col)
{
	int i, j;
	int w = 1;
	for (int t = col; t >= 10; t /= 10) ++w;
	w += 1;                  // 把尾随空格也吃进来

	printf("------扫雷游戏------\n");

	/* 列号行 */
	printf("%*s", w, "");               // 行号占位
	for (j = 1; j <= col; ++j)
		printf("%-*d", w, j);           // 左对齐，占满 w 位（含空格）
	puts("");

	/* 数据行 */
	for (i = 1; i <= row; ++i)
	{
		printf("%-*d", w, i);           // 行号左对齐
		for (j = 1; j <= col; ++j)
			printf("%-*c", w, arr[i][j]);
		puts("");
	}
}

void SetMine(char arr[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count--;
		}
	}
}

static int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	int i = 0;
	int count = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		int j = 0;
		for (j = y - 1; j <= y + 1; j++)
			count += (mine[i][j] - '0');
	}
	return count;
}

static void ExpandRec(char mine[ROWS][COLS],char show[ROWS][COLS],int x, int y,int row, int col,int* win)   /* 传出已揭开格子数 */
{
	if (x < 1 || x > row || y < 1 || y > col) 
		return;   // 边界
	if (show[x][y] != '*') 
		return;                      // 已揭开/已标记

	int c = GetMineCount(mine, x, y);
	show[x][y] = c + '0';
	(*win)++;                                           // 每揭开 1 格就加

	if (c == 0)                                         // 空白才继续 8 方向
	{
		for (int dx = -1; dx <= 1; dx++)
			for (int dy = -1; dy <= 1; dy++)
				if (dx != 0 || dy != 0)                 // 跳过自身
					ExpandRec(mine, show, x + dx, y + dy, row, col, win);
	}
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	char op;

	while (win < row * col - EASY_COUNT)
	{
		printf("请输入要排查的坐标 (例如: 3 4): ");
		scanf("%d %d", &x, &y);

		// 判断坐标有效性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] == '@')
			{
				printf("该位置已被标记为雷，是否取消标记？(y/n): ");
				scanf(" %c", &op);
				if (op == 'y' || op == 'Y')
				{
					show[x][y] = '*';
					system("cls");  // Windows 清屏
					DisplayBoard(show, ROW, COL);
				}
				continue;
			}

			if (show[x][y] != '*')
			{
				printf("该位置已经排查过了，请重新输入。\n");
				continue;
			}

			printf("是否标记该位置为雷？(y/n): ");
			scanf(" %c", &op);
			if (op == 'y' || op == 'Y')
			{
				show[x][y] = '@';
				system("cls");  // Windows 清屏
				DisplayBoard(show, ROW, COL);
				continue;
			}

			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了，3 秒后重新进行选择...\n");
				DisplayBoard(mine, ROW, COL);
				Sleep(3000);          // 单位：秒
				system("cls");  // Windows 清屏
				break;
			}
			else
			{
				int add = 0;
				ExpandRec(mine, show, x, y, row, col, &add);
				win += add;
				system("cls");  // Windows 清屏
				DisplayBoard(show, ROW, COL);
			}
		}
		else
			printf("坐标非法，请重新输入。\n");
	}

	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功！\n");
		DisplayBoard(mine, ROW, COL);
	}
}

