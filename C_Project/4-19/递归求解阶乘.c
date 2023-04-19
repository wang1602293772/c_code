////
//// Created by WangJing on 2023/4/19.
////
//
//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int get_jc(int n) {
//    if (n == 1) {
//        return 1;
//    }
//    return n * get_jc(n - 1);
//}
//
//int main() {
//    int a;
//    printf("请输入想要计算的阶乘数字：");
//    scanf("%d", &a);
//    printf("%d的阶乘为%d", a , get_jc(a));
//    return 0;
//}