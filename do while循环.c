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
////		//continue;//和while语句中作用一样
////		printf("%d ", i);
////		i++;
////	} while (i <= 10);
////	return 0;
////}
//
//
////练习
////求n的阶乘
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
////求1的阶乘加到n的阶乘
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
////求n的阶乘//求1的阶乘加到n的阶乘
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
////在一个有序数组中查找某个数字
//
////二分法查找元素优于遍历元素
//
////int main()
////{
////	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
////	int k = 0;//要查找的数字
////	printf("请输入要查找的数字：");
////	scanf("%d", &k);
////
////	int sz = sizeof(arr)/sizeof(arr[0]);
////    int left = 0;
////	int right = sz - 1;
////	
////	while (left<=right)
////		
////	{
////		int mid = (left + right) / 2;//C语言中整数除法是乡下取整的
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
////			printf("找到了：下标是%d\n", mid);
////			break;
////		}
////	}
////	if (left > right)
////	{
////		printf("找不到");
////	}
////
////	return 0;
////}
//
//
////打印字符向中间靠拢的效果
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
////		Sleep(500);//睡眠一秒
////		system("cls");//清空屏幕
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
////		printf("请输入密码:>");
////		scanf("%s", password);//数组不用取地址
////		//if(password=="1971928954z"),字符串的比较不能用==，而需要用strcmp//此写法仅在比较首字符地址毫无意义
////		//strcmp比较方法是比较对应位置的ASCI码值（依次比较）
////		if (strcmp(password, "1971928954z") == 0)//strcmp（a，b）函数，如果返回值<0则表示a<b;返回值>0则表示a>b;返回值=0则表示a=b.
////		{
////			printf("登录成功\n");
////			break;
////		}
////		if (i == 2)
////		{
////			continue;
////		}
////		else
////		{
////			printf("密码错误，请重新输入");
////		}
////	}
////	if (i == 3)
////	{
////		printf("您的输入次数已达上限无法登录");
////	}
////	return 0;
////	
////}
//
////写一个猜数字游戏
//// 1.自动产生一个1-100之间的随机数
//// 2.猜对了，恭喜你，游戏结束
////   猜错了告诉你猜大了猜小了
//// 3.游戏可以一直玩知道退出
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
//	//猜数字的实现
//	//1.生成随机数
//	//rand函数返回一个0-32767之间的数
//	//时间-时间戳
//
//	int ret = rand() % 100 + 1;//%100的余数是0-99，+1就是0-100
//	//猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了\n");
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
//		menu();//打印菜单
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏");
//			break;
//		default:
//			printf("输入错误，请重新选择\n");
//			break;
//
//		}
//	} while (input);
//	return 0;
//}
