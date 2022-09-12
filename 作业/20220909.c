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

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	while (empty >= 2)
//	{
//		total += empty/2;
//		empty = empty / 2+empty%2;
//	}
//	printf("%d\n", total);
//	return 0;
//}


//给出一个数组调整元素顺序，奇数在前偶数在后

//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	//从前往后找偶数
//	while (left < right)
//	{
//		while ((left<right)&&arr[left] % 2 == 1)//防止越界访问
//		{
//			left++;
//		}
//		//从后往前找奇数
//		while (arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}



//int main()
//{
//	unsigned char a = 200;
//	//11001000
//
//	unsigned char b = 100;
//	//01100100
//	
//	unsigned char c = 0;
//	//A和B整型提升
//	//00000000000000000000000011001000
//	//00000000000000000000000001100100
//	//00000000000000000000000100101100
//
//	c = a + b;
//	//00101100
//
//	printf("%d %d", a + b, c);
//	return 0;
//}


//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}


//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("%c\n",killer);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1)
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d", a, b, c, d, e);
//							}
//						}
//							
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}