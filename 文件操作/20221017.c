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