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

int find_num(int arr[3][3], int* r, int* c, int k)
{
	int x = 0;
	int y = *c - 1;
	while (x < *r && y >= 0)
	{
		if (arr[x][y] < k)
		{
			x++;
		}
		else if(arr[x][y]>k)
		{
			y--;
		}
		else
		{
			*r = x + 1;
			*c = y + 1;
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 7;
	int r = 3;
	int c = 3;
	int ret = find_num(arr, &r, &c, k);
	if (ret == 1)
	{
		printf("�ҵ���!!!\n");
		printf("Ԫ���ڵ�%d��%d��\n", r, c);
	}
	else
	{
		printf("�Ҳ���!!!\n");
	}
	return 0;
}