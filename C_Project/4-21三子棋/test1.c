//
// Created by WangJing on 2023/4/21.
//

#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
#include <stdio.h>

void menu() {
    printf("****************************\n");
    printf("**** 1.paly      0.exit  ***\n");
    printf("****************************\n");
}


void test() {
    srand((unsigned int)time(NULL));
    int choice;
    do {
        menu();
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            game();
            break;
        case 0:
            printf("�˳���Ϸ��");
            break;
        default:
            printf("�����������������룡\n");
            break;
        }
    } while (choice);
}

int main() {
    test();
    return 0;
}