//#define _crt_secure_no_warnings 1
//#include <stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<time.h>
//#include<stdlib.h>
//#include<math.h>
//
////冒泡排序思想
////两两相邻元素进行比较，并且可能的话交换
////从左到右将最大值一次往右移动
////对每个元素这样处理
////n个数字跑n-1趟
//void bubble_sort(int arr[],int sz)
//{
//	//计算数组元素个数
//	
//	//确定趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序过程
//		int j = 0;
//		for (j = 0; j <sz-1-i ; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//
//			}
//		}
//	}
//}
////数组名就是首元素地址 
////两个例外
////1.sizeof（数组名）-数组名表示整个数组-计算的是整个数组的大小单位是字节
////2.&数组名-数组名表示整个数组-取出的数整个数组的地址
//int main()
//{
//	
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//排位升序--冒泡排序
//	bubble_sort(arr,sz);
//	
//
//	return 0;
//}
//
////int main()
////{
////
////	char arr[] = { 'b','i','t'};
////	
////	printf("%s", arr);
////
////	return 0;
////}