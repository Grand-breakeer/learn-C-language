#define  _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>
#include<stdlib.h>
#include<errno.h>
#include<ctype.h>

//int main()
//{
//	//打开文件，打开失败返回NULL
//	FILE* pf = fopen("test.txt", "r");
//	//0  "no error"
//	if (pf == NULL)
//	{
//		//strerror将错误码转换为错误信息
//		//perror直接打印错误信息
//		//printf("%s\n", strerror(errno));
//		perror("foprn");//将errno 的值解释为错误消息，并将其打印到stderr（标准错误输出流，通常是控制台），可选地在其前面加上str中指定的自定义消息
//		return 1;
//	}
//	//读文件
//	//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//字符操作函数

//int main()
//{
//	char ch = 'a';
//	int ret=isdigit(ch);
//	//isdigit如果是数字字符返回非0的值，如果不是数字字符返回0
//	ret = islower(ch);
//	//islower如果是小写字符返回非0值如果是其它字符返回0
//
//	printf("%d\n", ret);
//	return 0;
//}

//字符转换函数
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//
//	int i = 0;
//
//	while (arr[i] != '\0')
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i]=tolower(arr[i]);//将所有的大写字符转换为小写
//		
//		}
//		printf("%c ", arr[i]);
//		i++;
//	}
//	return 0;
//}


//内存操作函数
//内存拷贝函数——memcpy()
//memcpy函数应该拷贝不重叠的内存
//memcpy-只要实现了不重叠拷贝就可以了，但是VS可以拷贝重叠部分是按照memmove来实现的
//memmove可以处理内存重叠的情况
//void* my_memcpy(void* dest,const void* src,size_t num)
//{
//	assert(dest && src);
//	//开始拷贝数据，但是不知道数据类型，那就一个字节一个字节的拷贝
//	//所以全部转换为（char*），配合num确定拷贝终点
//	void* ret = dest;
//	while(num--)
//	{
//		/**(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;*/
//		* ((char*)dest)++ = * ((char*)src)++;
//	}
//	return ret;
//}
//
////模拟实现memmove函数
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	//会重叠的部分先拷贝，那就倒着拷贝
//	//可以把数据从前往后拷贝，也可以从后向前拷贝
//	//判断拷贝方法--比较指针大小
//	if (dest < src)//从前向后拷贝
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//从后向前
//		while (num--)//重点理解处
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//void * memcpy ( void * destination, const void * source, size_t num );
//	//memcpy(arr2, arr1, 20);//20表示拷贝内容的大小
//	my_memmove(arr1+2, arr1, 20);//不可以同时操作一个内存空间，需要备份
//	return 0;
//}

//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//
//	//void * memcpy ( void * destination, const void * source, size_t num );
//	//memcpy(arr2, arr1, 20);//20表示拷贝内容的大小
//	my_memcpy(arr2, arr1, 20);
//	return 0;
//}

//memcmp--内存比较

//int main()
//{
//	float arr1[] = { 1.0,2.0,3.0,4.0 };
//	float arr2[] = { 1.0,3.0 };
//	int ret = memcmp(arr1, arr2, 6);
//	//memcmp--strcmp
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	//40
//	int arr[10] = { 0 };
//	memset(arr, 1, 20);//以字节为单位设置内存
//
//	return 0;
//}