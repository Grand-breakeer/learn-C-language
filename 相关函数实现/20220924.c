#define  _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>
#include<stdlib.h>

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