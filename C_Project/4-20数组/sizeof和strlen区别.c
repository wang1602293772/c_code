////
//// Created by WangJing on 2023/4/20.
////
//
//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>
//
////1.两者并没有什么联系
////2.strlen（）函数只能求字符串长度
////3.sizeof（）函数可以计算变量，4-20数组，类型的大小，单位是字节
//
//int main() {
//    char arr1[] = "abc";
//    char arr2[] = {'a','b','c'};
//    printf("%d\n", sizeof(arr1)); // 4
//    printf("%d\n", sizeof(arr2));  // 3
//    //strlen()，求字符串长度，求结束字符'\n'之前的字符长度，不会统计结束字符“\n”
//    printf("%d\n", strlen(arr1)); //3
//    printf("%d", strlen(arr2));  //随机值
//    return 0;
//}