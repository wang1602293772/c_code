//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
////编写函数不允许创建临时变量，求字符串的长度。
//int get_len(char *str) {
//    //str为指针变量
//    if (*str != '\0') {
//        return 1+ get_len(str+1);
//    }
//    return 0;
//}
//
//int main() {
//    int count = 0;
//    char arr[] = "wang";
//    int len = get_len(arr);
//    printf("%d", len);
//    return 0;
//}