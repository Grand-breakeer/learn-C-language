#define _crt_secure_no_warnings 1
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

//���ִ���---��λ����---ȷ������ԭ��---���������---�������²���

//debug���԰汾�ɵ����ļ�������
//release�����汾�ļ�����С


void test()
{
	int a = 10;
	int b = 2;
	int c = a + b;
}


int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = i + 1;
	}
	for (i = 0; i < sz; i++)
	{
		test();
		printf("%d\n", arr[i]);
	}


	return 0;
}

//����׼��

//��ݼ�

//f5��������ֱ������

//f9����/ȡ���ϵ�---���f5ʹ�������жϴ�������
//���ڷ�����������


//f10�����//�����������ڲ���ϸ��

//f11������F10����ϸ�壨���Խ��뺯���ڲ���

//Ctrl+F5��ʼִ�в���ʽ


//���Գ���ʱ��ѯ�����Ϣ
