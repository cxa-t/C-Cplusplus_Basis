#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


//数组名的理解
//数组名是数组首元素(第一个元素)的地址
//但是有2个例外：
//1. sizeof(数组名) - 数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2. &数组名 - 数组名表示整个数组，取出的是整个数组的地址
//除此之外，所以的数组名是数组首元素(第一个元素)的地址。
//
//
//int main()
//{
//	int a[] = { 1,2,3,4 };//数组有几个元素？
//
//	printf("%zd\n", sizeof(a));//16 -- sizeof(数组名)的场景
//	printf("%zd\n", sizeof(a + 0));//a是首元素的地址-类型是int*, a+0 还是首元素的地址,是地址大小就是4/8
//	printf("%zd\n", sizeof(*a));//a是首元素的地址,*a就是首元素，大小就是4个字节
//	//*a == a[0] == *(a+0)
//	printf("%zd\n", sizeof(a + 1));//a是首元素的地址,类型是int*,a+1跳过1个整型，a+1就是第二个元素的地址，4/8
//	printf("%zd\n", sizeof(a[1]));//a[1]就是第二个元素，大小4个字节
//	printf("%zd\n", sizeof(&a));//&a是数组的地址，数组的地址也是地址，是地址大小就是4/8个字节
//	printf("%zd\n", sizeof(*&a));//1. *& 互相抵消了，sizeof(*&a) = sizeof(a) -16
//	//2. &a 是数组的地址，类型是int(*)[4],对数组指针解引用访问的是数组， 计算的是数组的大小 -16
//	//
//	printf("%zd\n", sizeof(&a + 1));//&a+1是跳过整个数组后的那个位置的地址，是地址就是4/8个字节
//	printf("%zd\n", sizeof(&a[0])); //首元素的地址，大小4/8个字节
//	printf("%zd\n", sizeof(&a[0] + 1));//&a[0] + 1 -- 数组第二个元素的地址，大小是4/8个字节
//
//	return 0;
//}
//

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", sizeof(arr));//数组名单独放在sizeof内部了，计算的是数组的大小，单位是字节-6
//	printf("%d\n", sizeof(arr + 0));//arr是数组名表示首元素的地址，arr+0还是首元素的地址，是地址就是4/8个字节
//	printf("%d\n", sizeof(*arr));//arr是首元素的地址，*arr就是首元素，大小就是1个字节
//	//*arr -- arr[0] - *(arr+0)
//	printf("%d\n", sizeof(arr[1]));//arr[1] 是第二个元素，大小也是1个字节
//	printf("%d\n", sizeof(&arr));//&arr 是数组地址，数组的地址也是地址，大小是4/8个字节
//	//&arr -- char (*)[6]
//	printf("%d\n", sizeof(&arr + 1));//&arr+1, 跳过整个数组，指向了数组后边的空间，4/8个字节
//	printf("%d\n", sizeof(&arr[0] + 1));//第二个元素的地址，是地址就是4/8字节
//
//	return 0;
//}

//
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));//arr是首元素的地址，数组中没有\0,就会导致越界访问，结果就是随机的
//	printf("%d\n", strlen(arr + 0));//arr+0是数组首元素的地址，数组中没有\0,就会导致越界访问，结果就是随机的
//	//printf("%d\n", strlen(*arr));//arr是首元素的地址,*arr是首元素，就是'a','a'的ascii码值是97
//	//就相当于把97作为地址传递给了strlen，strlen得到的就是野指针, 代码是有问题的
//	//printf("%d\n", strlen(arr[1]));//arr[1]--'b'--98,传给strlen函数也是错误的
//	printf("%d\n", strlen(&arr));//&arr是数组的地址，起始位置是数组的第一个元素的位置，随机值 x
//	printf("%d\n", strlen(&arr + 1));//随机值 x-6
//	printf("%d\n", strlen(&arr[0] + 1));//从第2个元素开始向后统计的，得到的也是随机值 x-1
//
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//arr是数组名，单独放在sizeof内部，计算的是数组总大小，是7个字节
//	printf("%d\n", sizeof(arr + 0));//arr表示数组首元素的地址，arr+0还是首元素的地址，是地址就是4/8
//	printf("%d\n", sizeof(*arr));//arr表示数组首元素的地址,*arr就是首元素，大小是1字节
//	printf("%d\n", sizeof(arr[1]));//arr[1]是第二个元素，大小1个字节
//	printf("%d\n", sizeof(&arr));//&arr是数组的地址，是地址就是4/8
//	printf("%d\n", sizeof(&arr + 1));//&arr是数组的地址,+1跳过整个数组，还是地址，是地址就是4/8个字节
//	printf("%d\n", sizeof(&arr[0] + 1));//&arr[0] + 1是第二个元素的地址，大小是4/8个字节
//
//	return 0;
//}
//

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//arr首元素的地址，arr+0还是首元素的地址，向后在\0之前有6个字符
//	//printf("%d\n", strlen(*arr));//'a'-97, 出错
//	//printf("%d\n", strlen(arr[1]));//'b'-98, 出错
//	printf("%d\n", strlen(&arr));//&arr是数组的地址，也是从数组第一个元素开始向后找，6
//	//&arr -- char (*)[7]
//	//size_t strlen(const char* s);
//
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//	return 0;
//}
//

//
//int main()
//{
//	const char * p = "abcdef";
//
//	printf("%d\n", sizeof(p));//p是指针变量，我们计算的是指针变量的大小，4/8个字节
//	printf("%d\n", sizeof(p + 1));//p + 1是b的地址，是地址大小就是4/8个字节
//	printf("%d\n", sizeof(*p));//p的类型是const char*, *p就是char类型了,1个字节
//	printf("%d\n", sizeof(p[0]));//1. p[0] --> *(p+0)--> *p --> 'a',大小是1字节
//	//2. 把常量字符串想象成数组,p可以理解为数组名,p[0], 就是首元素
//
//	printf("%d\n", sizeof(&p));//取出的是p的地址，地址的大小是4/8个字节
//	printf("%d\n", sizeof(&p + 1));//&p + 1是跳过p指针变量后的地址，是地址就是4/8个字节
//	printf("%d\n", sizeof(&p[0] + 1));//4/8 &p[0]-取出字符串首字符的地址，+1是第二个字符的地址，大小是4/8个字节
//
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//*p就是'a'-97,err
//	//printf("%d\n", strlen(p[0]));//p[0]--> *(p+0)--> *p //err
//	printf("%d\n", strlen(&p));//&p是指针变量p的地址，和字符串"abcdef"关系就不大了
//	//从p这个指针变量的起始位置开始向后数的，p变量存放的地址是什么，不知道，所以答案是随机值
//	printf("%d\n", strlen(&p + 1));//随机值
//
//	printf("%d\n", strlen(&p[0] + 1));//&p[0]-取出字符串首字符的地址，+1是第二个字符的地址, 5
//
//	return 0;
//}

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//a是数组名，单独放在sizeof内部，计算的是数组的大小，单位是字节 - 48 = 3*4*sizeof(int)
//	printf("%d\n", sizeof(a[0][0]));//a[0][0] 是第一行第一个元素，大小4个字节 
//	printf("%d\n", sizeof(a[0]));//a[0]第一行的数组名，数组名单独放在sizeof内部了，计算的是数组的总大小 16 个字节
//	printf("%d\n", sizeof(a[0] + 1));//a[0]第一行的数组名，但是a[0]并没有单独放在sizeof内部，所以这里的数组名a[0]就是
//	//数组首元素的地址，就是&a[0][0],+1后是a[0][1]的地址，大小是4/8个字节
//
//	printf("%d\n", sizeof(*(a[0] + 1)));//*(a[0] + 1)表示第一行第二个元素，大小就是4
//	printf("%d\n", sizeof(a + 1));//a作为数组名并没有单独放在sizeof内部，a表示数组首元素的地址，是二维数组首元素的地址，也就是
//	//第一行的地址，a+1,跳过一行，指向了第二行，a+1是第二行的地址，a+1是数组指针，是地址大小就是4/8个字节
//
//	printf("%d\n", sizeof(*(a + 1)));//1.a+1是第二行的地址,*(a+1)就是第二行，计算的是第二行的大小 - 16
//	//2. *(a + 1) == a[1], a[1]是第二行的数组名，sizeof(*(a + 1))就相当于sizeof(a[1]),意思是把第二行的数组名单独放在
//	//sizeof内部，计算的是第二行的大小
//	printf("%d\n", sizeof(&a[0] + 1));//a[0]是第一行的数组名，&a[0]取出的就是数组的地址，就是第一行的地址
//	//&a[0]+1 就是第二行的地址，是地址大小就是4/8个字节
//	printf("%d\n", sizeof(*(&a[0] + 1)));//*(&a[0] + 1)意思是对第二行的地址解引用，访问的就是第二行，大小是16字节
//	printf("%d\n", sizeof(*a));//a作为数组名并没有单独放在sizeof内部，a表示数组首元素的地址，是二维数组首元素的地址，也就是
//	//第一行的地址，*a就是第一行，计算的就是第一行的大小，16字节
//	//*a == *(a+0) == a[0]
//	printf("%d\n", sizeof(a[3]));//a[3]无需真实存在，仅仅通过类型的推断就能算出长度
//	//a[3]是第四行的数组名，单独放在sizeof内部，计算的是第四行的大小，16个字节
//
//	//sizeof(int);//4
//	//sizeof(3 + 5);//4
//
//	return 0;
//}

//
//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);
//    printf("%d,%d", *(a + 1), *(ptr - 1));
//    return 0;
//}
//

//在X86（32位）环境下
//假设结构体的大小是20个字节
//程序输出的结果是啥？
//struct Test
//{
//    int Num;
//    char* pcName;
//    short sDate;
//    char cha[2];
//    short sBa[4];
//} * p = (struct Test*)0x100000;
//
////指针+-整数
////
//int main()
//{
//    printf("%p\n", p + 0x1);
//    printf("%p\n", (unsigned long)p + 0x1);
//    printf("%p\n", (unsigned int*)p + 0x1);
//
//    return 0;
//}

int main()
{
    int a[3][2] = { (0, 1), (2, 3), (4, 5) };//初始化
    int* p;
    p = a[0];
    printf("%d", p[0]);
    return 0;
}

