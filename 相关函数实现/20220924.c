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

char* my_strcat(char* dest, char* src)
{
	//1.找到dest的\0
	assert(dest && src);
	int* tmp = dest;//保留初始地址
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return tmp;
}

int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world";
	

	printf("%s\n", my_strcat(arr1, arr2));

	return 0;
}