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


//Ұָ��--ָ��ָ���λ�ò���֪������ģ�����ȷ�ģ�
//int main()
//{
//	//�����p����Ұָ��
//	//int* p;//p��һ���ֲ���ָ��������ֲ���������ʼ��Ĭ�����ֵ
//	//*p = 20;//�Ƿ������ڴ�
//	// 
//	//2.Խ�����
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}

//ָ��ָ��Ŀռ��ͷ������Ұָ��
//int* test()
//{
//	int a = 10;
//	return &a;//����������ʱa����Ӧ�ĵ�ַ�ͷ������������ָ��Ŀռ��ͷ�
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}


//ָ��ĳ�ʼ��

//int main()
//{
//	//����֪��pӦ�ó�ʼ��Ϊʲô��ַ��ʱ��ֱ�ӳ�ʼ��ΪNULL
//	int* p = NULL;
//	//��ȷ֪����ʼ����ֵ
//	int a = 10;
//	int* pa = &a;
//
//	//C���Ա����ǲ����������Խ����Ϊ��
//	//ָ��ռ��ͷż�ʱ��NULL
//	//ָ��ʹ��ǰ�����Ч��
//
//	int* p = NULL;
//	if (p != NULL)
//	{
//		*p = 10;
//	}
//	return 0;
//}

//ָ������
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	//ָ��Ĺ�ϵ����
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//
//
//	return 0;
//}

//ָ���ȥָ��

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char c[5];
//	//ָ����ָ�������ǰ��������ָ��ָ��ͬһ�ռ�
//	printf("%d\n", &arr[9] - &c[0]);
//	//printf("%d\n", &arr[9] - &arr[0]);//ָ���ȥָ��õ�����ָ����ָ��֮���Ԫ�ظ���
//	return 0;
//}

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
//

//ָ����ָ�����
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	//strlen(); - ���ַ�������
//	//�ݹ�
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}

//ָ���ָ��������

//C���Ա�׼������ָ�������ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ����ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽ�




//ָ�������

//1.������
//��Ԫ�ص��׵�ַ
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		/*printf("%p<=====>%p\n", &arr[i], p + i);*/
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//������
//	printf("%d\n", arr[2]);
//	printf("%d\n", p[2]);
//
//	printf("%d\n", 2[arr]);
//	printf("%d\n", 2[p]);
//
//	//arr[2]<===>*(arr+2)<====>*(p+2)<====>*(2+p)<====>*(2+arr)==2[arr]
//	//2[arr]<===>*(
//	return 0;
//}

//����ָ��


//int main()
//{
//	int a = 0;
//	int* pa = &a;//pa��ָ���������һ��һ��ָ��
//	//ppa��һ������ָ�����
//	int* *ppa = &pa;//pa��һ��������&pa����ȡ��pa�ĵ�ַ
//	return 0;
//}

//ָ������--����

//int main()
//{
//	int arr[10];//��������-������͵����������������
//	char ch[5];//�ַ�����--��ŵ����ַ�
//	//ָ������--���ָ�������
//
//	int* parr[5];//����ָ�������
//
//	return 0;
//}