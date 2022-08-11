//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<time.h>
//#include<stdlib.h>

//拷贝数组
//int main()
//{
//	char arr1[20] = { 2,3,4,5 };//数组本身是指针
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//memset
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s", arr);
//	return;
// }

//int get_max(int x, int y)
//{
//	return (x > y) ? x: y;
//}
//int Max2(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int Max = 0;
//	scanf("%d %d", &a, &b);
//	Max=get_max(a, b);
//	printf("%d\n", Max);
//	return 0;
//}
//交换两个变量的值
//函数返回类型地方写出void表示函数不返回任何值也不需要返回
//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = x;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前:%d %d", a, b);
//	Swap(a, b);//常量实参传给函数是给函数一个副本 并不是常量的地址 函数执行时改变的是副本的值 所以在函数调用时值不变
//	printf("交换后:%d %d", a, b);
//	return 0;
//}
//int main()//在地址中运用
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d", *pa);
//	return 0;
//}

//void Swap(int*pa, int*pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前:%d %d\n", a, b);
//	Swap(&a, &b);//直接通过地址找到对应的a，b并对其进行操作
//	printf("交换后:%d %d\n", a, b);
//	return 0;
//}

























