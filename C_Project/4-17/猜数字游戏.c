//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void menu() {
//    printf("********************\n");
//    printf("***1.play  2.exit***\n");
//    printf("********************\n");
//}
//
//void game() {
//    int random_num = rand()%100 + 1;
////    printf("%d",random_num);
//    int input_num = 0;
//    while (input_num != random_num) {
//        printf("请输入猜想的数字：\n");
//        scanf("%d", &input_num);
//        if (random_num == input_num) {
//            printf("恭喜你猜中了！\n");
//            break;
//        } else if (input_num < random_num) {
//            printf("猜小了\n");
//        } else {
//            printf("猜大了\n");
//        }
//    }
//}
//
//int main() {
//    srand((unsigned int)time(NULL));
//    int choice;
//    do {
//        menu();
//        printf("请选择：");
//        scanf("%d", &choice);
//        switch (choice) {
//            case 1:
//                game();
//                break;
//            case 2:
//                printf("程序退出");
//                break;
//            default:
//                printf("输入有误");
//        }
//    } while (choice == 1);
//    return 0;
//}