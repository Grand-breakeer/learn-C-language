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

//�ṹ����ڴ����
//�ṹ���ڴ�������
//�ṹ���һ����Ա�ڽṹ�����ƫ����Ϊ��ĵ�ַ��
//������ԱҪ���뵽ĳ�����֣������������������ĵ�ַ����
//������=������Ĭ�ϵ�һ����������ó�Ա��С�Ľ�Сֵ
//VS��Ĭ��Ϊ8  Linuxƽ̨��Ĭ�϶���������
//�ṹ����ܴ�СΪ�ṹ�����г�Ա������������������
//���Ƕ���˽ṹ�壬��Ƕ�׽ṹ����뵽��������������������
//��ʱ�ṹ��Ĵ�С���ǰ���Ƕ�׽ṹ������������������������

//struct S {
//	int i;
//	char c;
//};
//
//struct S2 {
//	char c1;
//	int i;
//	char c2;
//};
//
//struct S3 {
//	char c1;
//	int i;
//	double d;
//};
//
//struct S4 {
//	char c1;
//	char c2;
//	int i;
//};
//
//struct S5 {
//	int d;
//	char c;
//	int i;
//};
//
//struct S6 {
//	char c1;
//	struct S5 s5;
//	double d;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s));//8
//
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//12
//
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof(s3));//16
//
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));//8
//
//	struct S5 s5;
//	printf("%d\n", sizeof(s5));//16
//
//	struct S6 s6;
//	printf("%d\n", sizeof(s6));//24
//	return 0;
//}

//Ϊ��Ҫ�����ڴ����
// 1.ƽ̨ԭ��(��ֲԭ��)���������е�Ӳ��ƽ̨���ܷ��������ַ�ϵ��������ݵģ�
// ĳЩӲ��ƽֻ̨����ĳЩ��ַ��ȡĳЩ�ض����͵����ݣ������׳�Ӳ���쳣�� 
//2.����ԭ�����ݽṹ(������ջ)Ӧ�þ����ܵ�����Ȼ�߽��϶��롣
/*�����ȡ�������ÿռ任ȡʱ��*/

//ͨ������˳������ڴ��˷�
//�ռ�С���ֽھ���������һ��

//�޸�Ĭ�϶�����
//��Ĭ�϶�������Ϊ2

//#include<stddef.h>
////#pragma pack(1)//8//2//1
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));//12//8//6
//
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, c2));
//	return 0;
//}

//offsetof���ʵ�֣�����ĳ��Ա�������ʼ��Ա��ƫ����

//�ṹ�崫����

//struct S {
//	int data[1000];
//	int num;
//};
//
//struct S s = { {1,2,3,4},1000 };
//
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
//
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//
//int main()
//{
//	print1(s);
//	print2(&s);
//	return 0;
//}

//���ε�ʱ���ѹջ������ṹ�崫�δ���ַ

//C����λ�εĸ�������ڽṹ��

//λ�γ�Ա�����ǣ�int ,unsigned int ,signed int
//λ�γ�Ա�����������ð������

//����

//struct A {
//
//	int _a : 2;//_a��Առ����bitλ
//	int _b : 5;//_b��Առ5��bitλ
//	int _c : 10;//_c��Առ10��bitλ
//	int _d: 30;//_d��Առ30��bitλ
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));//8
//	return 0;
//}

//λ���кܶ಻ȷ�����أ�����ע�ؿ���ֲ�Եĳ���Ӧ�ñ���ʹ��λ��

//struct S {
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 6;
//};
//int main() {//��������VS
//	struct S s = { 0 };//�۲�λ�εĿռ����
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}

//λ���е�int�Ǳ���Ϊ�з��Ż����޷����ǲ�ȷ����
//λ���е����λ����ȷ��
//λ���еĳ�Ա���ڴ��д������ҷ��仹�Ǵ�����������ǲ�ȷ����
//��һ���ṹ���������λ�Σ��ڶ���λ�γ�Ա�Ƚϴ��޷������ڵ�һ��λ��ʣ���λ�ǣ����������������ǲ�ȷ����
//λ������ڽṹ����Խ�ʡ�ռ䵫�ǿ���ֲ�Ժܲ�
//


//ö������
//ö�����͵Ķ���

//enum Color {
//	//��ɫ
//	red,//ö�����͵Ŀ���ȡֵ����һ�ֳ�������
//	green,
//	blue
//};
//int main()
//{
//	//cpp�﷨�������ϸ�
//	enum Color c = blue;
//	printf("%d\n", red);
//	printf("%d\n", green);
//	printf("%d\n", blue);
//	return 0;
//}

//void menu()
//{
//	printf("**********************************");
//	printf("********1.add     2.sub***********");
//	printf("********3.mul     4.div***********");
//	printf("*************0.exit***************");
//}
//enum Option {
//	EXIT,
//	ADD,
//	SUB,
//	MUL,
//	DIV
//};
//
//int main()
//{
//	int input = 0;
//	do {
//		menu;
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch(input) {
//		case ADD:
//			break;
//		case SUB:
//			break;
//		case MUL:
//			break;
//		case DIV:
//			break;
//		case EXIT:
//			break;
//		default:
//			break;
//		}
//	} while (input);
//	return 0;
//}
//ö�ٵ��ŵ�
//1.���Ӵ���Ŀɶ��ԺͿ�ά����
//2.�Զ���define����ı�ʶ��ö�����������ͼ�飬�����Ͻ�
//3.���ڵ���
//4.��ֹ������Ⱦ
//ʹ�÷������һ���Զ���������

//ö�ٶ���ĳ�����int��

//���ϣ������壩
//����Ҳ��������Զ�������
//���ĳ�Ա��ȫ���ܹ���ͬһ��ռ�
//����������Ա�Ĵ�С
//��ͬһʱ��ֻ��ʹ�����е�һ����Ա
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;//���������
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));//i��c������ͬһ��ռ�
//	printf("%d\n", sizeof(u));
//	return 0;
//}

//�����������жϻ�����С�˴洢

//int check_sys()
//{
//	int a = 1;
//	if (*(char*)&a == 1) {
//		return 1;
//	}
//	else {
//		return 0;;
//	}
//}
int check_sys()
{
	union U {
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
	//�����Ծ���С��
	//����0���Ǵ��
}

int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("С��");
	}
	else {
		printf("���");
	}
	return 0;
}