#define  _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>
#include<stdlib.h>


/*动态内存开辟
p=malloc
使用
释放：free  将空间归还并不会将p置为空指针
仍然可以指向原地址，但是使用时为非法访问*/



/*int(*(*F)(int, int))(int);
分析；
这是一个函数指针参数是两个整数
返回类型为函数指针该指针指向一个参数为整数的函数
*/

/*杨氏矩阵：每行数字递增，每列数字递增
编写程序查找其中是否存在某一个数
时间复杂度小于O（N）(数据结构的内容)*/
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	while (1)
//	{
//		
//		if (arr[i][2] < 7)
//		{
//			i++;
//		}
//		else
//		{
//			int j = 0;
//			for (j = 0; j < 3; j++)
//			{
//				if (arr[i][j] == 7)
//				{
//					printf("所查找的元素在第%d行%d列\n", i + 1, j + 1);
//					break;
//				}
//			}
//			break;
//		}
//	}
//	/*int i = 0;
//	int j = 0;
//	int a = 8;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (arr[i][j] == a)
//			{
//
//			}
//		}
//	}*/
//	return 0;
//}

//int find_num(int arr[3][3], int* r, int* c, int k)
//{
//	int x = 0;
//	int y = *c - 1;
//	while (x < *r && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if(arr[x][y]>k)
//		{
//			y--;
//		}
//		else
//		{
//			*r = x + 1;
//			*c = y + 1;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int r = 3;
//	int c = 3;
//	int ret = find_num(arr, &r, &c, k);
//	if (ret == 1)
//	{
//		printf("找到了!!!\n");
//		printf("元素在第%d行%d列\n", r, c);
//	}
//	else
//	{
//		printf("找不到!!!\n");
//	}
//	return 0;
//}

//依次转换思想
//void string_left_rotate(char* str, int k)
//{
//	int i = 0;
//	int len = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *str;
//
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		*(str + len - 1) = tmp;
//	}
//}
//int main()
//{
//	char arr[10] = "ABCDEF";
//	int k = 2;
//	string_left_rotate(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

//三次逆序思想
//void revers(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void string_left_rotate(char* str, int k)
//{
//	revers(str,str+k-1);
//	revers(str + k, str + strlen(str) - 1);
//	revers(str, str + strlen(str) - 1);
//}
//int main()
//{
//	char arr[10] = "ABCDEF";
//	int k = 2;
//	string_left_rotate(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

//int is_string_rotate(char* str1, char* str2)
//{
//	int i = 0;
//	int n = strlen(str1);
//	for (i = 0; i < n; i++)
//	{
//		char tmp = *str1;
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str1 + j) = *(str1 + j + 1);
//		}
//		*(str1 + n - 1) = tmp;
//
//		if (strcmp(str1, str2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "AABCD";
//	char arr2[] = "BCDAA";
//	int ret = is_string_rotate(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}

//void my_getword(char* x,char* z, int y)
//{
//	int ret = 0;
//	while (*x != ' '&&ret<y)
//	{
//		*z = *x;
//		z++;
//		x++;
//		ret++;
//	}
//	*(z + 1) = '\0';
//}
//
//int main()
//{
//	char arr1[40] = "";
//	char arr[40] = "";
//	gets(arr1);
//	int l = strlen(arr1);
//	my_getword(arr1,arr, l);
//	
//	return 0;
//}

//
//int main()
//{
//	char arr1[20] = "AABCD";
//	char arr2[] = "BCDAA";
//
//	return 0;
//}

//int is_string_rotate(char* str1, char* str2)
//{
//	if (strlen(str1) != strlen(str2))
//	{
//		return 0;
//	}
//	//1.str1字符串后面追加一个str1
//	//AABCDAABCD
//	int len = strlen(str1);
//	strncat(str1, str1, len);
//	//2.判断str2是否为str1的子串
//	strstr(str1, str2);
//	char* ret = strstr(str1, str2);
//
//	return ret != NULL;
//}
//
//
//int main()
//{
//	char arr1[20] = "AABCD";//扩大空间
//	//AABCD
//	//BCDAA
//	//CDAAB
//	//DAABC
//	//AABCD
//	//AABCDAABCD双倍延长字符串
//	//在其中寻找子串
//
//	char arr2[] = "BCDAA";
//	
//
//	int ret = is_string_rotate(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr[20] = "hello ";
//	//strcat(arr, "bit");//追加字符串
//	//strcat(arr, arr);//不可用于自己追加
//	strncat(arr, arr, 5);//可以用该函数指定长度字符串追加
//	printf("%s\n", arr);
//	return 0;
//}

