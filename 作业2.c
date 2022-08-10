//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<time.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)//无限打印五的死循环若只想打印五应该用（==）i=5是赋值语句
//			printf("%d", i);
//	}
//	return 0;
//}

//观察函数内部结构-F11-逐过程
//F10-逐过程
//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1:
//		b = 8;
//	case 2:
//		b = 2;
//	case 3:
//		b = 4;
//	}
//	return b;
//
//}
//int main()
//{
//	printf("%d", func(1));
//	return 0;
//}
//int p(int x, int y, int z)
//{
//	if (x >= y)
//	{
//		if (z > x)
//		{
//			 return z, x, y;
//		}
//		if (y > z)
//		{
//			 return x, y, z;
//		}
//		if (x > z && y < z)
//		{
//			 return x, z, y;
//		}
//	}
//	if (x <= y)
//	{
//		if (z < x)
//		{
//			return z, x, y;
//		}
//		if (y < z)
//		{
//			return x;
//			return y;
//			return z;
//		}
//		if (x < z && y > z)
//		{
//			 return x, z, y;
//		}
//	}
//
//	
//
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//
//	printf("%d %d %d", p(a, b, c));
//	return 0;
//}

//int f(int x, int y)
//{
//	if (x < y)
//	{
//		int z = x;
//		x = y;
//		y = z;
//	}
//	return x;
//}
// 
// 从大到小输出三个数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int z = a;
//		a = b;
//		b = z;
//	}
//	if (a < c)
//	{
//		int z = a;
//		a = c;
//		c = z;
//	}
//	if (b < c)
//	{
//		int z = b;
//		b = c;
//		c = z;
//	}
//	
//	printf("%d %d %d",a,b,c);
//	return 0;
//
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i < 101)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//		i++;
//	}
//	return 0;
//}

//普通求最大公约数的方法
//int main()
//{
//	int m = 0;
//	int n = 0;
//	
//	int min = 0;
//	scanf("%d %d",&m,&n);
//	if (m < n)
//	{
//		min = m;
//	}
//	else
//	{
//		min = n;
//	}
//	int i = min;
//	for ( i=min;i < (min+1);i--)
//	{
//		if (m % i == 0 && n % i == 0)
//		{
//			printf("%d ", i);
//			break;
//		}
//	}
//	return 0;
//
//}

//求最大公约数辗转相除法
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	scanf("%d %d", &m, &n);
//	int t = 0;
//	if (m < n)
//	{
//		int z = m;
//		m = n;
//		n = z;
//	}
//	else
//	{
//		;
//	}
//	if(m%n==0)
//	{
//		printf("%d ", n);
//	}
//	else
//	{
//		for (i = 1; i < m; i++)
//		{
//			t = m % n;
//			m = n;
//			n = t;
//			if (m % n == 0)
//			{
//				printf("%d ", n);
//				break;
//			}
//			else
//			{
//				t = m % n;
//			}
//		}
//	}
//
//
//	
//    return 0;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int t = 0;
//
//	while (t = m % n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("%d ", n);
//	return 0;
//}










