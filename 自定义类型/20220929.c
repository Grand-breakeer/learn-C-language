#define  _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>
#include<stdlib.h>
#include<errno.h>
#include<ctype.h>

/*�ṹ����һЩֵ�ļ���*/

//�ṹ��������͵�����

//struct tag {
//	int a;
//	float b;
//	/*.....*/
//
//};

//�ṹ��������һЩ���и���Ԫ�صĶ�����ж��壬�����������

//struct Book {
//	char name[20];
//	int price;
//	char id[12];
//}b4,b5,b6;//b4,b5,b6��ȫ�ֽṹ�����
//
////�ڽṹ��������ʱ����Բ���ȫ����
////�����ṹ������
////��������֮��ֻ��ʹ��һ����Ϊ��û�нṹ���ǩ
//struct
//{
//	char c;
//	int i;
//	char ch;
//	double d;
//}s;
//
//struct
//{
//	char c;
//	int i;
//	char ch;
//	double d;
//}*ps;
//
////�ṹ���������
//
//struct A {
//
//	int i;
//	char c;
//};
//
//struct B {
//
//	char c;
//	struct A sa;
//	double d;
//};

//struct N {
//	int d;
//	struct N n;
//};

//���ݽṹ���Ա��е�����

//typedef struct Node {//����typedef���ԶԽṹ��������
//	int data;
//	struct Node* next;//�����һ���򵥵Ľ��
//}Node;
//
//
//int main()
//{
//	//�����b1,b2,b3�Ǿֲ��ṹ�����
//	//struct Book b1;
//	//struct Book b2;
//	//struct Book b3;
//	//д��������
//	//�ڱ������ĽǶȻᱻ���Ϊ������ͬ������
//	return 0;
//}

//�ṹ������Ķ���ͳ�ʼ��

//typedef struct {
//	int data;
//	Node* next;
//}Node;
//
//int main()
//{
//	Node n;
//	return 0;
//}//���������

//struct S
//{
//	char c;
//	int i;
//}s1,s2;//�ṹ��Ķ���
//
//struct B
//{
//	double d;
//	struct S s;
//	char c;
//};
//
//int main()
//{
//	struct S s3 = { 'x',20 };//�ṹ��ĳ�ʼ��
//	struct B sb = { 3.14,{'a',30},'q' };
//	//. ->
//	printf("%lf %c %d %c\n", sb.d, sb.s.c, sb.s.i, sb.c);
//	return 0;
//}

