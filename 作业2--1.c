//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<time.h>
//#include<math.h>


//��ӡ1000�굽2000�������
//int main()
//{
//	int i = 1000;
//	int c = 0;
//	while (i<2001)
//	{
//		if (i % 100 == 0)
//		{
//			if (i % 400 == 0)
//			{
//				printf("���꣺%d\n", i);
//				c++;
//
//			}
//		}
//		else if (i % 4 == 0)
//		{
//			printf("���꣺%d\n", i);
//			c++;
//		}
//
//		i++;
//	}
//	printf("������=%d  ", c);
//	return 0;
//}

//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//�ж��ǲ�������
//		//1.�ܱ������������ܱ�100����
//		//2.�ܱ��İ�����
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		{
//			printf("����:%d  ", y);
//			count++;
//		}
//		
//	}
//	printf("count= %d", count);
//	return 0;
//}
//������
//int main()//main����һ����Ҫ���
//{
//	int i = 0;
//	
//	for(i=100;i<=200;i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j== 0)
//			{
//				break;//������ǰ��Ӧ��ѭ��  
//			}
//			
//		}
//		if(j==i)
//		{
//		printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 100;
//	int k = 0;
//	while (i <= 200)
//	{
//		int j = 0;
//		for (j = 2; j < i ; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//			
//		}
//		//
//		if (i == j)
//		{
//			printf("%d\n", i);
//			k++;
//		}
//		i++;
//	}
//	printf("��������:%d ", k);
//	return 0;
//}
//int main()
//{
//	int i = 100;
//	int k = 0;
//	while (i <= 200)
//	{
//		int j = 0;
//		for (j = 2; j < (i/2); j++)//�Ż�����
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//
//		}
//		//
//		if (i == ((2*j)+1))
//		{
//			printf("%d\n", i);
//			k++;
//		}
//		i++;
//	}
//	printf("��������:%d ", k);
//	return 0;
//}

//��ʦ�Ż���
//int main()
//{
//	int count = 0;
//	int i = 0;
//	//m=a*b
//	//a��b��������һ��������С�ڵ��ڿ�ƽ��m��
//	//sqrt-�ǿ�ƽ������
//	for (i =101; i <= 200; i+=2)//������������ż��
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i% j == 0)
//			{
//				flag = 0;//��������
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("��������=%d", count);
//	return 0;
//}