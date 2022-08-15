//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<time.h>
//#include<stdlib.h>
//#include<math.h>

//变长数组概念




//数组的初始化
//int main()
//{
//	int a = 9;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//完全初始化
//	int arr2[10] = { 1,2,3,4,5,6 };//不完全初始化
//	int arr3[] = { 1,2,3,4,5 };
//	char ch[5] = { 's','b','d' };
//	char ch1[] = { 'f','f','a' };
//	char ch2[5] = "bit";
//	char ch3[] = "bit";
//	printf("%s", ch1  );
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}
//一维数组在内存中是连续存放的；
//随着数组下标的增长，地址是由低到高变化的

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//数组名是首元素地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *p);
//		p++;
//	}
//	return 0;
//}