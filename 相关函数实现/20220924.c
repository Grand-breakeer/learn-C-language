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

//strstr���ҵ�һ�γ�����Ѱ���ַ������������׵�ַ��δ�ҵ����ؿ�ָ��

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//
//	if (*str2 == '\0')
//	{
//		return (char*)str1;
//	}
//	while (*str1)
//	{
//		if (*str1 == *str2)
//		{
//			const char* s1 = str1;
//			const char* s2 = str2;
//			while (*s2&&*s1==*s2)
//			{
//				s1++;
//				s2++;
//				if (*s2 == '\0')
//				{
//					return (char*)str1;
//				}
//			}
//		}
//		str1++;
//	}
//
//	return NULL;
//}
//
//char* pg_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cp = str1;
//
//	if (*str2 == '\0')
//	{
//		return (char*)str1;
//	}
//
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//
//}
//
//int main()
//{
//	char arr1[] = "abbcdefabcdef";
//	char arr2[] = "bcd";
//
//	char* ret = pg_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("�ҵ���:%s\n", ret);
//	}
//
//	return 0;
//}

//KMP�㷨�����ַ��������㷨

//strtok�и��ַ�������

//int main()
//{
//	char arr[] = "zpw@bitedu.tech";
//	char* p = "@.";
//	char tmp[20] = {0};
//	strcpy(tmp, arr);
//
//	char* ret = NULL;
//	for (ret = strtok(tmp, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		//staticʹ�������м��书��
//		printf("%s\n", ret);
//	}
//
//	//ret=strtok(tmp, p);
//	//printf("%s\n", ret);
//	//ret=strtok(NULL, p);
//	//printf("%s\n", ret);
//	//ret=strtok(NULL, p);
//	//printf("%s\n", ret);
//	return 0;
//}

//strerror
//ʵ�ÿ⺯����ʱ��
//���ÿ⺯��ʧ�ܵ��ǣ��������ô����룬�����뷵��int errno
//��ʱ�Ϳ�����strerror����������,���������Ϣ
//int main()
//{
//	//printf("%s\n", strerror(0));
//	//printf("%s\n", strerror(1));
//	//printf("%s\n", strerror(2));
//	//printf("%s\n", strerror(3));
//	//printf("%s\n", strerror(4));
//	//printf("%s\n", strerror(5));
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}