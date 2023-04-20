////
//// Created by WangJing on 2023/4/20.
////
//
//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
////冒泡排序
//int main() {
//    int arr[] = {23, 56, 1, 3, 8, 9, 4,};
//    int arr_len = sizeof(arr) / sizeof(arr[0]);
//    int minIndex;
//    for (int i = 0; i < arr_len - 1; ++i) {
//        minIndex = i;
//        for (int j = i + 1; j < arr_len; ++j) {
//            if (arr[minIndex] > arr[j]) {
//                minIndex = j;
//            }
//        }
//        if (arr[minIndex] < arr[i]) {
//            int temp = arr[minIndex];
//            arr[minIndex] = arr[i];
//            arr[i] = temp;
//        }
//    }
//    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
//        printf("%d\n", arr[i]);
//    }
//    return 0;
//}