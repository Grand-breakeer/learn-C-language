#define  _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>


//ģ��ʵ��strcpy
//��srcָ������ݿ����Ž�destָ��Ŀռ���
//�ӱ����Ͻ���ϣ��destָ������ݱ��޸ģ�srcָ������ݲ��ɱ��޸�
//strcpy��ʵ���ص���Ŀ��ռ����ʼ��ַ


char* my_strcpy(char* dest,const char* src)
{
	assert(src != NULL);//���ԣ��˴���ֹ�����ָ�룩���Ա����ṩ�ο���ϢЭ�����bug
	assert(dest != NULL);
	char* ret = dest;
	while (*dest++ = *src++)
	{
		;//hello�Ŀ���
	}
	//\0�Ŀ���
	return ret;

}//��׼�⺯����ģ��ʵ��


//����Ľ�׳�ԣ�³���ԣ������ݴ��ʱ�������


//ģ��ʵ��һ��strlen���ַ�������
size_t my_strlen(const char* str)//size_t������size_t
{
	assert(str != NULL);
	size_t len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return len;
}

int main()
{
	char arr1[20] = "xxxxxxxxxxxxxxx";
	char arr2[] = "hello";
	//1.Ŀ��ռ����ʼ��ַ��2.Դ�ռ����ʼ��ַ
	printf("%s\n", my_strcpy(arr1, arr2));
	printf("%d\n", my_strlen(arr1));

	return 0; 
}

//
//int main()
//{
//	//1.
//	//int num = 10;
//	//int* p = &num;
//	//*p = 20;
//	//printf("%d\n", num);
//	
//	//2.
//	//const���α��������������Ϊ�����������ܱ��޸ģ����������Ǳ���
//	const int num = 10;
//
//	//const int* p = &num;
//	int* const p = &num;//���������*���ұߣ�����ʱָ��������ܱ��ı䣬����ָ�����ݿ���
//	int n = 100;
//	//const����ָ�������ʱ��
//	
//	//const�������*����ߣ����ε���*p����ʾָ��ָ�����ݣ��ǲ���ͨ��ָ�����ı��
//	//        ָ�������������޸�
//	*p = 20;
//	p = &n;
//	
//	printf("%d\n", num);
//	return 0;
//}


//��������

//1.�﷨����

//2.���Ӵ���
//Ҫ��������Ų�����Ҫ���������д����
//extern���������ⲿ����

//3.���д���
//�������ԣ��𲽶�λ���⣬����

