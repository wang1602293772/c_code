//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
///*
// * 辗转相除发
// 求a,b的最大公约数，只需要用一个数模另一个数得到c
// 然后将b的值赋值给a，当被除数
// 然后将结果c赋值给b，当除数
//
// */
//int main() {
//    int a = 24;
//    int b = 18;
//    int r = 0;
//      while (a % b) {
//        r = (a % b);
//        a = b;
//        b = r;
// }
//    printf("最大公约数为：%d", b);
//
//    int max_num = a;
//    int min_num = b;
//    if (a > b) {
//        max_num = a;
//        min_num = b;
//    } else {
//        max_num = b;
//        min_num = a;
//    }
//    if (max_num % min_num == 0) {
//        printf("最大公约数为：%d", min_num);
//    } else {
//        int num = 0;
//        for (int i = 1; i < min_num; ++i) {
//            if (0 == max_num % i && 0 == min_num % i) {
//                num = i;
//            }
//        }
//        if (0 != num) {
//            printf("最大公约数为:%d", num);
//        }
//    }
//    return 0;
//}