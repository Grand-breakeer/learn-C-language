#define  _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>
#include<stdlib.h>

//strlen�������ַ�������
//1.�������汾
//2.�ݹ�İ汾
//3.ָ���ȥָ��
//size_t my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	//char arr[] = "abc";
//	char arr[] = "abc" ;//�ַ����鲻����\0����
//	int len = my_strlen(arr);//������\0֮ǰ���ַ�����
//
//	printf("%d\n", len);
//
//	return 0;
//}


//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)//strlen�ķ���������size_t
//		//�����޷�������
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//	return 0;
//}

//strcopy�����ַ���

//int main()
//{
////	char arr[20] = { 0 };//arrָ��̶����ɸ���
////	char* p = "hello";
////
////	strcpy(arr, "hello");
////
////	printf("%s\n", arr);
////
////
////	char arr2[] = { 'a','b','c' };
//	char arr[5] = "####";
//	char* p = "hello world";
//
//	strcpy(arr, p);//Խ�������//\0����ֹͣ��������ֹ�ļ�
//	printf("%s\n", arr);
//
//	return 0;
//}

//int main()
//{
//	char* arr = "###########";//��ŵ�ַ����Ϊ���޸ĵ�
//	char* p = "hello world";
//
//	strcpy(arr, p);
//
//	printf("%s\n", arr);
//	return 0;
//}

//strcat�ַ���׷��
//
//int main()
//{
//	char arr[20] = "hello ";//��֤Ŀ��ռ��㹻�ҽ�β��\0,���޸�
//	char arr2[] = "world";
//
//	strcat(arr, arr2);
//	printf("%s\n", arr);
//
//	return 0;
//}


//ģ��ʵ��strcat

//char* my_strcat(char* dest, char* src)
//{
//	//1.�ҵ�dest��\0
//	assert(dest && src);
//	int* tmp = dest;//������ʼ��ַ
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return tmp;
//}
//
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	
//
//	printf("%s\n", my_strcat(arr1, arr2));
//
//	return 0;
//}

//int main()
//{
//	char arr[20] = "abcd";
//	strcat(arr, arr);//�Ҳ���\0��Ϊ��������
//	printf("%s\n", arr);
//
//	return 0;
//}


//strcmp�Ƚ������ַ����Ĵ�С
//int main()
//{
//	char* p = "obc";
//	char* q = "abcdef";
//	if (p > q)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//
//
//	return 0;
//}



//int main()
//{
//	char* p = "abcdef";//���ڷ���1С�ڷ���-1���ڷ���0
//	char* q = "abcdef";
//	if (strcmp(p,q))
//	{
//		printf(">\n");
//	}
//	else if(strcmp(p,q)<0)
//	{
//		printf("<\n");
//	}
//	else
//	{
//		printf("=\n");
//	}
//
//	return 0;
//}

//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 || *s2)//������ָ��
//	{
//		if (*s1 > *s2)
//		{
//			return 1;
//		}
//		else if (*s1 < *s2)
//		{
//			return -1;
//		}
//		if (*s1 == '\0'&&*s2)
//		{
//			return 1;
//		}
//		else if (*s1 && *s2 == '\0')
//		{
//			return -1;
//		}
//		s1++;
//		s2++;
//	}
//	return 0;
//}
//
//int main()
//{
//	char* p = "abcdef";
//	char* q = "abcdef";
//	int ret = my_strcmp(p, q);
//
//	if (ret > 0)
//	{
//		printf("p>q\n");
//	}
//	else if (ret < 0)
//	{
//		printf("p<q\n");
//	}
//	else
//	{
//		printf("p=q\n");
//	}
//	return 0;
//}

//strcpy-
//strcat-
//strcmp-
//���Ȳ������Ƶ��ַ���

//strncpy
//strncat
//strncmp
//���������Ƶ��ַ���

//strncpy

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "qwer";
//	strncpy(arr1, arr2, 2);//����������0���
//	printf("%s\n", arr1);
//
//	return 0;
//}

//strncat
//׷��ָ��n���ַ���

//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//
//	strncat(arr1, arr2, 3);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

//strncmp
//�Ƚ�ָ����n���ַ�

//int main()
//{
//	char* p = "abcdef";
//	char* q = "abcqwert";
//	//int ret = strcmp(p, q);
//
//	int ret = strncmp(p, q, 3);
//	printf("%d\n", ret);
//
//	return 0;
//}