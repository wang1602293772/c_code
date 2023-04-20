////// Created by WangJing on 2023/4/20.//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////冒泡排序
//void buuble_sort(int arr[], int len) {
//    for (int i = 0; i < len - 1; i++) {//外层循环控制循环的总次数
//        int flag= 1;  //优化代码，创建变量判断数组中的元素书否已经排序好了，flag赋值为1默认为排序好了，当排序好了之后，数组元素进行比较时，就不会像出现第n个元素比第n-1元素大，当出现这种情况时，改变flag的值
//        for (int j = 0; j < len - i - 1; j++) { //内层循环控制冒泡比较的次数
//            if (arr[j] > arr[j + 1]) {
//                flag = 0; //当发现数组元素不满足条件时，改变flag的值
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//        if (flag)//判断如果上一次的全部循环，都满足条件时，这是代表数组中的元素已经排序好了
//            return;
//    }
//}
//
//int main() {
//    int arr[] = {4, 56, 1, 3};
//    int len_arr = sizeof(arr) / sizeof(arr[0]);
//    buuble_sort(arr, len_arr);
//    for (int i = 0; i < len_arr; ++i) {
//        printf("%d\n", arr[i]);
//    }
//    return 0;
//}