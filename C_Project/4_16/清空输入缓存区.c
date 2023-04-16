//#include "stdio.h"
//
//int main() {
//    int ret = 0;
//    char ch;
//    char passwd[20] = {0};
//    printf("清输入密码：");
//    scanf("%s", &passwd);
//    printf("是否继续输入密码(Y/S)：");
//    while ((ch=getchar()) != '\n') {
//        putchar(ch);
//    }
//    ret = getchar();
//    if ('Y' == ret) {
//        printf("确认成功！\n");
//        printf("密码是%s",passwd);
//    } else {
//        printf("放弃确认！\n");
//    }
//    return 0;
//}