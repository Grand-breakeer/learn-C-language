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
#include<ctype.h>


//��ӡX
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else if (i + j == (n - 1))
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//����7���ɼ�ȥ����߷���ͷ�ȡƽ���ֱ�����λС��
//int main()
//{
//	int max = 0;
//	int min = 100;
//	int sum = 0;
//	int score = 0;
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &score);
//		sum += score;
//		if (score > max)
//		{
//			max = score;
//		}
//		if (score < min)
//		{
//			min = score;
//		}
//	}
//
//	printf("%.2f\n", (sum - max - min) / 5.0);
//	return 0;
//}

//int main()
//{
//	int y = 0;
//	int m = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d %d", &y, &m)!=EOF);
//	{
//		int day = days[m];
//		if (m == 2)
//		{
//			if (y % 4 == 0 && y % 100 != 0 || (y % 400 == 0))
//			{
//				day += 1;
//			}
//		}
//		printf("%d", day);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int p = 0;
//	int u = 0;
//	scanf("%d", &n);
//	int arr[100]={0};
//	while (i<n)
//	{
//		scanf("%d", &p);
//		arr[i] = p;
//		i++;
//	}
//	scanf("%d", &u);
//	int j = 0;
//	while (u > arr[j]&&j<n)
//	{
//		j++;
//	}
//	if (j == n)
//	{
//		arr[j] = u;
//	}
//	else
//	{
//		i = 0;
//		for (i = 0; i < n - j; i++)
//		{
//			arr[n - i] = arr[n-1- i];
//		}
//		arr[j] = u;
//	}
//	i = 0;
//	for (i = 0; i < n + 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[51] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int m = 0;
//	scanf("%d", &m);
//	for (i = n - 1; i >= 0; i--)
//	{
//		if (arr[i] > m)
//		{
//			arr[i + 1] = arr[i];
//		}
//		else
//		{
//			arr[i + 1] = m;
//			break;
//		}
//	}
//	arr[i + 1] = m;
//	for (i = 0; i < n + 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}