//
// Created by WangJing on 2023/4/23.
//

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void test1(int arr[])
{
    printf("%d\n", sizeof(arr));//(2)
}
void test2(char ch[])
{
    printf("%d\n", sizeof(ch));//(4)
}
int main()
{
    int arr[10] = {0};
    char ch[10] = {0};
    printf("%d\n", sizeof(arr));//(1)
    printf("%d\n", sizeof(ch));//(3)
    test1(arr);
    test2(ch);
    return 0;
}
//问：
//（1）、（2）两个地方分别输出多少？
//（3）、（4）两个地方分别输出多少？
