//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<time.h>
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
////��ӡ�ַ����м俿£��Ч��
////welcome to bit!!!
//
////int main()
////{
////	char arr1[] = "welcome to bit!!!!!!";
////	char arr2[] = "                    ";
////	int left = 0;
////	int right = strlen(arr1) - 1;
////	while (left <= right)
////	{
////		arr2[left] = arr1[left];
////		arr2[right] = arr1[right];
////		printf("%s\n", arr2);
////		Sleep(500);//˯��һ��
////		system("cls");//�����Ļ
////		left++;
////		right--;
////	}
////	printf("%s\n", arr2);
////	return 0;
////}
//
////int main()
////{
////	int i = 0;
////	char password[20] = { 0 };
////	for (i = 0; i < 3; i++)
////	{
////		printf("����������:>");
////		scanf("%s", password);//���鲻��ȡ��ַ
////		//if(password=="1971928954z"),�ַ����ıȽϲ�����==������Ҫ��strcmp//��д�����ڱȽ����ַ���ַ��������
////		//strcmp�ȽϷ����ǱȽ϶�Ӧλ�õ�ASCI��ֵ�����αȽϣ�
////		if (strcmp(password, "1971928954z") == 0)//strcmp��a��b���������������ֵ<0���ʾa<b;����ֵ>0���ʾa>b;����ֵ=0���ʾa=b.
////		{
////			printf("��¼�ɹ�\n");
////			break;
////		}
////		if (i == 2)
////		{
////			continue;
////		}
////		else
////		{
////			printf("�����������������");
////		}
////	}
////	if (i == 3)
////	{
////		printf("������������Ѵ������޷���¼");
////	}
////	return 0;
////	
////}
//
////дһ����������Ϸ
//// 1.�Զ�����һ��1-100֮��������
//// 2.�¶��ˣ���ϲ�㣬��Ϸ����
////   �´��˸�����´��˲�С��
//// 3.��Ϸ����һֱ��֪���˳�
////
//
//
//void menu()
//{
//	printf("**************************\n");
//	printf("**********1.play**********\n");
//	printf("**********0.exit**********\n");
//	printf("**************************\n");
//
//}
//void game()
//{
//	//�����ֵ�ʵ��
//	//1.���������
//	//rand��������һ��0-32767֮�����
//	//ʱ��-ʱ���
//
//	int ret = rand() % 100 + 1;//%100��������0-99��+1����0-100
//	//������
//	int guess = 0;
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ��¶���\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();//��ӡ�˵�
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ");
//			break;
//		default:
//			printf("�������������ѡ��\n");
//			break;
//
//		}
//	} while (input);
//	return 0;
//}
