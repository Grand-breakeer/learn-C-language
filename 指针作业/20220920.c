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
		printf("找到了!!!\n");
		printf("元素在第%d行%d列\n", r, c);
	}
	else
	{
		printf("找不到!!!\n");
	}
	return 0;
}