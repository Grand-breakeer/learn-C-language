//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<time.h>
//#include<stdlib.h>
//#include<math.h>
//函数自己调用自己叫递归
// 1.递归存在限制条件，满足条件便不再继续
// 2.每次递归后越来越接近限制条件
//int main()
//{
//	printf("hehe\n");
//	main();//死递归
//	return 0;
//}//Stack overflow 栈溢出

//依次打印一个数的千位百位十位个位
//void print(unsigned int n)
//{
//	if (n > 9)//判断条件
//	{
//		print(n / 10);//函数递归，处理
//	}
//	printf("%d\n", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);//print函数可以打印参数部分每一个数字
//	return 0;
//}


//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}

//计算机的内存
//1.栈区---局部变量，函数形参
//2.堆区---动态内存分配
//3.静态区--全局变量，静态变量


//栈区：每一次函数调用都需要在栈区分配空间（栈帧空间）
//多次递归过量的函数调用会导致栈区空间溢满导致栈溢出

//写代码的时候：
//1.不能死递归，都有跳出条件，每次递归逼近跳出条件
//2.递归层次不能太深

//模拟实现一个strlen函数
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//不创建临时变量实现
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//
//
//int main()
//{
//	char arr[] = "bit";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//递归和迭代
//求n的阶乘
//递归
//int s(int n)
//{
//	if (n > 1)
//	{
//		return n*s(n - 1);
//	}
//	else
//		return n;
//}
//int main()
//{
//	int a = 0;
//	
//	scanf("%d", &a);
//	printf("%d", s(a));
//	return 0;
//}
//迭代
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	scanf("%d", &a);
//	for (b = 1; b <= a; b++)
//	{
//		c = c * b;
//	}
//	printf("%d", c);
//	return 0;
//}

//求第n个斐波那契数
//int count = 0;
//int s(n)//效率太低进行了重复大量的计算
//{
//	//统计第三个斐波那契数的计算次数
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n > 2)
//	{
//		return s(n-1)+s(n-2);
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", s(a));
//	printf("%d", count);
//	return 0;
//}
//循环求解效率高
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	int d = 1;
//	int e = 0;
//	scanf("%d", &a);
//	if (a > 2)
//	{
//		for (b = 3; b <= a; b++)
//		{
//			e = c;
//			c = c + d;
//			d = e;	
//		}
//		printf("%d", c);
//	}
//	else
//	{
//		printf("%d", 1);
//	}
//	return 0;
//}

//汉罗塔问题
//int s(int n)
//{
//	while (n >= 1)
//	{
//		n = n - 1;
//		return 2 * s(n) + 1;
//		
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", s(a));
//	return 0;
//}

//青蛙跳台
//int p(int n)
//{
//	if (n > 1)
//	{
//		return p(n - 1) + p(n - 2);
//	}
//	return 1;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", p(a));
//	return 0;
//}


//1到100中出现了多少个数字9
//int main()
//{
//	int a = 0;
//	int count = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a/10==9)
//		{
//			count++;
//		}
//		if (a % 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}


//计算1/1-1/2+1/3-1/4........+1/99-1/100
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum -= 1.0 / i;
//		}
//		else
//		{
//			sum += 1.0 / i;
//		}
//	}
//	printf("%f", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag=- flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//求十个整数最大值
//int main()
//{
//	int arr[] = { -15,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[1];//直接从数组中挑一个元素
//	int i = 0;
//	for (i = 0; i <= 9; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//输出乘法口诀表
//int main()
//{
//	int i = 1;
//	//打印行数
//	for (i = 1; i <= 9; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d  ", i, j, i * j);//2d打印两位-为左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}


//逗号表达式就是从左到右最右边的袁术

//int main()
//{
//	int i = 0;
//	int a = 0;
//	scanf("%d", &a);
//	for (i = 1; i <= a; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//
//		{
//			printf("%d*%d=%-6d", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
