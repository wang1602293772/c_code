////
//// Created by WangJing on 2023/4/22.
////
//
//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main() {
//    int a = 31;
//    int flag = 1;
//    int i = 32;
//    int count = 0;
////      第一种方法：通过左移标志位flag检测是否为1
//    while (i > 0) {
//        if ((a & flag) != 0) {
//            count++;
//        }
//        flag = flag << 1;
//        i--;
//    }
////      方法2：通过右移要检测的数字
//    while (i > 0) {
//        if ((a & flag) == 1) {
//            count++;
//        }
//        a = a >> 1;
//        i--;
//    }
//    printf("%d", count);
//    return 0;
//}