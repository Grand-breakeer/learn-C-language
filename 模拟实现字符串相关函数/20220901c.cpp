#define  _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>


//模拟实现strcpy
//把src指向的内容拷贝放进dest指向的空间中
//从本质上讲，希望dest指向的内容被修改，src指向的内容不可被修改
//strcpy其实返回的是目标空间的起始地址


char* my_strcpy(char* dest,const char* src)
{
	assert(src != NULL);//断言（此处防止传入空指针）可以报错并提供参考信息协助解除bug
	assert(dest != NULL);
	char* ret = dest;
	while (*dest++ = *src++)
	{
		;//hello的拷贝
	}
	//\0的拷贝
	return ret;

}//标准库函数的模拟实现


//代码的健壮性（鲁棒性）降低容错率保护代码


//模拟实现一个strlen求字符串长度
size_t my_strlen(const char* str)//size_t本质是size_t
{
	assert(str != NULL);
	size_t len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return len;
}

int main()
{
	char arr1[20] = "xxxxxxxxxxxxxxx";
	char arr2[] = "hello";
	//1.目标空间的起始地址，2.源空间的起始地址
	printf("%s\n", my_strcpy(arr1, arr2));
	printf("%d\n", my_strlen(arr1));

	return 0; 
}

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


//常见错误

//1.语法错误

//2.链接错误
//要不这个符号不存在要不这个符号写错了
//extern用于声明外部符号

//3.运行错误
//借助调试，逐步定位问题，最难

