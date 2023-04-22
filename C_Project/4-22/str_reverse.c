//
// Created by WangJing on 2023/4/22.
//

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "string.h"

void str_reverse(char arr[], int len) {
    int left = 0;
    int right = len - 1;
    while (left <= right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

//int main() {
//    char arr[] = "abcdef";
//    int len = strlen(arr);
//    str_reverse(arr, len);
//    printf("%s", arr);
//    return 0;
//}