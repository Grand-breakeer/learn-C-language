#define  _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>
#include<stdlib.h>

//字符指针

//int main()
//{
//	//char ch = 'q';
//	//char* pc = &ch;
//
//
//	//本质上是吧“hello bit”这个字符串的首字符的地址存储在了ps中
//	char* ps = "hello bit";//实际存储的是‘h'的地址
//	char arr[] = "hello bit";
//    *ps = 'w';//不可更改
//	printf("%c\n", *(ps+1));
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//    //因为字符串指针并没有把字符串存进去，所以两个指针指向同一个字符串
//
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    const char* str3 = "hello bit.";//常量字符串
//    const char* str4 = "hello bit.";
//
//
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");
//    else
//        printf("str3 and str4 are not same\n");
//
//    return 0;
//}

//int main()
//{
//	//指针数组
//	//数组--数组中存放的是指针
//	//int* arr[3];//存放整型指针得数组
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(arr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//
//	int* arr[3] = { a,b,c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(arr[i] + j));//等价于
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//数组指针是指向数组的指针

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//
//	double* d[5];
//	double* (*pd)[5] = &d;//pd就是一个指针
//	
//	int arr[10] = { 1,2,3,4,5 };
//	int(*parr)[10] = &arr;//取出的是数组的地址
//
//	//parr就是一个数组指针--其中存放的是数组的地址
//
//	//arr;//arr--数组名是首元素地址--arr[0]的地址
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//
//	int* p1 = arr;
//	int(*p2)[10] = &arr;
//
//	printf("%p\n", arr);
//	printf("%p\n", &arr);//地址一样类型不一样
//
//	printf("%p\n", p1);
//	printf("%p\n", p2 + 1);
//	return 0;
//}

//
//数组名是数组首元素的地址
//但是有两个例外
//1.sizeof（数组名）--数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2.&数组名--数组名表示的是整个数组
//

//数组指针的使用

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*pa) + i));//对于数组指针的来讲的，一次解引用是拿到的是数组地址，然后再解引用才是具体元素
//	}
//	return 0;
//}

//void print(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//
////
////数组指针的应用
//
//void print2(int(*p)[5],int r,int c)
//{
//	int i = 0;
//	int j = 0;
//	for(i=0;i<r;i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { { 1,2,3,4,5 }, { 2,3,4,5,6 }, { 3,4,5,6,7} };
//	//二维数组的数组名表示首元素的地址
//	//二维数组的首元素是第一行
//	//print1(arr,3,5);
//	print2(arr,3,5);
//	return 0;
//}

//int main()
//{
//	int arr[5];//整型数组
//
//
//	int(*parr2)[10];//数组指针，该指针指向一个数组，数组10个元素，每个元素是int
//
//
//	int(*parr[10])[5];//parr3是一个存放数组指针的数组
//	//该数组能够存放10个数组指针
//	//每个数组指针能够指向一个数组，数组5个元素，每个元素是int类型
//}

//void test(int arr[])//ok?
//{}
//void test(int arr[10])//ok?
//{}
//void test(int* arr)//ok?
//{}
//void test2(int* arr[20])//ok?
//{}
//void test2(int** arr)//ok?
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}


//void test(int arr[3][5])//ok？
//{}
//void test(int arr[][])//ok？
//{}
//void test(int arr[][5])//ok？
//{}
////总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
////因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
////这样才方便运算。
//void test(int* arr)//ok？0
//{}
//void test(int* arr[5])//ok？0
//{}
//void test(int(*arr)[5])//ok？1
//{}
//void test(int** arr)//ok？0
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}

//void print(int* ptr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//}
//
//void test(char* p)
//{
//
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//p是一级指针
//	print(p, sz);//一级指针传参用一级指针接收
//
//	char ch = 'w';
//	char* p1 = &ch;
//	test(&ch);//char*
//	test(p1);//同类型指针
//	return 0;
//}

//void test(int** p2)
//{
//	**p2 = 20;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是一级指针
//	int** ppa = &pa;//ppa是二级指针
//	//把二级指针进行传参
//
//	test(ppa);
//
//	test(&pa);//传一级指针变量的地址
//	int* arr[10] = { 0 };
//	test(arr);//传存放一级指针的数组
//	printf("%d ", a);
//
//	return 0;
//}

/*一级指针
* int* p--整型指针--指向整型的指针
* char* pc--字符指针--指向字符的指针
* void* pv--无类型的指针
* 
* 
* 二级指针
* char** p
* int** p
* 
* 数组指针：指向数组的指针
* int(*p)[4];
*/

/*数组
* 一维数组
* 二维数组
* 
* 指针数组--存放指针的数组
*/


/*函数指针
*指向函数的指针
*/

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = { 0 };
//	int (*parr)[10] = &arr;//取出数组的地址
//	//parr是指向数组的指针-存放的是数组的地址
//
//	//函数指针--存放函数的指针
//	//&函数名-取到的是函数的地址
//
//	int(*pf)(int, int) = &Add;//pf就是函数指针的变量
//
//	printf("%p\n", &Add);
//	printf("%d\n", Add);
//
//	return 0;
//}


//void test(char* str)
//{
//
//}
//
//int main()
//{
//	void (*pt)(char*) = &test;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//int(*pf)(int, int) = &Add;//pf就是函数指针的变量
//	int(*pf)(int, int) = Add;
//	//int ret=(*pf)(3, 5);//运用函数指针调用其所指向的函数
//	int ret = pf(3, 5);
//	printf("%d\n", ret);
//
//	return 0;
//}


//(*(void(*)())0)();
//将零强制转换为函数指针类型
//调用零地址处的函数
//该函数无参数，返回类型是void
//1.void(*)()--函数指针类型
//2.（void（*）（））0--对零进行强制类型转换，被解释为一个函数地址
//3.*（void（*）（））0-对零地址处函数解引用
//4.（*（void（*）（））0）（）--调用0地址函数
//《C陷阱和缺陷》

//void(*signal(int , void(*)(int)))(int);
// typedef--对类型进行重定义
// typedef void（*pfun_t)(int);//对void（*）（int）的函数指针类型重命名pfun_t
// pfun_t(int,pfun_t);
// 
// void(*）(int)  signal(int , void(*)(int));
//signal（）是一个函数它的参数有int 和一个函数指针类型它的返回值是指针该函数指针指向一个参数int返回值为void的函数
// signal函数的返回类型也是一个函数指针
// 该函数指针指向一个参数为int 返回值为void的函数
// signal是一个函数声明
//
//
//int main()
//{
//	
//	return 0;
//}

//函数指针数组
// 存放函数指针的数组
// 
//整型指针int *
//整型指针数组int*arr[5];


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("******************************\n");
//	printf("*********1.add    2.sub*******\n");
//	printf("*********3.mul    4.div*******\n");
//	printf("************0.exit************\n");
//	printf("******************************\n");
//}
//
//
//int main()
//{
//	//int(*pf1)(int, int) = Add;
//	//int(*pf2)(int, int) = Sub;
//	//int(*pfArr[2])(int, int) = { Add,Sub };//pfArr就是函数指针数组
//	//计算器-计算整型变量的加减乘除
//	int input = 0;
//	do {
//		menu();
//		
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n",ret);
//			break;
//		case 2:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("输入错误，请重新输入!\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("******************************\n");
//	printf("*********1.add    2.sub*******\n");
//	printf("*********3.mul    4.div*******\n");
//	printf("************0.exit************\n");
//	printf("******************************\n");
//}
//
//
//int main()
//{
//	//int(*pf1)(int, int) = Add;
//	//int(*pf2)(int, int) = Sub;
//	//int(*pfArr[2])(int, int) = { Add,Sub };//pfArr就是函数指针数组
//	//计算器-计算整型变量的加减乘除
//	int input = 0;
//	do {
//		menu();
//		int(*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = (pfArr[input])(x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出程序\n");
//			break;
//		}
//		else
//		{
//			printf("选择错误，请重新选择\n");
//		}
//	} while (input);
//	return 0;
//}

//函数指针的数组--数组
//取出函数指针数组的地址

//整型数组
//int arr[5];
//int (*p1)[5]=&arr

//整型指针的数组
//int* arr[5]
//int* (*p2)[5]&arr;
//p2是指向【整型指针数组】的指针

//函数指针数组
//&函数指针数组
//int(*p)(int,int);//函数指针
//int(* p2[4])(int,int);//函数指针的数组
//int(*(*p3)[4])(int,int)=&p2;//取出的是函数指针数组的地址
//p3就是一个指向【函数指针的数组】的指针


//int main()
//{
//	int arr[10];
//	//去掉数组数组元素类型--int;
//	//去掉数组名arr数组的类型int [10];
//	return 0;
//}

//回调函数
//回调函数就是一个通过函数指针调用的函数。如果你把函数的指针（地址）
//作为参数传递给另一个和函数，当这个函数指针被用来调用其所指向的函数时这个函数就被称为回调函数


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("******************************\n");
//	printf("*********1.add    2.sub*******\n");
//	printf("*********3.mul    4.div*******\n");
//	printf("************0.exit************\n");
//	printf("******************************\n");
//}
//
//int Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d %d", &x, &y);
//	return pf(x, y);
//}
//
//
//
//int main()
//{
//	//int(*pf1)(int, int) = Add;
//	//int(*pf2)(int, int) = Sub;
//	//int(*pfArr[2])(int, int) = { Add,Sub };//pfArr就是函数指针数组
//	//计算器-计算整型变量的加减乘除
//	int input = 0;
//	do {
//		menu();
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			ret = Calc(Add);
//			printf("%d\n",ret);
//			break;
//		case 2:
//			ret = Calc(Sub);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			ret = Calc(Mul);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			ret = Calc(Div);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("输入错误，请重新输入!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//qsort函数的使用（排序）
//冒泡排序算法
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <sz-1-i ; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	//升序
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//
//	return 0;
//}

/*利用qsort排序*/
//可排序对象
/*整型数据，字符串数据，结构体数据*/

//void qsort(void* base, size_t num, size_t size,int (*compar)(const void*, const void*));
//对这四个参数的解释
//base中存放的是待排序数据中第一个对象的地址
//待排序的数据元素的个数
//size代表每个元素的字节大小
//compare比较待排序数据中两个元素的函数
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1-*(int*)e2;
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//	return 0;
//}

//使用qsort函数排序结构体数据

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int sort_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int sort_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test2()
//{
//	struct Stu s[] = { {"zhangsan",30},{"lisi",34},{"wangwu",20} };
//
//	int sz = sizeof(s) / sizeof(s[10]);
//	//按照年龄来排序
//	qsort(s, sz, sizeof(s[0]), sort_by_age);
//	//按照名字排序
//	qsort(s, sz, sizeof(s[0]), sort_by_name);
//
//}
//
//int main()
//{
//	test2();
//	return 0;
//}

//模仿qsort实现一个冒泡排序的通用算法

//void Swap(char*buf1, char*buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//	
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1-*(int*)e2;
//}
//
//void bubble_sort(void* base,int sz,int width,int (*cmp)(const void*e1,const void*e2))
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟排序
//		int j = 0;
//		for (j = 0; j < sz - 1; j++)
//		{
//			if (cmp((char*)base+j*width,(char*)base+(j+1)*width ) > 0)
//			{
//				//交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}

//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}


//int main()
//{
//	
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[10]), cmp_int);
//	print_arr(arr, sz);
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int sort_by_age(const void* e1, const void* e2)
//{
//	return (((struct Stu*)e1)->age - ((struct Stu*)e2)->age);
//}
//
//void test2()
//{
//	struct Stu s[] = { {"zhangsan",30},{"lisi",34},{"wangwu",20} };
//
//	int sz = sizeof(s) / sizeof(s[10]);
//	//按照年龄来排序
//	bubble_sort(s, sz, sizeof(s[0]), sort_by_age);
//	//按照名字排序
//	//qsort(s, sz, sizeof(s[0]), sort_by_name);
//	printf("%d", s[0].age);
//
//}
//
//int main()
//{
//	test2();
//	
//	return 0;
//}


int main()
{
	int a = 10;
	char ch = 'w';
	void* p = &a;//无具体类型
	p = &ch;
	*p;//无法解引用需要转换为指定类型指针后解引用
	//p++;//需要转换为对应类型的指针解引用
	return 0;
}