#define _crt_secure_no_warnings 1
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>


//���-��ַ-ָ��
//int main()
//{
//	int a = 10;//aռ�ĸ��ֽڵĿռ�
//	int *pa=&a;//�õ�����a���ĸ��ֽ��е�һ���ֽڵĵ�ַ
//	*pa = 20;
//	return 0;
//}

//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pf));
//	return 0;
//}

//ָ�����͵�����
//1.ָ�����;����ˣ�ָ������õ�Ȩ���ж��
//2.ָ�����;�����ָ����һ���߶�Զ��������
//3.
//int main()
//{
//	int arr[10] = { 10 };
//	int* p = arr;
//	char* pc = arr;
//
//	printf("%p\n", p);
//	printf("%p\n", p + 1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	//int a = 0x11223344;
//	///*int* pa = &a;
//	//*pa = 0;*/
//	//char* pc = &a;
//	//*pc = 0;//���ͷ����仯������Ȩ�޷����仯
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i)=1;
//	}
//	return 0;
//}

