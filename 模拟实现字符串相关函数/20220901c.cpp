#define  _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>


//ģ��ʵ��strcpy
//void my_strcpy(char* dest,const char* src)
//{
//	assert(src != NULL);//���ԣ��˴���ֹ�����ָ�룩���Ա����ṩ�ο���ϢЭ�����bug
//	assert(dest != NULL);
//	while (*dest++ = *src++)
//	{
//		//hello�Ŀ���
//	}
//	//\0�Ŀ���
//}
//
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxxx";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);//1.Ŀ��ռ����ʼ��ַ��2.Դ�ռ����ʼ��ַ
//	printf("%s\n", arr1);
//
//	return 0;
//}

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