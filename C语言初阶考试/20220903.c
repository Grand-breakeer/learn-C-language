#define  _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>

//int cnt;

//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//	{
//		return 1;
//	}
//	else if (n == 1)
//	{
//		return 2;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	fib(8);
//	printf("%d", cnt);
//}
//
//int main()
//{
//	int x = 1;
//	do 
//	{
//		printf("%2d\n", x++);
//	} while (x--);
//	return 0;
//}

//+的优先级高于*

//C语言只规定了各种语法规则

//库函数是利用C语言语法写出的函数（包含输入与输出函数）每个厂商实现库函数的方式都不一样

//不是C语言包含的内容


//设计算法求a，b的最小公倍数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	scanf("%d %d", &a, &b);
//	for (i = (a >= b ? a : b); i <= (a * b); i++)
//	{
//		if (i % a == 0 && i % b == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//
//	int i = 1;
//	for (i = 1;; i++)
//	{
//		if (a * i % b == 0)
//		{
//			printf("%d\n", a * i);
//			break;
//		}
//	}
//	/*int m = a > b ? a : b;
//	while (1)
//	{
//		if (m % a == 0 && m % b == 0)
//		{
//			printf("%d\n", m);
//			break;
//		}
//		m++;
//	}*/
//
//	return 0;
//}
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = 0;
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//		left++;
//		right--;
//	}
//}
//
//
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);//三步翻转法
//	//1.字符串整体翻转
//	//.gnijieb ekil I
//	//2.每个单词逆序
//	//beijing. like I
//	int len = strlen(arr);
//	reverse(arr,arr+len-1);
//
//	char* start = arr;
//	while (*start)
//	{
//		char* end = start;
//		while (*end != ' '&&*end!='\0')
//		{
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end = ' ')
//		{
//			start = end + 1;
//		}
//		else
//		{
//			start = end;
//		}
//	}
//
//	printf("%s\n", arr);
//	return 0;
//}