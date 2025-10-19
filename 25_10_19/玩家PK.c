#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>

#define ROW 10  //���̳�
#define COL 10  //���̿��
#define N 5    //��ʤ����������ַ���

void InitBoard(char board[ROW][COL], int row, int col);
void PrintBoard(char board[ROW][COL], int row, int col);
void Play1Board(char board[ROW][COL], int row, int col);
void Play2Board(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);
int IsWin(char board[ROW][COL], int row, int col);

//N������Ϸ
void menu(void)
{
	printf("********************************\n");
	printf("*******    1.  play      *******\n");
	printf("*******    0.  exit      *******\n");
	printf("********************************\n");
}

//N������Ϸ�߼�
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	PrintBoard(board, ROW, COL);

	while (1)
	{
		//��ʼ����
		Play1Board(board, ROW, COL);

		//�ж���Ӯ
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
	//�ж���Ӯ
	if (ret == 'F')
		printf("���1Ӯ����������2������½���˵�ѡ��\n");
	else if (ret == 'S')
		printf("���2Ӯ����������2������½���˵�ѡ��\n");
	else
		printf("ƽ�֣���������2������½���˵�ѡ��\n");
	Sleep(2000);
	system("cls");
	//PrintBoard(board, ROW, COL);
}

// ���̳�ʼ��
void InitBoard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			board[i][j] = ' ';

}

// ��ӡ����
void PrintBoard(char board[ROW][COL], int row, int col)
{
	//��ӡ�ָ�
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

		//��ӡ�ָ���Ϣ��
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

// ���1����
void Play1Board(char board[ROW][COL], int row, int col)
{
	printf("���1��������������:>");
	int x = 0;
	int y = 0;
	while (1)
	{
		scanf("%d %d", &x, &y);
		//����Ϸ����ж�
		if (x - 1 >= 0 && x <= row && y - 1 >= 0 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'X';
				break;
			}
			else
				printf("�����Ѿ���ռ�ã�����������:>");
		}
		else
			printf("����Ƿ�������������:>");
	}
}

// ���2����
void Play2Board(char board[ROW][COL], int row, int col)
{
	printf("���2��������������:>");
	int x = 0;
	int y = 0;
	while (1)
	{
		scanf("%d %d", &x, &y);
		//����Ϸ����ж�
		if (x - 1 >= 0 && x <= row && y - 1 >= 0 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '#';
				break;
			}
			else
				printf("�����Ѿ���ռ�ã�����������:>");
		}
		else
			printf("����Ƿ�������������:>");
	}
}

// �ж������Ƿ��п�λ
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

// �ж��Ƿ����˻�ʤ
int IsWin(char board[ROW][COL], int row, int col)
{
	// �����
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

	// �����
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

	// ���Խ���
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

	// ��鷴�Խ���
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

	// �ж��Ƿ�ƽ��
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
		printf("��ѡ��:>");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("ѡ�����������ѡ��!!!\n");
			break;
		}
	} while (choice);
	return 0;
}


