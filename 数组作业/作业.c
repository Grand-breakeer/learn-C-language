//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<time.h>
//#include<stdlib.h>
//#include<math.h>


//int main()
//{
//	int arr[] = { 1,2,(3,4),5 };//(3,4)���ű��ʽ�������Ҽ���ȡ���һ��ֵ
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//int main()
//{
//	char str[] = "hello man";
//	//hello man\0
//	//strlen-����-���ַ������ȣ��ҳ�\0֮ǰ���ַ�����
//	//sizeof-������-�������/������ռ�ڴ��С��λ���ֽ�
//	printf("%d %d\n", sizeof(str), strlen(str));//10  9
//	return 0;
//}

//int main()
//{
//	char acX[] = "abcdefg";
//	char acY[] = { 'a','b','c','d','e','f','g' };
//	//���������鳤�Ȳ�һ��acX�ж���һ��\0
//	return 0;
//}

//�������п���ʡ���в�����ʡ��

//void init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	printf("\n");
//}
//void revers(int arr[], int sz)
//{
//	int right = sz - 1;
//	int left = 0;
//	int c = 0;
//	while (left < right)
//	{
//		c = arr[right];
//		arr[right] = arr[left];
//		arr[left] = c;
//		left++;
//		right--;
//
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	revers(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//		printf("%d  ", arr1[i]);
//		printf("%d  \n", arr2[i]);
//	}
//
//	return 0;
//}