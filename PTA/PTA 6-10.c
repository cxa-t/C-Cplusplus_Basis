#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Multiply(char* result, int num) {
    int len = strlen(result);
    int carry = 0;
    for (int i = len - 1; i >= 0; --i) {
        int digit = (result[i] - '0') * num + carry;
        result[i] = digit % 10 + '0';
        carry = digit / 10;
    }
    if (carry > 0) {
        memmove(result + 1, result, len);
        result[0] = carry + '0';
    }
}

void Print_Factorial(const int N) {
    if (N > 0) {
        char result[10000];
        memset(result, '0', sizeof(result));
        result[9999] = '\0';
        result[9998] = '1';

        for (int i = 2; i <= N; ++i) {
            Multiply(result, i);
        }

        int start = 0;
        while (result[start] == '0') {
            ++start;
        }

        printf("%s\n", result + start);
    } else if (N == 0) {
        printf("1\n");
    } else {
        printf("Invalid input\n");
    }
}
