////
//// Created by WangJing on 2023/4/16.
////
//
//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//
////编写代码，演示多个字符从两端移动，向中间汇聚
//
//int main() {
//    char arr1[] = "1234567890ABc";
//    char arr2[] = "             ";
//    int len = strlen(arr1);
//    int left = 0;
//    int right = len - 1;
//    while (left <= right) {
//        arr2[left]=arr1[left];
//        arr2[right]=arr1[right];
//        left++;
//        right--;
//        printf("%s\n",arr2);
//        Sleep(200);
//        system("cls");
//    }
//    return 0;
//}