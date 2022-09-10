#define  _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>

//int i;
//
//int main()
//{
//	i--;
//	if (i > sizeof(i))//sizeof这个操作符，算出的结果类型是unsigned int
//	//两者相比较时会对-1进行算数转换转换为无符号整型
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}



//int an(int x, int y)
//{
//	while (x > 1)
//	{
//		return an(--x, y) * 10+y;
//	}
//	return y;
//}
//
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int Sn = 0;
//
//	scanf("%d", &a);
//	
//
//	for (i = 1; i < 6; i++)
//	{
//		Sn+=an(i, a);
//	}
//	printf("%d\n", Sn);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	scanf("%d %d", &a, &n);
//
//	int b = a;
//	for (i = (n - 1); i > 0; i--)
//	{
//		
//		a = a * 10;
//		a = a + b;
//	}
//	int ret = a;
//	for (i = 0; i < n; i++)
//	{
//		
//		a = a / 10;
//		ret +=a;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int* p=arr;
//	int sz = sizeof(arr) / sizeof(int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(int);
//	
//	int* pend = arr + sz - 1;
//	while (p <= pend)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//水仙花数

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	
//	for (i = 1; i <= a; i++)
//	{
//		int p = 0;
//		int n = 0;
//		int b = i;
//		int d = i;
//		while (b > 0)
//		{
//			n++;
//			b /= 10;
//		}
//		while (d > 0)
//		{
//			int m = 0;
//			
//			m = d % 10;
//			d /= 10;
//			p += pow(m, n);
//		}
//		if (i == p)
//		{
//			printf("%5d\n", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//判断i是否为自幂数
//		//1.计算i的位数--n
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		//2.计算i的每一位的次方之和
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum+=pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.判断
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	unsigned long a[] = { 6,7,8,9,10 };
//	unsigned long* p;
//	p = a;
//	*(p + 3) += 3;
//	printf("%d %d", *p, *(p + 3));
//	return 0;
//}

//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//}
//
//int main()
//{
//	struct stu students[3] = { {1234,"zhang",20},{4567,"wang",32},{5678,"zheng",30} };
//	fun(students + 1);
//	return 0;
//}

//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, * p = &a;
//	a.a = 99;
//	printf("%d\n", *p.a);//点的优先级高于*
//	return 0;
//}

//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* right = str + len - 1;
//	char* left = str;
//	while (right == left)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	
//
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	//上
//	for (i = 0; i < line; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//
//		//打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下
//	for (i = 0; i < line - 1; i++)
//	{
//		//空格
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * (line - 1 - i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int sum(int x)
//{
//	while (x > 1)
//	{
//		return 2 + sum(x - 1);
//	}
//	return 1;
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	
//	printf("%d",sum(m));
//	return 0;
//}

int main()
{
	int money = 0;
	scanf("%d", &money);
	int total = money;
	int empty = money;
	while (empty >= 2)
	{
		total += empty/2;
		empty = empty / 2;
	}
	printf("%d\n", total);
	return 0;
}