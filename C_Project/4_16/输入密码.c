#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main() {
    char passwd[]="wangjing";
    for (int i = 0; i < 3; ++i) {
        char input_passwd[20]={0};
        printf("��%d����������",i+1);
        scanf("%s",&input_passwd);
        while(getchar()!='\n');
        if (strcmp(passwd, input_passwd) == 0){
            printf("����������ȷ");
            break;
        } else{
            printf("����������������룡");
        }
        if (i == 2 ){
            printf("3�λ����ù⣡");
        }
    }
    return 0;
}