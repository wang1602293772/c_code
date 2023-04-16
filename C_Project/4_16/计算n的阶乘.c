//
// Created by WangJing on 2023/4/16.
//

#include <stdio.h>
//计算 n的阶乘。
int factorial(int n){
    int ret = 1;
    for (int i = 1; i <= n; ++i) {
        ret *= i;
    }
    return ret;
}

//int main() {
//    int result = factorial(3);
//    printf("%d",result);
//    return 0;
//}