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
        printf("玩家走>\n");
        printf("请输入下的坐标\n");
        scanf("%d %d", &x, &y);
        if (x > 0 && y > 0 && x <= 3 && y <= 3) {
            if (board[x - 1][y - 1] == ' ') {
                board[x - 1][y - 1] = '*';
                break;
            }
            else {
                printf("该坐标已经落子了\n");
            }
        }
        else {
            printf("输入有误，请重新输入\n");
        }
    }
}

void computerMove(char board[row][col]) {
    int x = 0;
    int y = 0;
    printf("电脑走>\n");
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
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')//判断横三行的元素是否一样
        {
            return board[i][0];
        }
    }
    for (int i = 0; i < row; ++i) {
        if ( board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {//判断竖三列的元素是否一样
            return board[0][i];
        }
    }
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') ||//判断对角线
        (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')) {
        return board[1][1];
    }
    if (isFull(board) == 1) {
        return 'Q';//满了
    }
    else {
        return 'c';//继续
    }
}

int isFull(char board[row][col]) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            if (board[i][j] == ' ') {
                return 0;//棋盘没满
            }
        }
    }
    return 1;//棋盘满了
}

void game() {
    char board[row][col] = { 0 };
    char ret;
    initArray(board);
    displayBoard(board);
    while (1) {
        //玩家下棋
        playerMove(board);
        //显示棋盘
        displayBoard(board);
        ret = isWin(board);
        if (ret != 'c') {
            break;
        }
        //电脑下棋
        computerMove(board);
        displayBoard(board);
        ret = isWin(board);
        if (ret != 'c') {
            break;
        }
    }
    if (ret == '*') {
        printf("玩家赢\n");
    }
    else if (ret == '#') {
        printf("电脑赢\n");
    }
    else {
        printf("平局\n");
    }
}