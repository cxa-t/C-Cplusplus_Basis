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
	w += 1;                  // ��β��ո�Ҳ�Խ���

	printf("------ɨ����Ϸ------\n");

	/* �к��� */
	printf("%*s", w, "");               // �к�ռλ
	for (j = 1; j <= col; ++j)
		printf("%-*d", w, j);           // ����룬ռ�� w λ�����ո�
	puts("");

	/* ������ */
	for (i = 1; i <= row; ++i)
	{
		printf("%-*d", w, i);           // �к������
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

static void ExpandRec(char mine[ROWS][COLS],char show[ROWS][COLS],int x, int y,int row, int col,int* win)   /* �����ѽҿ������� */
{
	if (x < 1 || x > row || y < 1 || y > col) 
		return;   // �߽�
	if (show[x][y] != '*') 
		return;                      // �ѽҿ�/�ѱ��

	int c = GetMineCount(mine, x, y);
	show[x][y] = c + '0';
	(*win)++;                                           // ÿ�ҿ� 1 ��ͼ�

	if (c == 0)                                         // �հײż��� 8 ����
	{
		for (int dx = -1; dx <= 1; dx++)
			for (int dy = -1; dy <= 1; dy++)
				if (dx != 0 || dy != 0)                 // ��������
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
		printf("������Ҫ�Ų������ (����: 3 4): ");
		scanf("%d %d", &x, &y);

		// �ж�������Ч��
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] == '@')
			{
				printf("��λ���ѱ����Ϊ�ף��Ƿ�ȡ����ǣ�(y/n): ");
				scanf(" %c", &op);
				if (op == 'y' || op == 'Y')
				{
					show[x][y] = '*';
					system("cls");  // Windows ����
					DisplayBoard(show, ROW, COL);
				}
				continue;
			}

			if (show[x][y] != '*')
			{
				printf("��λ���Ѿ��Ų���ˣ����������롣\n");
				continue;
			}

			printf("�Ƿ��Ǹ�λ��Ϊ�ף�(y/n): ");
			scanf(" %c", &op);
			if (op == 'y' || op == 'Y')
			{
				show[x][y] = '@';
				system("cls");  // Windows ����
				DisplayBoard(show, ROW, COL);
				continue;
			}

			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը���ˣ�3 ������½���ѡ��...\n");
				DisplayBoard(mine, ROW, COL);
				Sleep(3000);          // ��λ����
				system("cls");  // Windows ����
				break;
			}
			else
			{
				int add = 0;
				ExpandRec(mine, show, x, y, row, col, &add);
				win += add;
				system("cls");  // Windows ����
				DisplayBoard(show, ROW, COL);
			}
		}
		else
			printf("����Ƿ������������롣\n");
	}

	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ���\n");
		DisplayBoard(mine, ROW, COL);
	}
}

