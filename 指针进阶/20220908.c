#define  _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>
#include<stdlib.h>

//�ַ�ָ��

//int main()
//{
//	//char ch = 'q';
//	//char* pc = &ch;
//
//
//	//�������ǰɡ�hello bit������ַ��������ַ��ĵ�ַ�洢����ps��
//	char* ps = "hello bit";//ʵ�ʴ洢���ǡ�h'�ĵ�ַ
//	char arr[] = "hello bit";
//    *ps = 'w';//���ɸ���
//	printf("%c\n", *(ps+1));
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//    //��Ϊ�ַ���ָ�벢û�а��ַ������ȥ����������ָ��ָ��ͬһ���ַ���
//
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    const char* str3 = "hello bit.";//�����ַ���
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
//	//ָ������
//	//����--�����д�ŵ���ָ��
//	//int* arr[3];//�������ָ�������
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
//			printf("%d ", *(arr[i] + j));//�ȼ���
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����ָ����ָ�������ָ��

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//
//	double* d[5];
//	double* (*pd)[5] = &d;//pd����һ��ָ��
//	
//	int arr[10] = { 1,2,3,4,5 };
//	int(*parr)[10] = &arr;//ȡ����������ĵ�ַ
//
//	//parr����һ������ָ��--���д�ŵ�������ĵ�ַ
//
//	//arr;//arr--����������Ԫ�ص�ַ--arr[0]�ĵ�ַ
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
//	printf("%p\n", &arr);//��ַһ�����Ͳ�һ��
//
//	printf("%p\n", p1);
//	printf("%p\n", p2 + 1);
//	return 0;
//}

//
//��������������Ԫ�صĵ�ַ
//��������������
//1.sizeof����������--��������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//2.&������--��������ʾ������������
//

//����ָ���ʹ��

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*pa) + i));//��������ָ��������ģ�һ�ν��������õ����������ַ��Ȼ���ٽ����ò��Ǿ���Ԫ��
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
////����ָ���Ӧ��
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
//	//��ά�������������ʾ��Ԫ�صĵ�ַ
//	//��ά�������Ԫ���ǵ�һ��
//	//print1(arr,3,5);
//	print2(arr,3,5);
//	return 0;
//}

//int main()
//{
//	int arr[5];//��������
//
//
//	int(*parr2)[10];//����ָ�룬��ָ��ָ��һ�����飬����10��Ԫ�أ�ÿ��Ԫ����int
//
//
//	int(*parr[10])[5];//parr3��һ���������ָ�������
//	//�������ܹ����10������ָ��
//	//ÿ������ָ���ܹ�ָ��һ�����飬����5��Ԫ�أ�ÿ��Ԫ����int����
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


//void test(int arr[3][5])//ok��
//{}
//void test(int arr[][])//ok��
//{}
//void test(int arr[][5])//ok��
//{}
////�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
////��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ�ء�
////�����ŷ������㡣
//void test(int* arr)//ok��0
//{}
//void test(int* arr[5])//ok��0
//{}
//void test(int(*arr)[5])//ok��1
//{}
//void test(int** arr)//ok��0
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
//	//p��һ��ָ��
//	print(p, sz);//һ��ָ�봫����һ��ָ�����
//
//	char ch = 'w';
//	char* p1 = &ch;
//	test(&ch);//char*
//	test(p1);//ͬ����ָ��
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
//	int* pa = &a;//pa��һ��ָ��
//	int** ppa = &pa;//ppa�Ƕ���ָ��
//	//�Ѷ���ָ����д���
//
//	test(ppa);
//
//	test(&pa);//��һ��ָ������ĵ�ַ
//	int* arr[10] = { 0 };
//	test(arr);//�����һ��ָ�������
//	printf("%d ", a);
//
//	return 0;
//}

/*һ��ָ��
* int* p--����ָ��--ָ�����͵�ָ��
* char* pc--�ַ�ָ��--ָ���ַ���ָ��
* void* pv--�����͵�ָ��
* 
* 
* ����ָ��
* char** p
* int** p
* 
* ����ָ�룺ָ�������ָ��
* int(*p)[4];
*/

/*����
* һά����
* ��ά����
* 
* ָ������--���ָ�������
*/


/*����ָ��
*ָ������ָ��
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
//	int (*parr)[10] = &arr;//ȡ������ĵ�ַ
//	//parr��ָ�������ָ��-��ŵ�������ĵ�ַ
//
//	//����ָ��--��ź�����ָ��
//	//&������-ȡ�����Ǻ����ĵ�ַ
//
//	int(*pf)(int, int) = &Add;//pf���Ǻ���ָ��ı���
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
//	//int(*pf)(int, int) = &Add;//pf���Ǻ���ָ��ı���
//	int(*pf)(int, int) = Add;
//	//int ret=(*pf)(3, 5);//���ú���ָ���������ָ��ĺ���
//	int ret = pf(3, 5);
//	printf("%d\n", ret);
//
//	return 0;
//}


//(*(void(*)())0)();
//����ǿ��ת��Ϊ����ָ������
//�������ַ���ĺ���
//�ú����޲���������������void
//1.void(*)()--����ָ������
//2.��void��*��������0--�������ǿ������ת����������Ϊһ��������ַ
//3.*��void��*��������0-�����ַ������������
//4.��*��void��*��������0������--����0��ַ����
//��C�����ȱ�ݡ�

//void(*signal(int , void(*)(int)))(int);
// typedef--�����ͽ����ض���
// typedef void��*pfun_t)(int);//��void��*����int���ĺ���ָ������������pfun_t
// pfun_t(int,pfun_t);
// 
// void(*��(int)  signal(int , void(*)(int));
//signal������һ���������Ĳ�����int ��һ������ָ���������ķ���ֵ��ָ��ú���ָ��ָ��һ������int����ֵΪvoid�ĺ���
// signal�����ķ�������Ҳ��һ������ָ��
// �ú���ָ��ָ��һ������Ϊint ����ֵΪvoid�ĺ���
// signal��һ����������
//
//
//int main()
//{
//	
//	return 0;
//}

//����ָ������
// ��ź���ָ�������
// 
//����ָ��int *
//����ָ������int*arr[5];


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
//	//int(*pfArr[2])(int, int) = { Add,Sub };//pfArr���Ǻ���ָ������
//	//������-�������ͱ����ļӼ��˳�
//	int input = 0;
//	do {
//		menu();
//		
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n",ret);
//			break;
//		case 2:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("�����������������!\n");
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
//	//int(*pfArr[2])(int, int) = { Add,Sub };//pfArr���Ǻ���ָ������
//	//������-�������ͱ����ļӼ��˳�
//	int input = 0;
//	do {
//		menu();
//		int(*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = (pfArr[input])(x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�����\n");
//			break;
//		}
//		else
//		{
//			printf("ѡ�����������ѡ��\n");
//		}
//	} while (input);
//	return 0;
//}

//����ָ�������--����
//ȡ������ָ������ĵ�ַ

//��������
//int arr[5];
//int (*p1)[5]=&arr

//����ָ�������
//int* arr[5]
//int* (*p2)[5]&arr;
//p2��ָ������ָ�����顿��ָ��

//����ָ������
//&����ָ������
//int(*p)(int,int);//����ָ��
//int(* p2[4])(int,int);//����ָ�������
//int(*(*p3)[4])(int,int)=&p2;//ȡ�����Ǻ���ָ������ĵ�ַ
//p3����һ��ָ�򡾺���ָ������顿��ָ��


//int main()
//{
//	int arr[10];
//	//ȥ����������Ԫ������--int;
//	//ȥ��������arr���������int [10];
//	return 0;
//}

//�ص�����
//�ص���������һ��ͨ������ָ����õĺ����������Ѻ�����ָ�루��ַ��
//��Ϊ�������ݸ���һ���ͺ��������������ָ�뱻������������ָ��ĺ���ʱ��������ͱ���Ϊ�ص�����


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
//	printf("����������������:>");
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
//	//int(*pfArr[2])(int, int) = { Add,Sub };//pfArr���Ǻ���ָ������
//	//������-�������ͱ����ļӼ��˳�
//	int input = 0;
//	do {
//		menu();
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("��ѡ��:>");
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
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("�����������������!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//qsort������ʹ�ã�����
//ð�������㷨
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
//				//����
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
//	//����
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//
//	return 0;
//}

/*����qsort����*/
//���������
/*�������ݣ��ַ������ݣ��ṹ������*/

//void qsort(void* base, size_t num, size_t size,int (*compar)(const void*, const void*));
//�����ĸ������Ľ���
//base�д�ŵ��Ǵ����������е�һ������ĵ�ַ
//�����������Ԫ�صĸ���
//size����ÿ��Ԫ�ص��ֽڴ�С
//compare�Ƚϴ���������������Ԫ�صĺ���
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

//ʹ��qsort��������ṹ������

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
//	//��������������
//	qsort(s, sz, sizeof(s[0]), sort_by_age);
//	//������������
//	qsort(s, sz, sizeof(s[0]), sort_by_name);
//
//}
//
//int main()
//{
//	test2();
//	return 0;
//}

//ģ��qsortʵ��һ��ð�������ͨ���㷨

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
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ������
//		int j = 0;
//		for (j = 0; j < sz - 1; j++)
//		{
//			if (cmp((char*)base+j*width,(char*)base+(j+1)*width ) > 0)
//			{
//				//����
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
//	//��������������
//	bubble_sort(s, sz, sizeof(s[0]), sort_by_age);
//	//������������
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
	void* p = &a;//�޾�������
	p = &ch;
	*p;//�޷���������Ҫת��Ϊָ������ָ��������
	//p++;//��Ҫת��Ϊ��Ӧ���͵�ָ�������
	return 0;
}