#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
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

