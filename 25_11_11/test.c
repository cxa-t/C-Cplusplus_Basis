#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//void qsort(void* base, 
//	size_t num, 
//	size_t size,
//	int (*compar)(const void*, const void*)
//);


int cmp(const void* p1, const void* p2)
{
	return *((int*)p1) - *((int*)p2);
}

void test1()
{
	int arr[] = { 3,5,6,8,1,2,15,89 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp);
}

typedef struct stu
{
	char name[10];
	int age;
}stu;

int cmp_name(const void* p1, const void* p2)
{
	return strcmp(((stu*)p1)->name, ((stu*)p2)->name);
}

int cmp_age(const void* p1, const void* p2)
{
	return ((stu*)p1)->age - ((stu*)p2)->age;
}

void test2()
{
	stu arr[] = { {"zhangsan",24},{"lisi",35},{"wangmazi",32},{"liming",21} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_name);
	qsort(arr, sz, sizeof(arr[0]), cmp_age);

}

void bubble_sort(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

void test3()
{
	int arr[] = { 3,5,6,8,1,2,15,89 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
}

void swap(void* p1, void* p2, size_t size)
{
	for (int i = 0; i < size; i++)
	{
		char temp = *((char*)p1 + i);
		*((char*)p1 + i) = *((char*)p2 + i);
		*((char*)p2 + i) = temp;
	}
}

int compar(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}

void bubble_sort_qsort(void* base,size_t num, size_t size,int (*compar)(const void*, const void*))
{
	int i = 0;
	for (i = 0; i < num - 1; i++)
	{
		int j = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			if (compar((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
			{
				swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
			}
		}
	}
}

void test4()
{
	int arr[] = { 3,5,6,8,1,2,15,89 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
}

void test5()
{
	stu arr[] = { {"zhangsan",24},{"lisi",35},{"wangmazi",32},{"liming",21} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort_qsort(arr, sz, sizeof(arr[0]), cmp_name);
	bubble_sort_qsort(arr, sz, sizeof(arr[0]), cmp_age);
}

int main()
{
	//test1();
	//test2();
	//test3();
	test5();

	return 0;
}

