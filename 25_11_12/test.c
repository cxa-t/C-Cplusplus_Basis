#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//    //int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    //printf("数组首元素地址: %p\n", &arr[0]);
//    //printf("数组名arr的值: %p\n", arr);
//    
//
//    int arr[10]; // 包含 10 个 int 元素的数组
//    size_t size_of_arr = sizeof(arr);
//    size_t size_of_element = sizeof(arr[0]);
//    printf("整个数组的大小 (sizeof(arr))  = %zu 字节\n", size_of_arr);
//    printf("首元素的大小 (sizeof(arr[0])) = %zu 字节\n", size_of_element);
//    printf("数组元素的个数                = %zu\n", size_of_arr / size_of_element);
//
//
//    return 0;
//}

//int main()
//{
//    int arr[10] = { 0 }; // 假设 int = 4字节
//    printf("arr 的值:        %p\n", arr);
//    printf("arr + 1 的值:    %p\n", arr + 1);   // arr + 1 跳过一个 int (4字节)
//    printf("\n&arr 的值:       %p\n", &arr);
//    printf("&arr + 1 的值:   %p\n", &arr + 1);  // &arr + 1 跳过整个数组 (40字节)
//    return 0;
//}

//int main()
//{
//    int arr[5] = { 10, 20, 30, 40, 50 };
//    int* p = arr; // p 存储 arr 的首元素地址
//    int i = 2; // 访问第三个元素（30）
//    // 1. 下标法 (数组名)
//    printf("arr[2]     = %d\n", arr[i]);
//    // 2. 指针法 (数组名)
//    printf("*(arr + 2) = %d\n", *(arr + i));
//    // 3. 下标法 (指针变量)
//    printf("p[2]       = %d\n", p[i]);
//    // 4. 指针法 (指针变量)
//    printf("*(p + 2)   = %d\n", *(p + i));
//    return 0;
//}

//void print_array_size(int arr[]) // arr[] 在这里是 int* arr 的别名
//{
//     假设在 64 位环境下，指针大小是 8 字节
//    int size_in_func = sizeof(arr);
//    printf("函数内 sizeof(arr) 的结果: %d 字节\n", size_in_func);
//     这里的 size_in_func 会是 4 或 8（指针大小），而不是 40！
//}
//int main()
//{
//    int arr[10] = { 0 }; // 原始数组大小是 10 * 4 = 40 字节
//    printf("函数外 sizeof(arr) 的结果: %zu 字节\n", sizeof(arr)); // 输出 40
//    print_array_size(arr);
//    return 0;
//}

int main()
{
    int a = 10;        // 1. 普通变量 a，存储数据 10
    int* pa = &a;      // 2. 一级指针 pa，存储 a 的地址
    int** ppa = &pa;   // 3. 二级指针 ppa，存储 pa 的地址
    printf("变量 a 的值: %d\n", a);
    // 我们可以通过三种方式访问变量 a
    printf("通过 a 访问:   %d\n", a);
    printf("通过 *pa 访问: %d\n", *pa);
    printf("通过 **ppa 访问: %d\n", **ppa); // 多次解引用
    return 0;
}


