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


int main()
{
	int* p = calloc(10, sizeof(int));
	if (p == NULL)
	{
		perror("main");
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 5;
	}
	//�����ռ��С
	//realloc�����ռ�
	//��������ŵĿռ乻�����ú���Ŀռ�
	//��������ŵĿռ䲻���þ���һƬ�ܹ���������Ԫ�صĿռ�
	//�Ҳ������ʵĿռ䷵�ؿ�ָ�룬��Ҫ����
	int*ptr=(int*)realloc(p, 20 * sizeof(int));
	if (ptr != NULL)
	{
		p = ptr;
	}
	for (i = 0; i < 20; i++)
	{
		printf("%d ", p[i]);
	}
	return 0;
}
