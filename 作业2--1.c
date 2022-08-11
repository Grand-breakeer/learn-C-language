//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<time.h>
//#include<math.h>


//打印1000年到2000年的闰年
//int main()
//{
//	int i = 1000;
//	int c = 0;
//	while (i<2001)
//	{
//		if (i % 100 == 0)
//		{
//			if (i % 400 == 0)
//			{
//				printf("闰年：%d\n", i);
//				c++;
//
//			}
//		}
//		else if (i % 4 == 0)
//		{
//			printf("闰年：%d\n", i);
//			c++;
//		}
//
//		i++;
//	}
//	printf("总年数=%d  ", c);
//	return 0;
//}

//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//判断是不是闰年
//		//1.能被四整除，不能被100整除
//		//2.能被四百整除
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		{
//			printf("闰年:%d  ", y);
//			count++;
//		}
//		
//	}
//	printf("count= %d", count);
//	return 0;
//}
//求素数
//int main()//main函数一定不要打错
//{
//	int i = 0;
//	
//	for(i=100;i<=200;i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j== 0)
//			{
//				break;//跳出当前对应的循环  
//			}
//			
//		}
//		if(j==i)
//		{
//		printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 100;
//	int k = 0;
//	while (i <= 200)
//	{
//		int j = 0;
//		for (j = 2; j < i ; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//			
//		}
//		//
//		if (i == j)
//		{
//			printf("%d\n", i);
//			k++;
//		}
//		i++;
//	}
//	printf("素数个数:%d ", k);
//	return 0;
//}
//int main()
//{
//	int i = 100;
//	int k = 0;
//	while (i <= 200)
//	{
//		int j = 0;
//		for (j = 2; j < (i/2); j++)//优化部分
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//
//		}
//		//
//		if (i == ((2*j)+1))
//		{
//			printf("%d\n", i);
//			k++;
//		}
//		i++;
//	}
//	printf("素数个数:%d ", k);
//	return 0;
//}

//老师优化后
//int main()
//{
//	int count = 0;
//	int i = 0;
//	//m=a*b
//	//a和b中至少有一个数字是小于等于开平方m的
//	//sqrt-是开平方函数
//	for (i =101; i <= 200; i+=2)//素数不可能是偶数
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i% j == 0)
//			{
//				flag = 0;//不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("素数总数=%d", count);
//	return 0;
//}