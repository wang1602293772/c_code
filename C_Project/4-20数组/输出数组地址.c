//
// Created by WangJing on 2023/4/20.
//

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3};
    printf("arr = %p\n", arr);//代表的数组元素首地址
    printf("arr+1 = %p\n", arr + 1);
    printf("arr[0] = %p\n", &arr[0]);//代表的数组元素首地址
    printf("arr[0]+1 = %p\n", &arr[0] + 1);
    printf("&arr = %p\n", &arr);//代表的整个数组
    printf("&arr+1 = %p\n", &arr + 1);
    return 0;
}