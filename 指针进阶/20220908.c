#define  _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>

//�ַ�ָ��

//int main()
//{
//	//char ch = 'q';
//	//char* pc = &ch;
//
//
//	//�������ǰɡ�hello bit������ַ��������ַ��ĵ�ַ�洢����ps��
//	char* ps = "hello bit";//ʵ�ʴ洢���ǡ�h'�ĵ�ַ
//	char arr[] = "hello bit";
//    *ps = 'w';//���ɸ���
//	printf("%c\n", *(ps+1));
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//    //��Ϊ�ַ���ָ�벢û�а��ַ������ȥ����������ָ��ָ��ͬһ���ַ���
//
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    const char* str3 = "hello bit.";//�����ַ���
//    const char* str4 = "hello bit.";
//
//
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");
//    else
//        printf("str3 and str4 are not same\n");
//
//    return 0;
//}

//int main()
//{
//	//ָ������
//	//����--�����д�ŵ���ָ��
//	//int* arr[3];//�������ָ�������
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(arr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//
//	int* arr[3] = { a,b,c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(arr[i] + j));//�ȼ���
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����ָ����ָ�������ָ��

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//
//	double* d[5];
//	double* (*pd)[5] = &d;//pd����һ��ָ��
//	
//	int arr[10] = { 1,2,3,4,5 };
//	int(*parr)[10] = &arr;//ȡ����������ĵ�ַ
//
//	//parr����һ������ָ��--���д�ŵ�������ĵ�ַ
//
//	//arr;//arr--����������Ԫ�ص�ַ--arr[0]�ĵ�ַ
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//
//	int* p1 = arr;
//	int(*p2)[10] = &arr;
//
//	printf("%p\n", arr);
//	printf("%p\n", &arr);//��ַһ�����Ͳ�һ��
//
//	printf("%p\n", p1);
//	printf("%p\n", p2 + 1);
//	return 0;
//}

//
//��������������Ԫ�صĵ�ַ
//��������������
//1.sizeof����������--��������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//2.&������--��������ʾ������������
//

//����ָ���ʹ��

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*pa) + i));//��������ָ��������ģ�һ�ν��������õ����������ַ��Ȼ���ٽ����ò��Ǿ���Ԫ��
//	}
//	return 0;
//}

//void print(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//
////
////����ָ���Ӧ��
//
//void print2(int(*p)[5],int r,int c)
//{
//	int i = 0;
//	int j = 0;
//	for(i=0;i<r;i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { { 1,2,3,4,5 }, { 2,3,4,5,6 }, { 3,4,5,6,7} };
//	//��ά�������������ʾ��Ԫ�صĵ�ַ
//	//��ά�������Ԫ���ǵ�һ��
//	//print1(arr,3,5);
//	print2(arr,3,5);
//	return 0;
//}

//int main()
//{
//	int arr[5];//��������
//
//
//	int(*parr2)[10];//����ָ�룬��ָ��ָ��һ�����飬����10��Ԫ�أ�ÿ��Ԫ����int
//
//
//	int(*parr[10])[5];//parr3��һ���������ָ�������
//	//�������ܹ����10������ָ��
//	//ÿ������ָ���ܹ�ָ��һ�����飬����5��Ԫ�أ�ÿ��Ԫ����int����
//}

//void test(int arr[])//ok?
//{}
//void test(int arr[10])//ok?
//{}
//void test(int* arr)//ok?
//{}
//void test2(int* arr[20])//ok?
//{}
//void test2(int** arr)//ok?
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}


//void test(int arr[3][5])//ok��
//{}
//void test(int arr[][])//ok��
//{}
//void test(int arr[][5])//ok��
//{}
////�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
////��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ�ء�
////�����ŷ������㡣
//void test(int* arr)//ok��0
//{}
//void test(int* arr[5])//ok��0
//{}
//void test(int(*arr)[5])//ok��1
//{}
//void test(int** arr)//ok��0
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}
