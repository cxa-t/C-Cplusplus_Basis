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

	//��ʼ�����̺���
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);

	//��ʼ����
	while (1)
	{
		PlayerMove(board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		DisplayBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);

		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		DisplayBoard(board, ROW, COL);
	}
	//�ж���Ӯ
	if (ret == '*')
		printf("���Ӯ������\n");
	else if (ret == '#')
		printf("����Ӯ������\n");
	else
		printf("ƽ�֣�����\n");
	DisplayBoard(board, ROW, COL);

}

int main()
{
	srand((unsigned int)time(NULL));//���������������㡣
	int choice = 0;
	do
	{
		menu();
		printf("��ѡ��(0/1):>");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			//printf("ע�⣡1�������������Ϸ������\n");
			//Sleep(1000);
			//system("cls");
			game();
			//printf("1111111\n");
			break;
		case 0:
			break;
		default:
			printf("ѡ�����������ѡ��(0/1):>\n");
			break;
		}
	} while (choice);
	return 0;
}
