#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//for（表达式一（初始化);表达式二（判断）;表达式三（调整））

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}



//含有break
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10;i++)
//	{
//		if(i==5)
//		break;//直接终止
//		printf(" % d ", i);
//	}
//	return 0;
//}



//含有continue
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;//跳过本次循环后面代码
//
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//		//i = 5;//不建议在循环体类修改循环变量防止for循环失去控制,例如改变变量名和改变变量值
// 
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)//建议写成前闭后开提升可读性
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//
//int main()
//{
//	//判断部分的省略会导致判断恒为真
//
//	for (;;)
//	{
//		printf("dada\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (; j < 3; j++)//不当的省略会导致变量无法初始化，从而有可能导致失控。
//		{
//			printf("adad\n");
//		}
//	}
//	return 0;
//}

//如果判断部分为0则为假不执行循环






