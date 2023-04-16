//#include <stdio.h>
////在一个有序数组中查找具体的某个数字n。编写int binsearch(int x, int v[], int n);
////功能︰在v[0]<=v[1]<=v[2]<= ....<=v[n-1]的数组中查找x.
//int main() {
//    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int x = 7;
////    printf("请输入想要查找的数字：");
//    scanf("%d", &x);
//    int len = sizeof(arr) / sizeof(arr[0]);
//    int left = 0;
//    int right = len - 1;
//    int index = 0;
//    while(left<=right) {
//        index = (right + left) / 2;
//        if (arr[index] < x) {
//            left = index + 1;
//        } else if (arr[index] > x) {
//            right = index - 1;
//        } else {
//            printf("找到数字%d", x);
//            break;
//        }
//    }
//}
////1 9 10