//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
///*
// * շת�����
// ��a,b�����Լ����ֻ��Ҫ��һ����ģ��һ�����õ�c
// Ȼ��b��ֵ��ֵ��a����������
// Ȼ�󽫽��c��ֵ��b��������
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
//    printf("���Լ��Ϊ��%d", b);
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
//        printf("���Լ��Ϊ��%d", min_num);
//    } else {
//        int num = 0;
//        for (int i = 1; i < min_num; ++i) {
//            if (0 == max_num % i && 0 == min_num % i) {
//                num = i;
//            }
//        }
//        if (0 != num) {
//            printf("���Լ��Ϊ:%d", num);
//        }
//    }
//    return 0;
//}