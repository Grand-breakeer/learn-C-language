//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////int main()
////{
////	int i = 1;
////	do
////	{
////		printf("%d ", i);
////		i++;
////	} while (i <= 10);
////	return 0;
////}
//
//
////int main()
////{
////	int i = 1;
////	do
////	{
////		if (i == 5)
////			break;
////		//continue;//��while���������һ��
////		printf("%d ", i);
////		i++;
////	} while (i <= 10);
////	return 0;
////}
//
//
////��ϰ
////��n�Ľ׳�
////int main()
////{
////	int k = 1;
////	int i = 0;
////	int n = 0;
////	scanf("%d", &n);
////	for (i = 1; i < (n + 1); i++)
////	{
////		k = k * i;
////	}
////	printf("%d ", k);
////	return 0;
////
////}
//
////��1�Ľ׳˼ӵ�n�Ľ׳�
////int main()
////{
////	int i = 0;
////	int n = 0;
////	int s = 1;
////	int sum = 0;
////	scanf("%d", &n);
////	for (i = 1; i < (n + 1); i++)
////	{
////		s *= i;
////		sum += s;
////	}
////	printf("%d ", sum);
////	return 0;
////}
//
////��n�Ľ׳�//��1�Ľ׳˼ӵ�n�Ľ׳�
////int main()
////{
////	int sum = 0;
////	int n = 0;
////	int i = 1;
////	int s = 1;
////	scanf("%d", &n);
////	do
////	{
////		s *= i;
////		i++;
////		sum += s;
////	} while (i <= n);
////	printf("%d\n", s);
////	printf("%d ", sum);
////}
//
//
////��һ�����������в���ĳ������
//
////���ַ�����Ԫ�����ڱ���Ԫ��
//
////int main()
////{
////	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
////	int k = 0;//Ҫ���ҵ�����
////	printf("������Ҫ���ҵ����֣�");
////	scanf("%d", &k);
////
////	int sz = sizeof(arr)/sizeof(arr[0]);
////    int left = 0;
////	int right = sz - 1;
////	
////	while (left<=right)
////		
////	{
////		int mid = (left + right) / 2;//C��������������������ȡ����
////		if (arr[mid] < k)
////		{
////			left = mid + 1;
////		}
////		else if (arr[mid] > k)
////		{
////			right = mid - 1;
////		}
////		else
////		{
////			printf("�ҵ��ˣ��±���%d\n", mid);
////			break;
////		}
////	}
////	if (left > right)
////	{
////		printf("�Ҳ���");
////	}
////
////	return 0;
////}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
