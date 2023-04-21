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
            printf("退出游戏！");
            break;
        default:
            printf("输入有误，请重新输入！\n");
            break;
        }
    } while (choice);
}

int main() {
    test();
    return 0;
}