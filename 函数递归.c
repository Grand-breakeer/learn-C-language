#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
//�����Լ������Լ��еݹ�
// 1.�ݹ�����������������������㲻�ټ���
// 2.ÿ�εݹ��Խ��Խ�ӽ���������
//int main()
//{
//	printf("hehe\n");
//	main();//���ݹ�
//	return 0;
//}//Stack overflow ջ���

//���δ�ӡһ������ǧλ��λʮλ��λ
//void print(unsigned int n)
//{
//	if (n > 9)//�ж�����
//	{
//		print(n / 10);//�����ݹ飬����
//	}
//	printf("%d\n", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);//print�������Դ�ӡ��������ÿһ������
//	return 0;
//}


//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}

//��������ڴ�
//1.ջ��---�ֲ������������β�
//2.����---��̬�ڴ����
//3.��̬��--ȫ�ֱ�������̬����


//ջ����ÿһ�κ������ö���Ҫ��ջ������ռ䣨ջ֡�ռ䣩
//��εݹ�����ĺ������ûᵼ��ջ���ռ���������ջ���

//д�����ʱ��
//1.�������ݹ飬��������������ÿ�εݹ�ƽ���������
//2.�ݹ��β���̫��

//ģ��ʵ��һ��strlen����
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//��������ʱ����ʵ��
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//
//
//int main()
//{
//	char arr[] = "bit";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

