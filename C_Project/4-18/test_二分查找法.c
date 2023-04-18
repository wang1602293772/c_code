//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
////二分法
//int Dichotomy_Lookup(int arr[], int x, int len) {//arr为想要查找的数组，x为想要查找的值，len为数组长度
//    int left = 0;   //定义左边的下标
//    int right = len - 1;  //定义右边的下标，为数组的最后一个元素下标
//    int mid;
//    //注意点2：要加 = 如果left和right同时指向一个元素的时候，就找不出来了
//    while (left <= right) {
//        //注意点1：mid计算要在循环里面，因为mid的值一直在更新
//        mid = (left + right) / 2; //mid为中间下标
//        if (arr[mid] < x) {  //如果中间的值小于查找的值，说明mid需要右移,那么左边的下标需要调整为mid右边的值
//            left = mid + 1;
//        } else if (arr[mid] > x) { //如果中间的值大于查找的值，说明mid需要左移，那么右边的下标需要调整为mid左边的值
//            right = mid - 1;
//        } else {      //剩下的情况就是，arr[mid] = x，找到了
//            return x;  //找到了就返回找到的值x
//        }
//    }
//    //注意点3：找不到的时候要加return；
//    return 0;  //跳出循环说明数组中不存在查找的值，返回0
//}
//
//int main() {
//    int arr[] = {0, 1, 2, 3, 4, 7, 9,};
//    int len = sizeof(arr) / sizeof(arr[0]);
//    printf("%d", Dichotomy_Lookup(arr, 3, len));
//    return 0;
//}