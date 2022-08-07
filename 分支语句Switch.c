//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//
////switch (整型表达式)
////{
////	语句项;
////}
//
////int main()
////{
////	int day = 0;
////	scanf("%d", &day);
////	switch (day)//表达式必须是整型//决定入口的是括号内的表达式和case的值
////	{
////	case 1://case后必须是整型（表达式）可以使字符（底层是ASCI码）
////		printf("星期1\n");
////		break;
////	case 2:
////		printf("星期2\n");
////		break;		
////	case 3:
////		printf("星期3\n");	
////		break;
////	case 4:
////		printf("星期4\n");
////		break;
////	case 5:
////		printf("星期5\n");
////		break;
////	case 6:
////		printf("星期6\n");
////		break;
////	case 7:
////		printf("星期7\n");
////		break;
////
////
////	}
////	return 0;
////}
//
////int main()
////{
////	int day = 0;
////	scanf("%d", &day);
////	switch (day)//表达式必须是整型//决定入口的是括号内的表达式和case的值
////	{
////	case 1://case后必须是整型（表达式）可以使字符（底层是ASCI码）
////	case 2:
////	case 3:
////	case 4:
////	case 5:
////		printf("工作日\n");
////		break;
////	case 6:
////	case 7:
////		printf("休息日\n");
////		break;//即使是最后一个case也建议加上break
////	default:
////		printf("输入错误\n");//满足需求其和case的顺序无关
////
////	}
////	return 0;
////}
//
////int main()
////{
////	int n = 1;
////	int m = 2;
////	switch (n)
////	{
////	case 1:
////		m++;
////	case 2:
////		n++;
////	case 3:
////		switch (n)
////		{
////			//switch允许嵌套使用
////		case 1:
////			n++;
////		case 2:
////			m++; n++;
////			break;
////
////		}
////	case 4:
////		m++;
////		break;
////	default:
////		break;
////	}
////	printf("m=%d,n=%d\n", m, n);
////	return 0;
////}
//
//
//
//
//
//
//
//
//
