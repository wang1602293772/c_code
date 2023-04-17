//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include "math.h"
////优化1:内层循环定义为sqrt(i)，或者i/2次
////优化2:偶数不会为素数
//int main() {
//    int count = 0;
//    for (int i = 101; i <= 200; i += 2) {
//        int j = 0;
//        for (j = 2; j <= sqrt(i); ++j) {
//            if (0 == i % j) {
//                break;
//            }
//        }
//        if (j > sqrt(i)) {
//            printf("%d是素数\n", i);
//            count++;
//        }
//    }
//    printf("count=%d", count);
//    return 0;
//}
