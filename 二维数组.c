//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<time.h>
//#include<stdlib.h>
//#include<math.h>


//��ά����Ĵ����ͳ�ʼ��
//int main()
//{
//	//����
//	/*int arr[3][4];
//	char ch[3][10];*/
//	//��ʼ��--������ͬʱ��ֵ
//	int arr1[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };//��ȫ��ʼ��
//	int arr2[3][4] = { 1,2,3,4,5,6 };//����ȫ��ʼ��
//	int arr3[3][4] = { {1,2},{3,4},{5,6} };
//	int arr[][4] = { 1,2,3,4,5,6,7 };//�п���ʡ���в�����
//	return 0;
//}

//��ά�����ʹ��
//int main()
//{
//	int i = 0;
//	int arr[3][4] = { {1,2},{3,4},{4,5} };
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d  ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��ά����Ĵ洢
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[3][4] = { {1,2},{3,4},{4,5} };
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);//��ά�������ڴ�����������ŵ�
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	
//	int arr[][4] = { {1,2},{3,4},{4,5} };
//	int* p = &arr[0][0];
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	
//	return 0;
//}