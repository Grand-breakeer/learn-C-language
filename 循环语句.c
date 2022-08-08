//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////while循环
////while(表达式）
// //   循环语句
//
//
////int main()
////{
////	int i = 1;
////	while (i <= 10)
////	{
////		printf("%d ", i);
////		i++;
////	}
////
////	return 0;
////
////}
//
////int main()
////{
////	int i = 1;
////	while(i <= 10)
////	{
////		if (i == 5)
////			break;//1 2 3 4//while循环中break用于永久终止循环
////		printf("%d ", i);
////		i++;
////
////	}
////	return 0;
////}
//
////int main()
////{
////	int i = 1;
////
////	while (i <= 10)
////	{
////		if (i == 5)
////			continue;//在while循环中，continue的作用是跳过本次循环continue后边的代码
////		             //直接去判断部分看是否执行
////		printf("%d ", i);
////		i++;
////	}
////	return 0;
////}
//
//
//
////gatchar---缓冲区-----键盘（从键盘中读取一个字符）//1.读取字符，getchar（）的功能最主要是c语言中读取字符的一个函数，能够提取单个字符；2.输入单个字符，getchar（）的功能还可以从键盘中输入一个单个的字符，并且把单个的字符输入到计算机中；3.返回值是char类型，可以返回int类型的值。
////EOF -- end of file--文件结束标志是-1
//
////int main()
////{
////	int ch = getchar();
////	//printf("%d\n", ch);
////	putchar(ch);
////	return 0;
////}
//
//
////int main()
////{
////	int ch = 0;
////	while ((ch = getchar()) != EOF)
////	{
////		putchar(ch);
////	}
////	return 0;
////}
//
//
////int main()//getchar  scanf 这类输入函数都是从缓冲区获取数据
////{
////	char password[20] = { 0 };
////	printf("请输入密码:>");
////	scanf("%s", password);//password是数组不用取地址//当输入的多个字符（例如122345  adadad）需要放多个getchar
////	printf("请确认密码（Y/N）:>");
////	//清理缓冲区
////	//getchar();//处理'\n'
////	int tmp = 0;//字符本质是以ASCI值（整型）储存的
////	while ((tmp = getchar()) != '\n')//清理多个字符
////	{
////		;
////	}
////
////	int ch = getchar();
////	if (ch == 'Y')
////	{
////		printf("确认成功\n");
////	}
////	else
////	{
////		printf("确认失败\n");
////	}
////	return 0;
////}
//
////int main()
////{
////	int ch = 0;
////	while ((ch = getchar()) != EOF)
////	{
////		if (ch < '0' || ch>'9')
////			continue;
////		putchar(ch);
////
////		}
////	return 0;
////}
//
//
//int main()
//{
//	int i = 1;//初始化
//	while (i <= 10)//判断部分
//	{
//		printf("%d", i);
//		i++;//循环变量的调整部分
//	}
//	return 0;
//}
//
////上述三个部分分隔太远不方便所以用for循环
//
//
//
