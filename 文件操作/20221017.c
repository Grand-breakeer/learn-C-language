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


//文件：为了把数据记录下来对信息进行保存，所以把信息写入文件，存放在硬盘上

//磁盘上的文件是文件

//文件分为：程序文件(包括源程序文件，目标文件，可执行程序）
//和数据文件（文件内容不一定是程序，而是程序执行时读写的数据，比如程序运行需要从中读取数据文件，或者输出内容文件

//以下内容主要讨论数据文件
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}

//文件名：一个文件要有一个唯一的文件名，以便用户识别
//文件路径--文件名主干--文件后缀
//方便起见文件标识被称为文件名

//文件的打开和关闭
//缓冲文件系统中，关键的概念是“文件类型指针”，简称“文件指针”。
//每个被使用的文件都在内存中开辟了一个相应的文件信息区，用来存放文件的相关信息（如文件的名
//字，文件状态及文件当前的位置等）。这些信息是保存在一个结构体变量中的。该结构体类型是有系统
//声明的，取名FILE


/*struct _iobuf {
    char* _ptr;
    int   _cnt;
    char* _base;
    int   _flag;
    int   _file;
    int   _charbuf;
    int   _bufsiz;
    char* _tmpfname;
};typedef struct _iobuf FILE;*///vs2013中文件信息区的定义

/*不同的C编译器的FILE类型包含的内容不完全相同，但是大同小异。
每当打开一个文件的时候，系统会根据文件的情况自动创建一个FILE结构的变量，并填充其中的信息，
使用者不必关心细节。
一般都是通过一个FILE的指针来维护这个FILE结构的变量，这样使用起来更加方便。
下面我们可以创建一个FILE*的指针变量:*/

//int main()
//{
//    FILE* pf = fopen("test.dat", "w");
//    if (pf == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //写文件
//
//    //关闭文件
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

//文件地址用双斜杠隔开，防止转义字符误识别

//int main()
//{
//    FILE* pf = fopen("test.dat", "r");
//    if (pf == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //写文件
//    int ret = fgetc(pf);
//    printf("%c\n", ret);
//    ret = fgetc(pf);
//    printf("%c\n", ret);
//    ret = fgetc(pf);
//    printf("%c\n", ret); 
//    ret = fgetc(pf);
//    printf("%c\n", ret);
//
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

//流：高度抽象的概念
//程序会操作各种各样的硬件，每种硬件的读取方式都不同
//所以程序向流里面输入数据，流再通过别的方式进行操作硬件

//C语言程序只要运行起来就默认打开了三个流
//stdin-标准输入流-键盘
//stdout-标准输出流-屏幕
//stderr-标准错误流-屏幕

//int main()
//{
//    fputc('b', stdout);
//    fputc('i', stdout);
//    fputc('t', stdout);
//    return 0;
//}

//int main()
//{
//    FILE* pf = fopen("test.dat", "w");
//    if (pf == NULL)
//    {
//        perror(fopen);
//        return 1;
//    }
//    //写文件--按行写
//    fputs("abcdef\n", pf);
//    fputs("qwertyuiop\n", pf);
//
//    fclose(pf);
//    pf = NULL;
//
//    return 0;
//}

//int main()
//{
//    char arr[10] = { 0 };
//    FILE* pf = fopen("test.dat", "r");
//    if (pf == NULL)
//    {
//        perror(fopen);
//        return 1;
//    }
//    //读文件--按行读
//    fgets(arr,4,pf);
//    printf("%s\n", arr);
//    fgets(arr, 4, pf);
//    printf("%s\n", arr);
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}