#define  _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>
#include<stdlib.h>


/*��̬�ڴ濪��
p=malloc
ʹ��
�ͷţ�free  ���ռ�黹�����Ὣp��Ϊ��ָ��
��Ȼ����ָ��ԭ��ַ������ʹ��ʱΪ�Ƿ�����*/



/*int(*(*F)(int, int))(int);
������
����һ������ָ���������������
��������Ϊ����ָ���ָ��ָ��һ������Ϊ�����ĺ���
*/

/*���Ͼ���ÿ�����ֵ�����ÿ�����ֵ���
��д������������Ƿ����ĳһ����
ʱ�临�Ӷ�С��O��N��(���ݽṹ������)*/
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
//					printf("�����ҵ�Ԫ���ڵ�%d��%d��\n", i + 1, j + 1);
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
//		printf("�ҵ���!!!\n");
//		printf("Ԫ���ڵ�%d��%d��\n", r, c);
//	}
//	else
//	{
//		printf("�Ҳ���!!!\n");
//	}
//	return 0;
//}

//����ת��˼��
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

//��������˼��
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
//	//1.str1�ַ�������׷��һ��str1
//	//AABCDAABCD
//	int len = strlen(str1);
//	strncat(str1, str1, len);
//	//2.�ж�str2�Ƿ�Ϊstr1���Ӵ�
//	strstr(str1, str2);
//	char* ret = strstr(str1, str2);
//
//	return ret != NULL;
//}
//
//
//int main()
//{
//	char arr1[20] = "AABCD";//����ռ�
//	//AABCD
//	//BCDAA
//	//CDAAB
//	//DAABC
//	//AABCD
//	//AABCDAABCD˫���ӳ��ַ���
//	//������Ѱ���Ӵ�
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
//	//strcat(arr, "bit");//׷���ַ���
//	//strcat(arr, arr);//���������Լ�׷��
//	strncat(arr, arr, 5);//�����øú���ָ�������ַ���׷��
//	printf("%s\n", arr);
//	return 0;
//}

