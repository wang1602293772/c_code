//#include <stdio.h>
////��һ�����������в��Ҿ����ĳ������n����дint binsearch(int x, int v[], int n);
////���ܩU��v[0]<=v[1]<=v[2]<= ....<=v[n-1]�������в���x.
//int main() {
//    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int x = 7;
////    printf("��������Ҫ���ҵ����֣�");
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
//            printf("�ҵ�����%d", x);
//            break;
//        }
//    }
//}
////1 9 10