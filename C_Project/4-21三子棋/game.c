#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "game.h"

void initArray(char arr[row][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            arr[i][j] = ' ';
        }
    }
}


void displayBoard(char board[row][col]) {
    for (int i = 0; i < row; i++) {
        for (int k = 0; k < col; ++k) {
            printf(" %c ", board[i][k]);
            if (k != col - 1)
                printf("|");
        }
        printf("\n");
        if (i != row - 1) {
            for (int j = 0; j < col; ++j) {
                printf("---");
                if (j != col - 1)
                    printf("|");
            }
            printf("\n");
        }
    }
}

void playerMove(char board[row][col]) {
    int x = 0;
    int y = 0;
    while (1) {
        printf("�����>\n");
        printf("�������µ�����\n");
        scanf("%d %d", &x, &y);
        if (x > 0 && y > 0 && x <= 3 && y <= 3) {
            if (board[x - 1][y - 1] == ' ') {
                board[x - 1][y - 1] = '*';
                break;
            }
            else {
                printf("�������Ѿ�������\n");
            }
        }
        else {
            printf("������������������\n");
        }
    }
}

void computerMove(char board[row][col]) {
    int x = 0;
    int y = 0;
    printf("������>\n");
    while (1) {
        x = rand() % row;
        y = rand() % row;
        if (x >= 0 && y >= 0 && x < 3 && y < 3) {
            if (board[x][y] == ' ') {
                board[x][y] = '#';
                break;
            }
        }
    }
}

char isWin(char board[row][col]) {
    for (int i = 0; i < row; ++i) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')//�жϺ����е�Ԫ���Ƿ�һ��
        {
            return board[i][0];
        }
    }
    for (int i = 0; i < row; ++i) {
        if ( board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {//�ж������е�Ԫ���Ƿ�һ��
            return board[0][i];
        }
    }
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') ||//�ж϶Խ���
        (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')) {
        return board[1][1];
    }
    if (isFull(board) == 1) {
        return 'Q';//����
    }
    else {
        return 'c';//����
    }
}

int isFull(char board[row][col]) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            if (board[i][j] == ' ') {
                return 0;//����û��
            }
        }
    }
    return 1;//��������
}

void game() {
    char board[row][col] = { 0 };
    char ret;
    initArray(board);
    displayBoard(board);
    while (1) {
        //�������
        playerMove(board);
        //��ʾ����
        displayBoard(board);
        ret = isWin(board);
        if (ret != 'c') {
            break;
        }
        //��������
        computerMove(board);
        displayBoard(board);
        ret = isWin(board);
        if (ret != 'c') {
            break;
        }
    }
    if (ret == '*') {
        printf("���Ӯ\n");
    }
    else if (ret == '#') {
        printf("����Ӯ\n");
    }
    else {
        printf("ƽ��\n");
    }
}