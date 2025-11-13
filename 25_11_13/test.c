#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//    // 1. 定义三个独立且长度不等的一维数组
//    int arr1[] = { 10, 20, 30 };
//    int arr2[] = { 40, 50, 60, 70 }; // 长度可以不同！
//    int arr3[] = { 80, 90, 100 };
//
//    // 2. 定义指针数组 parr，存储这三个数组的首地址
//    int* parr[3] = { arr1, arr2, arr3 };
//    // parr[0] 存储 arr1 的地址
//    // parr[1] 存储 arr2 的地址
//    // parr[2] 存储 arr3 的地址
//    
//    // 3. 通过指针数组访问元素 (例如访问 arr2 中的元素 60)
//    // arr2 的索引是 1，60 在 arr2 中的索引是 2
//    int row = 1;
//    int col = 2;
//
//    printf("目标元素: %d\n", parr[row][col]); // 输出 60
//
//    printf("\n遍历模拟的二维数组：\n");
//    for (int i = 0; i < 3; i++) // 遍历行 (指针数组的元素)
//    {
//        // 关键：parr[i] 就是第 i 个一维数组的首地址
//        int size = (i == 1) ? 4 : 3; // 动态确定每一行的元素个数
//
//        for (int j = 0; j < size; j++) // 遍历列
//        {
//            // parr[i][j] 等价于 *(parr[i] + j) || *(*(parr+i)+j)
//            printf("%d ", parr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//// 形参使用数组指针，明确指出每行有 5 个元素
//void print_2d_array_demo(int (*p)[5], int row, int col)
//{
//    printf("\n通过数组指针访问二维数组:\n");
//    for (int i = 0; i < row; i++)
//    {
//        for (int j = 0; j < col; j++)
//        {
//            // p[i][j] 语法依然生效
//            printf("%d ", p[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//int main()
//{
//    // 定义一个 3 行 5 列的二维数组
//    int arr[3][5] = {
//        {1, 2, 3, 4, 5},
//        {6, 7, 8, 9, 10},
//        {11, 12, 13, 14, 15}
//    };
//
//    // 传参：传递数组名 arr，它的类型是 int (*)[5]
//    print_2d_array_demo(arr, 3, 5);
//
//    return 0;
//}

//int main()
//{
//	char str1[] = "hello Extreme35.";
//	char str2[] = "hello Extreme35.";
//	const char* str3 = "hello Extreme35.";
//	const char* str4 = "hello Extreme35.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}

//int Add(int x, int y)
//{
//    return x + y;
//}
//int main()
//{
//    // 1. 声明并初始化函数指针
//    int (*padd)(int, int) = &Add; // 或者直接写 = Add;
//
//    // 2. 通过函数指针调用函数 (两种调用方式等效)
//    int sum1 = (*padd)(10, 20); // 方式一：先解引用，再传参
//    int sum2 = padd(10, 20);    // 方式二：直接使用指针名 (编译器自动解引用)
//
//    printf("Sum1 = %d, Sum2 = %d\n", sum1, sum2); // 输出 30, 30
//    return 0;
//}

int Add(int x, int y){ return x + y; }
int Sub(int x, int y){ return x - y; }
int Div(int x, int y){ return x / y; }
int Mul (int x, int y){ return x * y; }
int main()
{
	int(*calc[5])(int, int) = { 0,Add,Sub,Mul,Div };//转移表
	int choice = 0;//计算器选择
	int x = 0;
	int y = 0;
	int ret = 0;//结果
	do
	{
		printf("*************************\n");
		printf(" 1:add 2:sub \n");
		printf(" 3:mul 4:div \n");
		printf(" 0:exit \n");
		printf("*************************\n");
		printf("请选择：>");
		scanf("%d", &choice);

		if ((choice <= 4 && choice >= 1))
		{
			printf("输入操作数：>");
			scanf("%d %d", &x, &y);
			// 根据 choice (下标) 调用对应的函数，实现多分支跳转
			// calc[choice] 找到函数地址
			// (*calc[choice])(x, y) 调用函数
			ret = (*calc[choice])(x, y);
			printf("ret = %d\n", ret);
		}
		else if (choice == 0)
			printf("退出计算器\n");
		else
			printf("输入有误\n");
	} while (choice);
	return 0;
}