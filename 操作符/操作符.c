#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>


/*
�����Ĳ�������
����������
λ������
��ֵ������
��Ŀ������
��ϵ������
��...
*/


//1.����������
//    +  -  *  /  %


//int main()
//{
//	//int a = 3 / 5;//��������������������������ȥ��
//	float a = 6.0/ 5.0;
//	printf("%f\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 7 % 3;//����������
//	printf("%d", a);
//	return 0;
//}


//2.��λ������
//
//int main()
//{
//	int a = 2;
//	int b = a << 1;//�ƶ����Ƕ�����λ
//	//���Ʋ���������߶������ұ߲�0
//
//	
//
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = a >> 1;//�ƶ����Ƕ�����λ
//	//���Ʋ�������1.��������
//	//              ��߶������ұ߲�ԭ����λ
//	//            2.�߼�����
//	//              ���ƶ�����߲�0
//	//��ǰ�����Ʋ��������õ�����������
//
//
//	printf("%d", b);
//	return 0;
//}


//3.λ������
//����������
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//&---����2���ƣ�λ��
//	//����Ϊ�㣬����Ϊ1
//	/*int c = a & b;*/
//	//|---����2���ƣ�λ��
//	////��1Ϊ1����1λ0
//	/*int c = a | b;*/
//	//^---��λ�������ƣ����
//	//��ͬλ0������Ϊ1
//	int c = a ^ b;
//	printf("%d\n",c);
//	
//
//	return 0;
//}

//��������a=3,b=5��ֵ����ʹ���м����
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	//��ֵ̫������
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	printf("a=%d b=%d", a, b);
//	return 0;
//}


//����ĳ����������λ��1�ĸ���
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
//	int a = 13;
//	int b = 31;
//	a = a | (1<<4);//�ı������λĳһλ����
//	printf("%d", a);
//	a = a & b;
//	printf("%d", a);
//	return 0;
//}

//4.��ֵ������

//= += -= *= /= >>= <<= %=

//int main()
//{
//	int a = 10;
//	a + 100 = a;
//	printf("%d", a);
//	return 0;
//}


//5.��Ŀ����������Ŀ������ֻ��һ��������)

//��1�����߼�������

//int main()
//{
//	int flag = 0;
//	if (flag)
//	{
//		printf("hehe\n");
//	}
//	if (!flag)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = -a;
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	long long arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//��λ���ֽ�
//	/*printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);*/
//	//֤��sizeof��һ�����������Ǻ���
//
//	return 0;
//}

//int main()
//{
//	short s =5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));//sizeof�еı��ʽ���������㣬��ֻ�ڱ����ڼ�����
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	int b = ~a;
//	printf("%d", b);//~��������λȡ��
//
//	return 0;
//}


//int main()
//{
//	//++ǰ����++��ʹ��
//	//������ʹ�ú�++
//	//--ͬ��
//
//	return 0;
//}