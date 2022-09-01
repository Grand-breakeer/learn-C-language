#define  _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>


//模拟实现strcpy
//void my_strcpy(char* dest,const char* src)
//{
//	assert(src != NULL);//断言（此处防止传入空指针）可以报错并提供参考信息协助解除bug
//	assert(dest != NULL);
//	while (*dest++ = *src++)
//	{
//		//hello的拷贝
//	}
//	//\0的拷贝
//}
//
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxxx";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);//1.目标空间的起始地址，2.源空间的起始地址
//	printf("%s\n", arr1);
//
//	return 0;
//}

//
//int main()
//{
//	//1.
//	//int num = 10;
//	//int* p = &num;
//	//*p = 20;
//	//printf("%d\n", num);
//	
//	//2.
//	//const修饰变量，这个量被称为常变量，不能被修改，但本质上是变量
//	const int num = 10;
//
//	//const int* p = &num;
//	int* const p = &num;//如果放在了*的右边，比那时指针变量不能被改变，但是指向内容可以
//	int n = 100;
//	//const修饰指针变量的时候
//	
//	//const如果放在*的左边，修饰的是*p，表示指针指向内容，是不能通过指针来改变的
//	//        指针变量本身可以修改
//	*p = 20;
//	p = &n;
//	
//	printf("%d\n", num);
//	return 0;
//}