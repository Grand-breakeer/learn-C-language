//#define _CRT_SECURE_NO_WARNINGS 1
////C语言怎么描述？
//// 常量    变量
//// 
//// 
//#include <stdio.h>
//int main()
//{
//	//创建的一个变量
//	// 类型     变量名字=0；推荐
//	// 类型     变量名字；不推荐
//	//
//	int age = 20;
//	double weight = 75.3;
//
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//
//
//	return 0;
//
//}
////%d--int
////%f--fioat
////%lf--double


//变量的分类：
//局部变量  --  {}大括号外部的定义
//全局变量  --  {}大括号内部的定义
//int a = 100;
//int main()
//{
//
//	int a = 10;
//	printf("%d\n", a);
//
//	return 0;
//
//}
//局部变量和全局变量冲突是局部变量优先表达
//不建议将全局变量和局部变量名字设置为一样

//写一个代码求两个整数的和
//scanf函数是输入函数

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("sum=%d\n", sum);
//
//	return 0;
//}
//调用scanf函数解决办法
//源文件第一行加上：#define _CRT_SECURE_NO_WARNINGS
//svanf_s函数-VS编译提供的，不是C语言标准规定的
