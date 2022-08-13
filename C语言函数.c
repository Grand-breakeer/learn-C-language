//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<time.h>
//#include<stdlib.h>
//#include<math.h>

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
//void Swap(int x, int y)//
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = x;
//}传值调用
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

//void Swap(int*pa, int*pb)//当函数定义了没有使用时还没有开辟储存空间
//{//只有调用函数才会开辟储存空间
//	int z = 0;//形参生命周期只在函数内部
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}//传指调用
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前:%d %d\n", a, b);
//	Swap(&a, &b);//实参常量变量表达式等都可以
//	//直接通过地址找到对应的a，b并对其进行操作
//	printf("交换后:%d %d\n", a, b);
//	return 0;//return只能返回一个值
//}
//求较小值
//int Min(x, y)
//{
//	return (x > y) ? y: x;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	c=Min(a, b);
//	printf("%d", c);
//	return 0;
//}
//三个数最小值
//int Min(int x,int y,int z)
//{
//	int min = x;
//	if (min > y)
//	{
//		min = y;
//	}
//	if (min>z)
//	{
//		min = z;
//	}
//	return min;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	
//	scanf("%d %d %d",&a,&b,&c);
//	
//	printf("%d", Min(a, b, c));
//	return 0;
//}
//输入一个数确认是否是素数
//int s(int n)//函数要足够单一，足够独立
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (s(a)==1)
//	{
//		printf("%d", a);
//	}
//	
//	return 0;
//}
//判断是不是闰年

//int is_leap_year(int n)//一个函数如果不写返回类型默认返回int
//{
//	if (n % 400==0)
//	{
//		return 1;
//	}
//	if ((n % 4 == 0) &&( n % 100 != 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//优化后
//int is_leap_year(int n)//一个函数如果不写返回类型默认返回int
//{
//	return ((n % 4 == 0 && n % 100 != 0) || (n % 400) == 0);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (is_leap_year(a)==1)
//	{
//		printf("是闰年");
//	}
//	else
//	{
//		printf("不是闰年");
//	}
//	return 0;
//} 

//实现整型有序数组的二分查找
//int binary_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s-1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	//找到就返回找到位置的下标
//	//找不到就返回-1
//  //数组arr传参数，实际传递的不是数组本身
//  //仅仅传过去了数组首元素地址
//  //所以一定要先求元素个数作为参数传入
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr,key,sz);
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}

//函数每执行一次num+1
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//函数的嵌套调用和链式访问(不能嵌套定义)
//int test3()
//{
//	printf("hehe\n");
//}
//int test2()
//{
//	test3();
//	return 0;
//}
//int main()
//{
//	test2();
//	return 0;
//}
//函数的链式访问
//int main()
//{
//	int len = strlen("abc");
//	printf("%d\n", len);
//
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "bit";
//	printf("%s\n", strcpy(arr1, arr2));
//	return 0;
//}

//int main()
//{
//	//printf返回的是打印在屏幕上字符的个数
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的声明--告知电脑有这样一个函数
//	int Add(int x, int y);
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
////函数的定义
//int Add(int x,int y)
//{
//	return (x + y);
//}
 

//引用人工创建的头文件#include "***.h"
//函数声明一般包含在头文件中




