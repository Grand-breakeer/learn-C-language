//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<time.h>
//#include<stdlib.h>
//#include<math.h>
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

//�ݹ�͵���
//��n�Ľ׳�
//�ݹ�
//int s(int n)
//{
//	if (n > 1)
//	{
//		return n*s(n - 1);
//	}
//	else
//		return n;
//}
//int main()
//{
//	int a = 0;
//	
//	scanf("%d", &a);
//	printf("%d", s(a));
//	return 0;
//}
//����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	scanf("%d", &a);
//	for (b = 1; b <= a; b++)
//	{
//		c = c * b;
//	}
//	printf("%d", c);
//	return 0;
//}

//���n��쳲�������
//int count = 0;
//int s(n)//Ч��̫�ͽ������ظ������ļ���
//{
//	//ͳ�Ƶ�����쳲��������ļ������
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n > 2)
//	{
//		return s(n-1)+s(n-2);
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", s(a));
//	printf("%d", count);
//	return 0;
//}
//ѭ�����Ч�ʸ�
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	int d = 1;
//	int e = 0;
//	scanf("%d", &a);
//	if (a > 2)
//	{
//		for (b = 3; b <= a; b++)
//		{
//			e = c;
//			c = c + d;
//			d = e;	
//		}
//		printf("%d", c);
//	}
//	else
//	{
//		printf("%d", 1);
//	}
//	return 0;
//}

//����������
//int s(int n)
//{
//	while (n >= 1)
//	{
//		n = n - 1;
//		return 2 * s(n) + 1;
//		
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", s(a));
//	return 0;
//}

//������̨
//int p(int n)
//{
//	if (n > 1)
//	{
//		return p(n - 1) + p(n - 2);
//	}
//	return 1;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", p(a));
//	return 0;
//}


//1��100�г����˶��ٸ�����9
//int main()
//{
//	int a = 0;
//	int count = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a/10==9)
//		{
//			count++;
//		}
//		if (a % 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}


//����1/1-1/2+1/3-1/4........+1/99-1/100
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum -= 1.0 / i;
//		}
//		else
//		{
//			sum += 1.0 / i;
//		}
//	}
//	printf("%f", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag=- flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//��ʮ���������ֵ
//int main()
//{
//	int arr[] = { -15,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[1];//ֱ�Ӵ���������һ��Ԫ��
//	int i = 0;
//	for (i = 0; i <= 9; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//����˷��ھ���
//int main()
//{
//	int i = 1;
//	//��ӡ����
//	for (i = 1; i <= 9; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d  ", i, j, i * j);//2d��ӡ��λ-Ϊ�����
//		}
//		printf("\n");
//	}
//	return 0;
//}


//���ű��ʽ���Ǵ��������ұߵ�Ԭ��

//int main()
//{
//	int i = 0;
//	int a = 0;
//	scanf("%d", &a);
//	for (i = 1; i <= a; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//
//		{
//			printf("%d*%d=%-6d", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
