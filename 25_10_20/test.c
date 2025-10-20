#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include <errno.h>

// 判断字符是否是数字字符
int is_digit(char ch) 
{
    return (ch >= '0' && ch <= '9');
}
// 判断字符是否是小写字母
int is_lower(char ch) 
{
    return (ch >= 'a' && ch <= 'z');
}
// 判断字符是否是大写字母
int is_upper(char ch) 
{
    return (ch >= 'A' && ch <= 'Z');
}
// 判断字符是否是字母（大写或小写）
int is_alpha(char ch) 
{
    return (is_lower(ch) || is_upper(ch));
}
// 字符分类函数示例
void test()
{
    // 构造一个“大乱炖”字符串，覆盖控制符、空白、数字、大小写、标点
    char test[] = "\n\t !#09Azaz@[]";
    // 指针遍历字符串，写法更加简洁
    char* p = test;

    puts(" char \tiscntrl\tisspace\tisdigit\tisxdig\tislower\tisupper\tisalpha\tisalnum\tispunct\tisgraph\tisprint");
    puts("------\t-------\t-------\t-------\t------\t-------\t-------\t-------\t-------\t-------\t-------\t-------");

    while (*p)
    {
        // 避免负数下标陷阱
        unsigned char ch = (unsigned char)*p;

        // 逐函数测试，真返回 1，假返回 0 
        printf("%3c\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",
            (isprint(ch) ? ch : '?'),              //不可打印显示 '?'
            iscntrl(ch),
            isspace(ch),
            isdigit(ch),
            isxdigit(ch),
            islower(ch),
            isupper(ch),
            isalpha(ch),
            isalnum(ch),
            ispunct(ch),
            isgraph(ch),
            isprint(ch));
        p++;
    }
}
// 将字符转换为大写字母
char to_upper(char ch) 
{
    // 如果字符是小写字母，则将其转换为大写
    if (ch >= 'a' && ch <= 'z')
        return ch - 32;  // 小写字母转换为大写字母
    return ch;  // 其他字符保持不变
}
// 将字符转换为小写字母
char to_lower(char ch) 
{
    // 如果字符是大写字母，则将其转换为小写
    if (ch >= 'A' && ch <= 'Z')
        return ch + 32;  // 大写字母转换为小写字母
    return ch;  // 其他字符保持不变
}

//// 遍历⽅式
//int my_strlen(const char* str)
//{
//    int count = 0;
//    while (*str)
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//// 递归方式
//int my_strlen(const char* str)
//{
//    if (*str == '\0')
//        return 0;
//    else
//        return 1 + my_strlen(str + 1);
//}
////指针-指针的⽅式
//int my_strlen(char* s)
//{
//    char* p = s;
//    while (*p != '\0')
//        p++;
//    return (int)(p - s);
//}

// 模拟 strcpy 函数
char* my_strcpy(char* destination, const char* source) 
{
    char* dest = destination;  // 保存目标指针的起始位置

    // 循环遍历源字符串，直到遇到空字符 '\0'
    while (*source != '\0') 
        *destination++ = *source++;  // 将源字符复制到目标位置 并同时移动

    *destination = '\0';  // 在目标字符串末尾添加 '\0'，标志结束

    return dest;  // 返回目标字符串的起始位置
}
// 模拟 strncpy 函数
void my_strncpy(char* destination, const char* source, size_t num) 
{
    size_t i = 0;

    // 复制源字符串中的字符
    while (i < num && source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }

    // 如果源字符串长度小于 num，填充剩余部分为 '\0'
    while (i < num) {
        destination[i] = '\0';
        i++;
    }
}
// 模拟 strcat 函数
char* my_strcat(char* dest, const char* src) 
{
    char* d = dest;
    // 找到dest的结尾 \0
    while (*d != '\0')
        d++;
    // 逐字节拷贝src（含终止符）
    while (*src != '\0')
        *d++ = *src++;
    // 手动添加终止符
    *d = '\0';
    return dest;
}
// 模拟 strncat 函数
char* my_strncat(char* destination, const char* source, size_t num) 
{
    char* d = destination;
    // 找到destination的末尾（\0）
    while (*d != '\0')
        d++;
    // 复制source的前num个字符到destination末尾
    while (num-- > 0 && *source != '\0')
        *d++ = *source++;
    // 在目标字符串末尾添加\0
    *d = '\0';
    return destination;
}
// 模拟 strcmp 函数
int my_strcmp(const char* str1, const char* str2)
{
    while (*str1 == *str2)      // 1、比较当前字符是否相等
    {
        if (*str1 == '\0')      // 2、如果正好两边都到 '\0'，说明完全相等
            return 0;
        str1++;                 // 3、同时推进到下一个字符
        str2++;
    }
    return *str1 - *str2;       // 4、第一个不等字符的差值作为结果
}
// 模拟 strncmp 函数
int my_strncmp(const char* s1, const char* s2, size_t n)
{
    while (n--) // 只比较前 n 个字符
    {  
        unsigned char c1 = (unsigned char)*s1++;
        unsigned char c2 = (unsigned char)*s2++;

        if (c1 != c2)         // 一旦不相等，直接返回差值
            return c1 - c2;
        if (c1 == '\0')       // 若遇到字符串结尾，提前退出
            return 0;
    }
    return 0;  // 前 n 个字符都相同
}
// 模拟 strstr 函数
char* strstr(const char* str1, const char* str2)
{
    char* cp = (char*)str1;
    char* s1, * s2;
    if (!*str2)                // ① 子串为空：按标准直接返回主串开头
        return (char*)str1;
    while (*cp) 
    {              // ② 从主串的每个位置 cp 开始尝试匹配
        s1 = cp;
        s2 = (char*)str2;
        while (*s1 && *s2 && !(*s1 - *s2))
            s1++, s2++;        // ③ 两指针前进：逐字符比较
        if (!*s2)              // ④ 当 s2 走到 '\0'，说明子串已完整匹配
            return cp;
        cp++;                  // ⑤ 否则从主串下一位置继续
    }
    return NULL;               // ⑥ 扫描完整个主串也没有匹配
}
// strtok函数示例
static void test2()
{
    char arr[] = "192.168.6.111";
    char* sep = ".";
    char* str = NULL;
    for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep))
        printf("%s\n", str);
} 
// strerror函数使用示例
void test3()
{
    int i = 0;
    for (i = 0; i <= 10; i++)
        printf("%s\n", strerror(i));
}
// perror函数
void test4()
{
    FILE * pFile;
    pFile = fopen("unexist.ent", "r");
    if (pFile == NULL)
        perror("Error opening file unexist.ent");
}

int main()
{
    //char arr[] = "aifuhcgipduafhg9pa";
    //char brr[1001] = "zzzzzzzzzzzzzzzzzzzzzzzzzzz";
    //strcpy(brr, arr);
    //test2();
    test3();
    return 0;
}
