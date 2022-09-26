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

//strlen函数求字符串长度
//1.计数器版本
//2.递归的版本
//3.指针减去指针
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
//	char arr[] = "abc" ;//字符数组不是以\0结束
//	int len = my_strlen(arr);//数的是\0之前的字符长度
//
//	printf("%d\n", len);
//
//	return 0;
//}


//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)//strlen的返回类型是size_t
//		//就是无符号类型
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//	return 0;
//}

//strcopy复制字符串

//int main()
//{
////	char arr[20] = { 0 };//arr指向固定不可更改
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
//	strcpy(arr, p);//越界访问了//\0就是停止拷贝的终止文件
//	printf("%s\n", arr);
//
//	return 0;
//}

//int main()
//{
//	char* arr = "###########";//存放地址必须为可修改的
//	char* p = "hello world";
//
//	strcpy(arr, p);
//
//	printf("%s\n", arr);
//	return 0;
//}

//strcat字符串追加
//
//int main()
//{
//	char arr[20] = "hello ";//保证目标空间足够且结尾是\0,可修改
//	char arr2[] = "world";
//
//	strcat(arr, arr2);
//	printf("%s\n", arr);
//
//	return 0;
//}


//模拟实现strcat

//char* my_strcat(char* dest, char* src)
//{
//	//1.找到dest的\0
//	assert(dest && src);
//	int* tmp = dest;//保留初始地址
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
//	strcat(arr, arr);//找不到\0因为被覆盖了
//	printf("%s\n", arr);
//
//	return 0;
//}


//strcmp比较两个字符串的大小
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
//	char* p = "abcdef";//大于返回1小于返回-1等于返回0
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
//	while (*s1 || *s2)//当两个指针
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
//长度不受限制的字符串

//strncpy
//strncat
//strncmp
//长度受限制的字符串

//strncpy

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "qwer";
//	strncpy(arr1, arr2, 2);//超出部分用0填充
//	printf("%s\n", arr1);
//
//	return 0;
//}

//strncat
//追加指定n个字符串

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
//比较指定的n个字符

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

//strstr查找第一次出现所寻找字符串，并返回首地址，未找到返回空指针

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
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了:%s\n", ret);
//	}
//
//	return 0;
//}

//KMP算法——字符串查找算法

//strtok切割字符串函数

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
//		//static使函数具有记忆功能
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
//实用库函数的时候
//调用库函数失败的是，都会设置错误码，错误码返回int errno
//此时就可以用strerror解析错误码,翻译错误信息
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