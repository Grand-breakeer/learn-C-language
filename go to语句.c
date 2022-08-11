//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<time.h>
//#include<stdlib.h>

//goto语句
//C 语言中的 goto 语句允许把控制无条件转移到同一函数内的被标记的语句。
//注意：在任何编程语言中，都不建议使用 goto 语句。因为它使得程序的控制流难以跟踪，使程序难以理解和难以修改。任何使用 goto 语句的程序可以改写成不需要使用 goto 语句的写法。
//但是goto语言可以一次性跳出多层循环利于快速跳出
// 但是goto语句只能跳出一个函数无法跳出多个或者从一个函数跳到另一个函数
//int main()
//{
//flag:
//	printf("baba\n");
//	printf("mama\n");
//	goto flag;
//	return 0;
//}

//关机程序
//只要运行起来电脑将在1分钟内关机除非输入"我是猪"
//
// shutdown -s -t 60关机
// shutdown -a取消关机
//

//int main()
//{
//	//关机
//	//C语言提供了一个函数：system（）--执行系统命令
//	char input[20] = { 0 };//存放输入的信息
//	system("shutdown -s -t 60");//system()--stdlib.h
//again:
//	printf("输入我是猪否则关机\n");
//	scanf("%s", input);
//	if (strcmp(input,"我是猪")==0)//两个字符串比较用strcmp（）  string compare
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}