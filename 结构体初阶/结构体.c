#define _crt_secure_no_warnings 1
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

//�ṹ�Ļ���֪ʶ
//�ṹ��һЩֵ�ļ��ϣ���Щ���ϳ�Ϊ��Ա����


//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//
//struct Stu
//{
//	//��Ա����
//	struct B sb;//�ṹ�������������һ���ṹ��ĳ�Ա
//	char name[20];//����
//	int age;//����
//	char id[20];
//}s1,s2;//s1\s2Ҳ�Ǵ����Ľṹ�����ֻ������ȫ�ֱ���
//
//
//int main()
//{
//	//s�Ǿֲ�����
//	struct Stu s={{'w',20,3.14},"��ɽ",30,"20200534"};//����
//	//����������
//	//. |  ->
//	
//
//	/*printf("%c\n", s.sb.c);
//	printf("%s\n", s.id);*/
//
//
//	//�ṹ��ָ��
//	struct Stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);
//
//	return 0;
//}

//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//
//struct Stu
//{
//	//��Ա����
//	struct B sb;//�ṹ�������������һ���ṹ��ĳ�Ա
//	char name[20];//����
//	int age;//����
//	char id[20];
//}s1, s2;//s1\s2Ҳ�Ǵ����Ľṹ�����ֻ������ȫ�ֱ���
//
//
////����ʱ��ѹջ���ṹ�����ᵼ��ջ��ռ�ù��������½�
//void print1(struct Stu t)//�ӿռ�ǶȻ��˷ѿռ�//��ʱ��Ƕ���˵����ͬ��ֵҲ���˷�ʱ��
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
//}
//
//void print2(struct Stu* ps)//�˷�������Ч�ʸߣ��ռ�ʱ��Ч�ʸ�
//{
//	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
//}
//
//int main()
//{
//	//s�Ǿֲ�����
//	struct Stu s = { {'w',20,3.14},"��ɽ",30,"20200534" };//����
//	//дһ��������ӡs
//	print1(s);
//
//	print2(&s);
//
//	return 0;
//}

//int Add(int x, int y)//ÿһ�������ĵ��ö������ڴ��ջ���Ͽ��ٿռ�
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	c = Add(a, b);
//}