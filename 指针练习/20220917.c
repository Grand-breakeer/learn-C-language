#define  _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>
#include<stdlib.h>


//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48=3*4*4
//
//	printf("%d\n", sizeof(a[0][0]));//4数组第一行第一列第一个元素的大小
//
//	printf("%d\n", sizeof(a[0]));//16可以理解为第一行的数组名此时计算的就是第一行的大小
//
//	printf("%d\n", sizeof(a[0] + 1));//（4/8）a[0]作为数组名没有单独放在
//	//sizeof内部，也没取地址，所以a[0]就是第一行第一个元素的地址，+1就是第一行第二个元素的地址
//
//	printf("%d\n", sizeof(*(a[0] + 1)));//4第一行第二个元素
//
//	printf("%d\n", sizeof(a + 1));//（4/8）数组名没有单独放在sizeof内部也没有&就表示第一个元素的地址
//	//+1就表示第二个元素的地址只要是地址按照环境就是4/8个字节大小
//
//	printf("%d\n", sizeof(*(a + 1)));//16表示第二行所有元素
//	//*（a+1）等价于a[1]   （a+1）是第二行的地址*（a+1）就表示第二行
//
//	printf("%d\n", sizeof(&a[0] + 1));//4 解释：a[0]是第一行的数组名
//	//&a[0]取出的就是第一行的地址，&a[0]+1就是第二行的地址
//
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16   &a[0] + 1就是第二行地址
//	//*(&a[0] + 1)就是第二行，所以计算的就是第二行的大小
//
//	printf("%d\n", sizeof(*a));//16  解释：a作为二维数组名
//
//	printf("%d\n", sizeof(a[3]));//16  a[3]  的类型是  int[4]  sizeof 内部的表达式是不会执行的
//	//它会推测所属表达式的类型并计算大小
//	//解释：a[3]其实是第四行的数组名（如果有的话）
//	//所以其实不存在也能通过类型计算大小
//
//	//表达式有两个属性一个是值属性另一个是数值属性
//	return 0;
//}


//int main()
//{
//	short s = 5;
//	int a = 4;
//
//	printf("%d\n", sizeof(s = a + 6));//sizeof内部的表达式是不会参与计算的
//	//也不会真正的去访问对应的地址
//	printf("%d\n", s);
//
//	return 0;
//}

//
//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);//此指针指向的是整个数组的后一个地址
//    printf("%d,%d", *(a + 1), *(ptr - 1));
//    return 0;
//}
////程序的结果是什么？
////2 ，5


//由于还没学习结构体，这里告知结构体的大小是20个字节
struct Test
{
    int Num;
    char* pcName;
    short sDate;
    char cha[2];
    short sBa[4];
}*p;
//假设p 的值为0x100000。 如下表表达式的值分别为多少？
//已知，结构体Test类型的变量大小是20个字节
int main()
{
    printf("%p\n", p + 0x1);
    printf("%p\n", (unsigned long)p + 0x1);
    printf("%p\n", (unsigned int*)p + 0x1);
    return 0;
}
//14   1    4