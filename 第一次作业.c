//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////c99标准中引用一个概念：变长数组
////支持数组创建的时候，用变量指定大小的，但是这个数组不能初始化
////VS2019/VS2022不支持变长数组
//
//
////int main()
////{
////	//int n = 10;
////	//int arr[n] = { 0 };
////	//int arr[n];//vs2019 不支持c99中的变长数组
////
////
////
////
////	return 0;
////}
//
//
//////求最大值方法1
////int main()
////{
////	int a = 0;
////	int b = 0;
////	scanf("%d %d", &a, &b);
////	if (a > b)
////		printf("%d\n", a);
////	else
////		printf("%d\n", b);
////
////
////	return 0;
////}
//
//
//////求最大值方法2
////MAX(int x, int y)//函数名不建议全大写
////{
////	if (x > y)
////		return x;//printf("%d\n", x);(可以但是不够单一）
////	else
////		return y;//printf("%d\n", y);
////
////	return 0;
////}
////int main()
////{
////	int a = 0;
////	int b = 0;
////	scanf("%d %d", &a, &b);
////	int M = MAX(a, b);
////	printf("%d\b", M);
////
////
////
////	return 0;
////}
////int sum(int a)
////{
////	int c = 0;
////	static int b = 3;
////	c += 1;
////	b += 2;
////	return (a+b+c);
//// }
////
////int main()
////{
////	float i;
////	int a = 2;
////	for (i = 0; i < 5; i++)
////	{
////		printf("%d\n", sum(a));
////	}
////
//// 
////
////
////
////
////
////	return 0;
////}
//
//int main()
//{
//	int M = 0;
//	scanf("%d", &M);
//
//	if (M % 5 == 0)
//		printf("%s", "YES");
//	else
//		printf("%s", "NO");
//
//
//
//
//	return 0;
//
//}
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
