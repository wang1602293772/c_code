//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
////��д������һ���������������в��Ҿ����ĳ����
////Ҫ��U�ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ��������:�Ҳ�����
//int main() {
//    int arr[] = {1, 2, 3, 4, 5, 6};
//    int len = sizeof(arr) / sizeof(arr[0]);
//    int x = 5;
//    int left = 0;
//    int right = len - 1;
//    int mid = (left + right) / 2;
//    while (left < right) {
//        if (x > arr[mid]) {
//            left = mid + 1;
//        } else if (x < arr[mid]) {
//            right = mid - 1;
//        } else {
//            for (int k = 0; k < len; ++k) {
//                if (arr[k] == arr[mid]){
//                    printf("�����±�Ϊ%d",k);
//                    break;
//                }
//
//            }
//            printf("�ҵ���%d", arr[mid]);
//            break;
//        }
//        mid = (left + right) / 2;
//    }
//    if (left >= right) {
//        printf("û�ҵ���������");
//    }
//    return 0;
//}