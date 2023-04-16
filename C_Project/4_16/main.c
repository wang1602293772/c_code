//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char passwd[] = "wangjing";
//    for (int i = 0; i < 3; ++i) {
//        char input_passwd[100] = {0};
//        printf("第%d次输入密码：", i + 1);
//        scanf("%s", input_passwd);
//        while(getchar()!='\n'); // 清空输入缓冲区
//        if (strcmp(passwd, input_passwd) == 0) {
//            printf("密码输入正确！\n");
//            break;
//        } else {
//            printf("密码错误，请重新输入！\n");
//        }
//        if (i == 2) {
//            printf("3次机会用光！\n");
//        }
//    }
//    return 0;
//}
