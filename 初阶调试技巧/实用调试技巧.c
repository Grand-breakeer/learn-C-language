//#define  _CRT_SECURE_NO_WARNINGS	
//#include <stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<time.h>
//#include<stdlib.h>
//#include<math.h>

//���ִ���---��λ����---ȷ������ԭ��---���������---�������²���

//debug���԰汾�ɵ����ļ�������
//release�����汾�ļ�����С


//void test()
//{
//	int a = 10;
//	int b = 2;
//	int c = a + b;
//}
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		test();
//		printf("%d\n", arr[i]);
//	}
//
//
//	return 0;
//}

//����׼��

//��ݼ�

//f5��������ֱ������

//f9����/ȡ���ϵ�---���f5ʹ�������жϴ�������
//���ڷ�����������


//f10�����//�����������ڲ���ϸ��

//f11������F10����ϸ�壨���Խ��뺯���ڲ���

//Ctrl+F5��ʼִ�в���ʽ


//���Գ���ʱ��ѯ�����Ϣ


//�������ö�ջ��Ӧ���Ǻ��������߼�����ջ--��ջ��
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}


//void test()
//{
//	int a = 10;
//	int b = 2;
//	int c = a + b;
//}
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		test();
//		printf("%d\n", arr[i]);
//	}
//
//
//	return 0;
//}

//����1
//���Խ���������д��󲢲����﷨����


//��ÿһ�����붼��Ԥ��ֵ������ʵ��ֵ�Ƚϲ��ܸ��õ��ҵ�����

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	//int ret = 1;//Ӧ����jѭ��������ret��ֵ
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		int ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


//1.i��arr�Ǿֲ������ֲ������Ƿ���ջ���ϵ�

//ջ����ַʹ��ϰ������ʹ�øߵ�ַ�ռ���ʹ�õ͵�ַ�ռ�

//2.���������±�������ַ�ɵ͵��߱仯��

//int main()
//{
//	
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 19; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	//�������н��--��ѭ��
//	return 0;
//}

//Ԥ����������
//ͨ������ļ��ɣ����ٴ���
//ʹ�� ����ʹ��sonst �������õı����� assert ��ӱ�Ҫ��ע�� ������������

//ģ��1ʵ��һ��strcpy

//д�ò���
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)//��һ����copy��Ҳ��ֵ��
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr[20] = "xxxxxxxxx";
//	char arr2[] = "hello";
//
//	my_strcpy(arr, arr2);
//	printf("%s\n", arr);
//	return 0;
//}