//
// Created by WangJing on 2023/4/19.
//

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {
    long long n = 48;
    long long f1 = 1;
    long long f2 = 1;
    long long f3;
    for (int i = 3; i <= n; ++i) {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
    printf("%d", f3);
    return 0;
}