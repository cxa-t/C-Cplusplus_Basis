#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//struct Book
//{
//	char name[20];
//	char author[20];
//	float price;
//	char id[13];
//	//...
//}b3, b4;//ȫ�ֱ���
//
//struct Book b2;//ȫ�ֱ���
//
//int main()
//{
//	struct Book b1;//�ֲ�����
//	struct Book arr[5];//����
//
//	return 0;
//}


//�����ṹ������
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//	struct S s;
//	return 0;
//}
//


//struct 
//{
//	char c;
//	int i;
//	double d;
//} s = {'x', 100, 3.14};
//
//int main()
//{
//	printf("%c %d %lf\n", s.c, s.i, s.d);
//
//	return 0;
//}


//struct
//{
//	char c;
//	int i;
//	double d;
//}s;
//
//struct
//{
//	char c;
//	int i;
//	double d;
//}* ps;
//
//int main()
//{
//	ps = &s;
//	return 0;
//}

//typedef struct
//{
//	char c;
//	int i;
//	double d;
//}S;
//
//int main()
//{
//	S s;
//	return 0;
//}
//



//typedef struct Node
//{
//	int data;//����
//	struct Node* next;//ָ��
//}Node;

//struct Node
//{
//	int data;//����
//	struct Node* next;//ָ��
//};
//
//typedef struct Node Node;


//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;

//�����Ľṹ�������ǲ���ʵ�����ֽṹ�������õ�Ч����
//int main()
//{
//	struct Node n1;
//	Node n2;
//
//	return 0;
//}

//struct S
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};
//
//int main()
//{
//	struct S s = { 0 };
//	printf("%zd\n", sizeof(s));//?
//
//	return 0;
//}

//enum Color
//{
//	//��ԭɫ�Ŀ���ȡֵ - ö�ٳ���
//	RED,
//	GREEN=5,//
//	BLUE//
//};
//
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	//enum Color color = RED;
//	//RED = 5;//err
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);
//	enum Sex s = SECRET;
//
//	return 0;
//}

//enum Sex
//{
//	MALE,//0
//	FEMALE,//1
//	SECRET//2
//};
//
//int main()
//{
//	enum Sex s = MALE;
//
//	return 0;
//}

//#define MALE 0
//#define FEMALE 1
//#define SECRET 2
//
//int main()
//{
//	int sex = MALE;
//	return 0;
//}

void menu()
{
	printf("**************************\n");
	printf("****  1. add    2.sub ****\n");
	printf("****  3. mul    4.div ****\n");
	printf("****  0. exit         ****\n");
	printf("**************************\n");
}

enum Option
{
	EXIT,//0
	ADD,//1
	SUB,//2
	MUL,//3
	DIV//4
};

int main()
{
	int input = 0;
	printf("��ѡ��:>");
	scanf("%d", &input);
	switch (input)
	{
	case ADD:
		break;
	case DIV:
		break;
	case MUL :
		break;
	case SUB:
		break;
	case EXIT:
		break;
	default:
		break;
	}
	return 0;
}

