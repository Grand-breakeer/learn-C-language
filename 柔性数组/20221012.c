#define  _crt_secure_no_warnings	
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


//�������飺c99������ṹ������һ��Ԫ����δ֪��С������
//struct S{
//	int n;
//	int arr[];//��С��δ֪��
//	//��������Ϊ��������
//	//int arr[0]//Ҳ��������д
//};
//
//int main()
//{
//	//struct S s = { 0 };
//	//printf("%d\n", sizeof(s));
//
//	//����arr�Ĵ�С��ʮ������
//	struct S*ps=malloc(sizeof(struct S)+10*sizeof(int));
//	//ģʽΪ��������ǰ�Ĵ�С+������������Ĵ�С
//	//������realloc����������С���Գ�Ϊ��������
//	ps->n = 10;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S*ptr=realloc(ps, sizeof(struct S) + 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	//ʹ��
//
//	//�ͷ�
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//��������ĳ�Ա֮ǰ����������һ����Ա
//sizeof���صĽṹ�Ĵ�С��������������Ĵ�С
//������������Ľṹͳһ1��malloc���ٿռ䣬


//��ָ��ʵ����������
//struct S {
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S*ps=(struct s*)malloc(sizeof(struct S));
//	if (ps == NULL)
//	{
//		return 1;
//	}
//	ps->arr = (int*)malloc(10 * sizeof(int));
//	if (ps->arr == NULL)
//	{
//		return 2;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	//����
//	int*ptr=realloc(ps->arr, 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//
//	//�ͷ�
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//���������鿪�ٿռ���Լ���malloc��ʹ�ã������ڴ���Ƭ�Ĳ���
//����������ڴ�������ʣ����Ը��õ�ά���ڴ棬һ���̶�����߷����ٶ�
//�����ͷ��ڴ�
//�ֲ���ԭ��
//1.�ռ�ֲ��ԣ���ʹ��һ���ڴ��ʱ��������кܴ����ʹ�������ܱ��ڴ�
// ��������ͺܺõ���Ӧ����һ������



