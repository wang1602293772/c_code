#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[20] = {0};
    system("shutdown -s -t 60");
    printf("ϵͳ����60s��ػ���");
    while (1) {
        scanf("%s", input);
        if (strcmp(input, "������") == 0) {
            system("shutdown -a");
            printf("ȡ���ɹ���");
            break;
        }
    }

    return 0;
}