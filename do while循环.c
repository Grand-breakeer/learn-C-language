//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////int main()
////{
////	int i = 1;
////	do
////	{
////		printf("%d ", i);
////		i++;
////	} while (i <= 10);
////	return 0;
////}
//
//
////int main()
////{
////	int i = 1;
////	do
////	{
////		if (i == 5)
////			break;
////		//continue;//和while语句中作用一样
////		printf("%d ", i);
////		i++;
////	} while (i <= 10);
////	return 0;
////}
//
//
////练习
////求n的阶乘
////int main()
////{
////	int k = 1;
////	int i = 0;
////	int n = 0;
////	scanf("%d", &n);
////	for (i = 1; i < (n + 1); i++)
////	{
////		k = k * i;
////	}
////	printf("%d ", k);
////	return 0;
////
////}
//
////求1的阶乘加到n的阶乘
////int main()
////{
////	int i = 0;
////	int n = 0;
////	int s = 1;
////	int sum = 0;
////	scanf("%d", &n);
////	for (i = 1; i < (n + 1); i++)
////	{
////		s *= i;
////		sum += s;
////	}
////	printf("%d ", sum);
////	return 0;
////}
//
////求n的阶乘//求1的阶乘加到n的阶乘
////int main()
////{
////	int sum = 0;
////	int n = 0;
////	int i = 1;
////	int s = 1;
////	scanf("%d", &n);
////	do
////	{
////		s *= i;
////		i++;
////		sum += s;
////	} while (i <= n);
////	printf("%d\n", s);
////	printf("%d ", sum);
////}
//
//
////在一个有序数组中查找某个数字
//
////二分法查找元素优于遍历元素
//
////int main()
////{
////	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
////	int k = 0;//要查找的数字
////	printf("请输入要查找的数字：");
////	scanf("%d", &k);
////
////	int sz = sizeof(arr)/sizeof(arr[0]);
////    int left = 0;
////	int right = sz - 1;
////	
////	while (left<=right)
////		
////	{
////		int mid = (left + right) / 2;//C语言中整数除法是乡下取整的
////		if (arr[mid] < k)
////		{
////			left = mid + 1;
////		}
////		else if (arr[mid] > k)
////		{
////			right = mid - 1;
////		}
////		else
////		{
////			printf("找到了：下标是%d\n", mid);
////			break;
////		}
////	}
////	if (left > right)
////	{
////		printf("找不到");
////	}
////
////	return 0;
////}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
