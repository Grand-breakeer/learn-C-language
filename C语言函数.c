//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<time.h>
//#include<stdlib.h>
//#include<math.h>

//��������
//int main()
//{
//	char arr1[20] = { 2,3,4,5 };//���鱾����ָ��
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//memset
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s", arr);
//	return;
// }

//int get_max(int x, int y)
//{
//	return (x > y) ? x: y;
//}
//int Max2(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int Max = 0;
//	scanf("%d %d", &a, &b);
//	Max=get_max(a, b);
//	printf("%d\n", Max);
//	return 0;
//}
//��������������ֵ
//�����������͵ط�д��void��ʾ�����������κ�ֵҲ����Ҫ����
//void Swap(int x, int y)//
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = x;
//}��ֵ����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("����ǰ:%d %d", a, b);
//	Swap(a, b);//����ʵ�δ��������Ǹ�����һ������ �����ǳ����ĵ�ַ ����ִ��ʱ�ı���Ǹ�����ֵ �����ں�������ʱֵ����
//	printf("������:%d %d", a, b);
//	return 0;
//}
//int main()//�ڵ�ַ������
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d", *pa);
//	return 0;
//}

//void Swap(int*pa, int*pb)//������������û��ʹ��ʱ��û�п��ٴ���ռ�
//{//ֻ�е��ú����ŻῪ�ٴ���ռ�
//	int z = 0;//�β���������ֻ�ں����ڲ�
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}//��ָ����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("����ǰ:%d %d\n", a, b);
//	Swap(&a, &b);//ʵ�γ����������ʽ�ȶ�����
//	//ֱ��ͨ����ַ�ҵ���Ӧ��a��b��������в���
//	printf("������:%d %d\n", a, b);
//	return 0;//returnֻ�ܷ���һ��ֵ
//}
//���Сֵ
//int Min(x, y)
//{
//	return (x > y) ? y: x;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	c=Min(a, b);
//	printf("%d", c);
//	return 0;
//}
//��������Сֵ
//int Min(int x,int y,int z)
//{
//	int min = x;
//	if (min > y)
//	{
//		min = y;
//	}
//	if (min>z)
//	{
//		min = z;
//	}
//	return min;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	
//	scanf("%d %d %d",&a,&b,&c);
//	
//	printf("%d", Min(a, b, c));
//	return 0;
//}
//����һ����ȷ���Ƿ�������
//int s(int n)//����Ҫ�㹻��һ���㹻����
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (s(a)==1)
//	{
//		printf("%d", a);
//	}
//	
//	return 0;
//}
//�ж��ǲ�������

//int is_leap_year(int n)//һ�����������д��������Ĭ�Ϸ���int
//{
//	if (n % 400==0)
//	{
//		return 1;
//	}
//	if ((n % 4 == 0) &&( n % 100 != 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//�Ż���
//int is_leap_year(int n)//һ�����������д��������Ĭ�Ϸ���int
//{
//	return ((n % 4 == 0 && n % 100 != 0) || (n % 400) == 0);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (is_leap_year(a)==1)
//	{
//		printf("������");
//	}
//	else
//	{
//		printf("��������");
//	}
//	return 0;
//} 

//ʵ��������������Ķ��ֲ���
//int binary_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s-1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	//�ҵ��ͷ����ҵ�λ�õ��±�
//	//�Ҳ����ͷ���-1
//  //����arr��������ʵ�ʴ��ݵĲ������鱾��
//  //��������ȥ��������Ԫ�ص�ַ
//  //����һ��Ҫ����Ԫ�ظ�����Ϊ��������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr,key,sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}

//����ÿִ��һ��num+1
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//������Ƕ�׵��ú���ʽ����(����Ƕ�׶���)
//int test3()
//{
//	printf("hehe\n");
//}
//int test2()
//{
//	test3();
//	return 0;
//}
//int main()
//{
//	test2();
//	return 0;
//}
//��������ʽ����
//int main()
//{
//	int len = strlen("abc");
//	printf("%d\n", len);
//
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "bit";
//	printf("%s\n", strcpy(arr1, arr2));
//	return 0;
//}

//int main()
//{
//	//printf���ص��Ǵ�ӡ����Ļ���ַ��ĸ���
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//����������--��֪����������һ������
//	int Add(int x, int y);
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
////�����Ķ���
//int Add(int x,int y)
//{
//	return (x + y);
//}
 

//�����˹�������ͷ�ļ�#include "***.h"
//��������һ�������ͷ�ļ���




