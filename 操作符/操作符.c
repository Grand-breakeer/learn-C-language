//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<time.h>
//#include<stdlib.h>
//#include<math.h>


/*
常见的操作符：
算数操作符
位操作符
赋值操作符
单目操作符
关系操作符
等...
*/


//1.算数操作符
//    +  -  *  /  %


//int main()
//{
//	//int a = 3 / 5;//都是整数叫做整数除法，向下去整
//	float a = 6.0/ 5.0;
//	printf("%f\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 7 % 3;//必须是整数
//	printf("%d", a);
//	return 0;
//}


//2.移位操作符
//
//int main()
//{
//	int a = 2;
//	int b = a << 1;//移动的是二进制位
//	//左移操作符：左边丢弃，右边补0
//
//	
//
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = a >> 1;//移动的是二进制位
//	//右移操作符：1.算数右移
//	//              左边丢弃，右边补原符号位
//	//            2.逻辑右移
//	//              右移丢弃左边补0
//	//当前的右移操作符采用的是算数右移
//
//
//	printf("%d", b);
//	return 0;
//}


//3.位操作符
//必须是整数
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//&---按（2进制）位与
//	//有零为零，无零为1
//	/*int c = a & b;*/
//	//|---按（2进制）位或
//	////有1为1；无1位0
//	/*int c = a | b;*/
//	//^---按位（二进制）异或
//	//相同位0；相异为1
//	int c = a ^ b;
//	printf("%d\n",c);
//	
//
//	return 0;
//}

//例：交换a=3,b=5的值不能使用中间变量
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	//数值太大会溢出
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	printf("a=%d b=%d", a, b);
//	return 0;
//}


//计算某个数二进制位中1的个数
//int main()
//{
//	int a = 0;
//	int count=0;
//	scanf("%d", &a);
//	while (a > 0)
//	{
//		int b = 1;
//		int c = 0;
//		c = a & b;
//		if (c == 1)
//		{
//			count++;
//		}
//		a = a >> 1;
//	}
//	printf("%d", count);
//	return 0;
//}