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

//��̬�ڴ濪��
//malloc�����ڴ�����һƬ��ϵ�Ŀռ俪�ٳɹ�����void*����ʧ�ܷ���NULL��
//calloc free��ֻ���ͷŶ�̬�ڴ濪�ٵĿռ䣬����ͷŵĿռ��ǷǶ�̬�ڴ濪�ٵģ���free����Ϊ��δ����ģ� realloc

//ջ��
//�ֲ�����  �����β�

//��̬��
//ȫ�ֱ���
//��̬����

//int main()
//{
//	//���迪��10�����Ϳռ�--10*sizeof(int)
//	int arr[10];//ջ��
//	//��̬�ڴ濪��
//	int* p =(int*) malloc(10 * sizeof(int));
//	//ʹ����Щ�ռ��ʱ��
//	if (p == NULL)
//	{
//		printf("malloc error\n");
//		perror("main");
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d  ", p[i]);
//	}
//
//	//���տռ�
//	free(p);//�������p��Ϊ��ָ��
//	p = NULL;//�ֶ��ÿ�
//	//malloc��freeһ���ǳɶԳ��ֵ�
//	return 0;
//}

//calloc�����ڴ濪��һ��ָ��Ԫ�����͸��������鲢������Ԫ������Ϊ0��

//int main()
//{
//	//int* p = (int*)malloc(40);
//	int* p = calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int* p = calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("main");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 5;
//	}
//	//�����ռ��С
//	//realloc�����ռ�
//	//��������ŵĿռ乻�����ú���Ŀռ�
//	//��������ŵĿռ䲻���þ���һƬ�ܹ���������Ԫ�صĿռ�
//	//�Ҳ������ʵĿռ䷵�ؿ�ָ�룬��Ҫ����
//	int*ptr=(int*)realloc(p, 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	return 0;
//}

//realloc�����ָ��Ĺ���������malloc

//�Ϳ��԰�ͨѶ¼����Ϊ��̬�����汾

//��̬�ڴ���䳣������
//1.��NULLָ��Ľ�Ӧ�ò���
//���ڴ溯������ָ��ʱӦ�öԺ������ص�ָ������пմ���
//int main()
//{
//	int* p=malloc(100000000000000);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	return 0;
//}

//2.�Զ�̬���ٵĿռ�Խ�����

//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 40; i++)
//	{
//		*(p + i) = i;//������Խ�����
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//3.free�Ƕ�̬���ٵĿռ�
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	//ʹ����
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//4.free�ͷŶ�̬�ڴ��е�һ����

//int main()
//{
//	int* p = malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p++ = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//5.��ͬһ�鶯̬�ڴ濪�ٵĿռ����ͷ�

//int main()
//{
//	int* p = (int*)malloc(100);
//	//ʹ��
//	//�ͷ�
//	free(p);
//	p = NULL;
//	//�ͷ�
//	free(p);
//	return 0;
//}

//6.��̬���ٵĿռ������ͷ�
//void test()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		return;
//	}
//	//ʹ��
//	
//	//�����ͷŵ����ڴ�й©
//}
//int main()
//{
//	test();
//	//......
//	return 0;
//}

//��̬���ٵĿռ����ֻ��շ�ʽ
//1.����free
//2.�������


//������
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//1.str����GetMemory������ʱ����ֵ���ݣ�����GetMemory�������β�
// p��str��һ����ʱ��������GetMemory�����ڲ���̬����ĵ�ַ�������p
// �У�����Ӱ����ߵ�str�����Ե�GetMemory��������֮��str��Ȼ��NULL������strcpy��
// ʧ��
// 
// ��GetMemory��������֮���β�p���٣�ʹ�ö�̬���ٵ�100���ֽڴ����ڴ�й©
// �޷��ͷš�
//

//��ȷ��д��1
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str=GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);//printf���ݵ����ַ����׵�ַ������ʵ�ʵ��ַ���
//}
//int main()
//{
//	Test();
//	return 0;
//}

//��ȷ��д��2
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
// free(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//�ڶ���
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;//����ջ�ռ��ַ������
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//GetMemory�����ڲ���������������ջ�ϴ����ĳ��˺�����p����
//�Ŀռ�ͻ����˲���ϵͳ���ͨ�����صĵ�ַ�����ǷǷ���ַ
//�ٶ�����ʾ��ǷǷ�����

//������
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//free��p��;
//}//ȱ��free
//
//int main()
//{
//	Test();
//	return 0;
//}

//������
void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//free֮��һ��Ҫ�ÿ�
	//str=NULL;
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}
int main()
{
	Test();
	return 0;
}
