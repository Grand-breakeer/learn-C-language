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

//6.ȡ��ַ������
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//&----ȡ��ַ������
//	int *pa = &a;//pa��������ŵ�ַ��-pa���Ǹ�ָ�����
//	*pa = 20;//*--�����ò�����--��ӷ��ʲ�����
//	printf("%d\n", a);//20
//	return 0;
//}


//7.ǿ������ת��
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//8.��ϵ������
//int main()
//{
//	int a = 3;
//	int b = 5;
//	if(a==b)
//		if(a!=b)
//			if(a>=b)
//				if(a<=b)
//					if(a<b)
//						if(a>b)
//	return 0;
//}

//=��ֵ   ==�ж����

//==

//�Ƚ������ַ�����Ȳ����õȺ���strcmp


//9.�߼���   �߼���
//int main()
//{
//	int a = 1;
//	int b = 0;
//	if (a && !b)
//	/*if(a||b)*/
//	{
//		printf("hehe");
//	}
//	return 0;
//}


//int main()
//{
//	/*int i = 0, a = 0, b = 2, c = 3, d = 4;*/
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	/*i = a++ && ++b && d++;*///�����ҳ���0���������
//	i = a++ || ++b || d++;
//
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);//1234
//	return 0;
//}

//10.��������������Ŀ��������
//int main()
//{
//	int a = 3;
//	int b = 0;
//	/*if (a > 5)
//	{
//		b = 1;
//	}
//	else
//	{
//		b = -1;
//	}*/
//	b = (a > 5 ? 1 : -1);
//	return 0;
//}

//11.���ű��ʽ
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	//���ű��ʽ������һ�μ��㣬�����������ʽ��������һ�����ʽ�Ľ��
//	int d = (c = 5, a = c + 3, b = a - 4, c += 5);
//	printf("%d\n", d);
//	return 0;
//}


//12.�±����ò�����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%d\n", arr[4]);//[]�����±����ò�����
//	//[]�Ĳ�������������һ����arrһ����4
//	return 0;
//}



//13.�������ò�����
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret=Add(a, b);//()�������ò�����
//	//������������add ��a ��b
//	return 0;
//}


//14.�ṹ��Ա���ʲ�����
//.
//->

//�ṹ��--int float char short double long longlong

//�����飺��������ţ������磬���ߣ�����

//�����Խ��ṹ��

//struct Book
//{
//	char name[20];
//	char id[20];
//	int price;
//};
//
//int main()
//{
//	int num = 10;
//	struct Book b = { "C����","c191918127",55 };
//	struct Book* pb = &b;
//
//	printf("������%s\n", pb->name);
//	printf("��ţ�%s\n", pb->id);//�ṹ��ָ��->��Ա��
//	printf("�۸�%d\n", pb->price);
//
//	//printf("������%s\n", (*pb).name);
//	//printf("��ţ�%s\n", (*pb).id);//�ṹ�������.��Ա��
//	//printf("�۸�%d\n", (*pb).price);
//
//	//printf("������%s\n", b.name);
//	//printf("��ţ�%s\n", b.id);//�ṹ�������.��Ա��
//	//printf("�۸�%d\n", b.price);//��----.----�ķ�ʽ���Է��ʽṹ���еĳ�Ա
//	return 0;
//}




//���ʽ��ֵ

//��ʽ����ת��

//��������
//û�дﵽ���ʹ�С����Ϊ����
//1.��λΪ����λ��Ϊ0��ȫ��0
//2.��λΪ����λ��Ϊ1��ȫ��1

//int main()
//{
//	char a = 3;//00000011
//
//
//	char b = 127;//01111111
//
//
//	char c = a + b;
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000001 
//	//100000010-c
//	// 
//	//a��b����char����û�дﵽint�Ĵ�С
//	//����ͻᷢ����������
//
//	//11111111111111111111111110000001-����
//	//10000000000000000000000001111111-ԭ��
//	printf("%d\n", c);
//	return 0;
//}