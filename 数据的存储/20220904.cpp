#define  _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>

//微软设计的就是两个变量之间隔八个字节称为保护空间。所以i等于12时正好就到了i的地址

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	//i和arr是局部变量，局部变量是放在栈区上的
//	//栈区的使用习惯是先使用高地址再使用低地址
//	//数组随着下标的增长，地址是由低到高变化的
//	//debug版本死循环
//	//release版本会优化不会死循环（将i的地址放在arr之前）
//	return 0;
//}


//数据的存储


//数据类型的介绍内置类型

//char，short ,int, long,long long,float,double

//整型家族

//char(unsigned char,signed char)
//short(unsigned short[int] signed short)
//int (unsigned int ,signed int )
//....

//浮点型家族

//float double

//构造类型-自定义类型

//struct 结构体类型
//数组
//枚举
//联合体

//指针类型



//空类型
//void--函数的返回类型void test()
//函数的参数void test(void)
//指针

//整型在内存中的存储

//int main()
//{
//	int a = -10;
//	int b = 10;
//	
//	//
//	//原码
//	//10000000000000000000000000001010；
//	//反码
//	//11111111111111111111111111110101；
//	//补码
//	//11111111111111111111111111111000；
//
//	return 0;
//}

//数据在内存中以二进制的形式存储
//对于整数来说：
//整数的二进制表示有三种表示形式：原码  反码  补码
//正整数：原码  反码  补码相同
//负整数：原码  反码  补码要进行计算
//原码符号位不变，其他位按位取反，得到的是反码
//反码+1，得到的是补码

//为何要存储补码
//使用补码可以让符号位和数值域与统一运算处理
// 补码和原码相互转换其运算过程是相同的//不需要额外的硬件电路
//CPU上只有加法模拟减法没有减法（CPU只有加法器)


//大端字节序和小端字节序

//int main()
//{ 
//	int a = 0x11223344;
//	//此处采用小端存储
//	//11 22 33 44//大端字节序
//	//把数据低位字节序的内容放在高地址处，高位字节序存放在低地址处
//	//44 33 22 11//小端字节序
//}   //把数据的低位字节序的内容放在低地址处，高字节序的内容放在高地址处

//判断大小端字节序
//int main()
//{
//	int a = 1;
//	if ((char)a== 1)
//	{
//		printf("小端字节序");
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}

//方法二
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;//返回1表示小端，0表示大端
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}

////题目

//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	//无符号高位看成数值位
//
//	printf("a=%d,b=%d,c=%d", a, b, c);
//
//	return 0;
//}

//补充：
//1.char 到底是signed char  还是unsigned char
//C语言标准没有规定，取决于编译器

//int是signed int
//short 是signed short

//int main()
//{
//	unsigned char a = -128;
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000
//	//10000000
//	//11111111111111111111111110000000
//	//整型提升按照原来符号位提升
//	printf("%u\n", a);
//	return 0;
//}


//int main()
//{
//	char a = 128;
//	//因为存进去的是10000000，整型提升的时候最高位1是符号位，
//	//即使你刚开始存进去的时候是正数，但是因为截断了，所以存进去的数值位，其最高位被作为了符号位
//	printf("%u\n", a);
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	//10000000000000000000000000010100
//	//11111111111111111111111111101011
//	//11111111111111111111111111101100
//	unsigned int j = 10;
//	//00000000000000000000000000001010
//	printf("%d\n", i + j);
//
//	//11111111111111111111111111101100
//	//00000000000000000000000000001010
//	//11111111111111111111111111110110
//	//11111111111111111111111111110101
//	//10000000000000000000000000001010
//	return 0;
//}

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	char  a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{ 
//		a[i] = -1 - i;
//		
//	}
//	printf("%d", strlen(a));
//	//记住0到127到-128到-1的循环
//	return 0;
//}

//int main()
//{
//	unsigned char i = 0;
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//		printf("%d\n", i);
//		/*if (i == 255)
//		{
//			break;
//		}*/
//	}
//	return 0;
//}

//int main()
//{
//	int n = 9;
//
//	float* pfloat = (float*)&n;
//	printf("%d\n", n);
//	printf("%f\n", *pfloat);
//
//	*pfloat = 9.0;
//	printf("%d\n", n);
//	printf("%f\n", *pfloat);
//	return 0;
//}