#define _crt_secure_no_warnings 1
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>


//编号-地址-指针
//int main()
//{
//	int a = 10;//a占四个字节的空间
//	int *pa=&a;//拿到的是a的四个字节中第一个字节的地址
//	*pa = 20;
//	return 0;
//}

//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pf));
//	return 0;
//}

//指针类型的意义
//1.指针类型决定了：指针解引用的权限有多大
//2.指针类型决定了指针走一步走多远（步长）
//3.
//int main()
//{
//	int arr[10] = { 10 };
//	int* p = arr;
//	char* pc = arr;
//
//	printf("%p\n", p);
//	printf("%p\n", p + 1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	//int a = 0x11223344;
//	///*int* pa = &a;
//	//*pa = 0;*/
//	//char* pc = &a;
//	//*pc = 0;//类型发生变化，访问权限发生变化
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i)=1;
//	}
//	return 0;
//}


//野指针--指针指向的位置不可知（随机的，不正确的）
//int main()
//{
//	//这里的p就是野指针
//	//int* p;//p是一个局部的指针变量，局部变量不初始化默认随机值
//	//*p = 20;//非法访问内存
//	// 
//	//2.越界访问
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}

//指针指向的空间释放了造成野指针
//int* test()
//{
//	int a = 10;
//	return &a;//当函数结束时a所对应的地址释放造成主函数中指向的空间释放
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}


//指针的初始化

//int main()
//{
//	//当不知道p应该初始化为什么地址的时候，直接初始化为NULL
//	int* p = NULL;
//	//明确知道初始化的值
//	int a = 10;
//	int* pa = &a;
//
//	//C语言本身是不会检查数组的越界行为的
//	//指针空间释放及时置NULL
//	//指针使用前检查有效性
//
//	int* p = NULL;
//	if (p != NULL)
//	{
//		*p = 10;
//	}
//	return 0;
//}

//指针运算
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	//指针的关系运算
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//
//
//	return 0;
//}

//指针减去指针

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char c[5];
//	//指针与指针相减的前提是两个指针指向同一空间
//	printf("%d\n", &arr[9] - &c[0]);
//	//printf("%d\n", &arr[9] - &arr[0]);//指针减去指针得到的是指针与指针之间的元素个数
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//

//指针与指针相减
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	//strlen(); - 求字符串长度
//	//递归
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}

//指针加指针无意义

//C语言标准：允许指向数组的指针与指向数组最后一个元素后面的那个内存位置的指针比较，但是不允许与指向第一个元素之前的那个内存位置的指针进行比较




//指针和数组

//1.数组名
//首元素的首地址
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		/*printf("%p<=====>%p\n", &arr[i], p + i);*/
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//数组名
//	printf("%d\n", arr[2]);
//	printf("%d\n", p[2]);
//
//	printf("%d\n", 2[arr]);
//	printf("%d\n", 2[p]);
//
//	//arr[2]<===>*(arr+2)<====>*(p+2)<====>*(2+p)<====>*(2+arr)==2[arr]
//	//2[arr]<===>*(
//	return 0;
//}

//二级指针


//int main()
//{
//	int a = 0;
//	int* pa = &a;//pa是指针变量，是一个一级指针
//	//ppa是一个二级指针变量
//	int* *ppa = &pa;//pa是一个变量，&pa就是取出pa的地址
//	return 0;
//}

//指针数组--数组

//int main()
//{
//	int arr[10];//整型数组-存放整型的数组就是整型数组
//	char ch[5];//字符数组--存放的是字符
//	//指针数组--存放指针的数组
//
//	int* parr[5];//整型指针的数组
//
//	return 0;
//}