#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[20] = {0};
    system("shutdown -s -t 60");
    printf("系统将在60s后关机！");
    while (1) {
        scanf("%s", input);
        if (strcmp(input, "我是猪") == 0) {
            system("shutdown -a");
            printf("取消成功！");
            break;
        }
    }

    return 0;
}