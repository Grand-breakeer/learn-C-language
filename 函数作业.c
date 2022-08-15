//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<time.h>
//#include<stdlib.h>
//#include<math.h>

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != 0)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//char reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}

//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char a;
//	char arr[] = "abcdef";
//	for (i = 0; i <= 2; i++)
//	{
//		a = arr[(5 - i)];
//		arr[(5 - i)] = arr[i];
//		arr[i] = a;
//	}
//	printf("%s", arr);
//	return 0;
//
//}

//求1729每位数字之和
//递归
//int DigitSum(int n)
//{
//	int a = n % 10;
//	int b = n / 10;
//	if (b > 0)
//	{
//		return a + DigitSum(b);
//	}
//	else
//	{
//		return a;
//	}
//}
//
//int main()
//{
//	int num = 1729;
//	printf("%d", DigitSum(num));
//	return 0;
//}

//迭代
//int main()
//{
//	int a = 1729;
//	int b = 0;
//	int c = 0;
//	while (a > 0)
//	{
//		c = a % 10;
//		b += c;
//		a = a / 10;
//	}
//	printf("%d", b);
//	return 0;
//}


//n的k次方
//double Pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return n*Pow(n, k-1);
//	}
//	else if (k == 0)
//	{
//		return 1.0;
//	}
//	else 
//	{
//		
//		return 1.0 / ( Pow(n, -k));
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	printf("%lf",Pow(n, k));
//	return 0;
//}
