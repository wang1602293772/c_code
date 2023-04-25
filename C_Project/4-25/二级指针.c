//
// Created by WangJing on 2023/4/25.
//

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {
    int a = 10;
    int *pa = &a;//一级指针
    int **ppa = &pa;//二级指针
    return 0;
}