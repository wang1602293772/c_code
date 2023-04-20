////
//// Created by WangJing on 2023/4/20.
////
//
//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
////ц╟ещеепР
//int main() {
//    int arr[] = {23, 56, 1, 3, 8, 9, 4,};
//    int arr_len = sizeof(arr) / sizeof(arr[0]);
//    for (int i = 0; i < arr_len - 1; ++i) {
//        for (int j = 0; j < arr_len - i - 1; ++j) {
//            if (arr[j] > arr[j + 1]) {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//    for (int i = 0; i < arr_len; ++i) {
//        printf("%d\n", arr[i]);
//    }
//    return 0;
//}