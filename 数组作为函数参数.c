//#define _crt_secure_no_warnings 1
//#include <stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<time.h>
//#include<stdlib.h>
//#include<math.h>
//
////ð������˼��
////��������Ԫ�ؽ��бȽϣ����ҿ��ܵĻ�����
////�����ҽ����ֵһ�������ƶ�
////��ÿ��Ԫ����������
////n��������n-1��
//void bubble_sort(int arr[],int sz)
//{
//	//��������Ԫ�ظ���
//	
//	//ȷ������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð���������
//		int j = 0;
//		for (j = 0; j <sz-1-i ; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//
//			}
//		}
//	}
//}
////������������Ԫ�ص�ַ 
////��������
////1.sizeof����������-��������ʾ��������-���������������Ĵ�С��λ���ֽ�
////2.&������-��������ʾ��������-ȡ��������������ĵ�ַ
//int main()
//{
//	
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��λ����--ð������
//	bubble_sort(arr,sz);
//	
//
//	return 0;
//}
//
////int main()
////{
////
////	char arr[] = { 'b','i','t'};
////	
////	printf("%s", arr);
////
////	return 0;
////}