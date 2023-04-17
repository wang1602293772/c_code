//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
////编写代码在一个整形有序数组中查找具体的某个数
////要求︰找到了就打印数字所在的下标，找不到则输出:找不到。
//int main() {
//    int arr[] = {1, 2, 3, 4, 5, 6};
//    int len = sizeof(arr) / sizeof(arr[0]);
//    int x = 5;
//    int left = 0;
//    int right = len - 1;
//    int mid = (left + right) / 2;
//    while (left < right) {
//        if (x > arr[mid]) {
//            left = mid + 1;
//        } else if (x < arr[mid]) {
//            right = mid - 1;
//        } else {
//            for (int k = 0; k < len; ++k) {
//                if (arr[k] == arr[mid]){
//                    printf("数组下标为%d",k);
//                    break;
//                }
//
//            }
//            printf("找到了%d", arr[mid]);
//            break;
//        }
//        mid = (left + right) / 2;
//    }
//    if (left >= right) {
//        printf("没找到！！！！");
//    }
//    return 0;
//}