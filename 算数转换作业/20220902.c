#define  _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>


//��������Ķ����Ʋ������м���1
//int numberof1(unsigned int x)
//{
//	int a = 0;
//	int b = 0;
//	while (x)
//	{
//		a = x % 2;
//		x = x / 2;
//		if (a == 1)
//		{
//			b++;
//		}
//	}
//	return b;
//}
//int numberof2(int x)
//{
//	int count = 0;
//	int c = 0;
//	while (x)
//	{
//		int b = 1;
//		c = x & b;
//		if (c == 1)
//		{
//			count++;
//		}
//		x = x >> 1;
//	}
//	return count;
//}
//int numberof3(int x)
//{
//	int count = 0;
//	int i = 0;
//	while (x)
//	{
//		x = x & (x - 1);
//		count++;
//	}
//	return count;
//}
//int numberof4(int x)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((x >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int n = -1;
//
//	int ret = numberof2(n);
//	printf("%d\n", ret);
//	return 0;
//}

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

//int main()
//{
//	int a = -1;
//	int b = 0;
//	b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}

//�ж�һ�����ǲ���2��n�η�

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if ((a & (a - 1)) == 0)
//	{
//		printf("��");
//	}
//	else 
//	{
//		printf("����");
//	}
//	
//	return 0;
//}


//�ж�������������λ�ж��ٲ�ͬ
//1.��λ�ж�
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//2.��λȡ������1�ĸ���

//int numberof3(int x)
//{
//	int count = 0;
//	int i = 0;
//	while (x)
//	{
//		x = x & (x - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m,&n);
//	int ret = m^n;
//	printf("%d\n", numberof3(ret));
//	return 0;
//
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 31; i >= 1; i -= 2)
//	{
//		if (((n >> i) & 1) == 0)
//		{
//			printf("0");
//		}
//		else
//		{
//			printf("1");
//		}
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		if (((n >> i) & 1) == 0)
//		{
//			printf("0");
//		}
//		else
//		{
//			printf("1");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//
//	printf("%d %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };//С�˴洢
//	short* p = (short*)arr;//���������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}