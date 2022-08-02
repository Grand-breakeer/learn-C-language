//字符串就是一串字符-用双引号引起的一串字符
//字符串的结束标志是\0
//每个字符串的结束标志都是\0


#include <stdio.h>;
int main()
{

	//字符数组-就是一组相同类型的元素

	//char arr[] = "hello";
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	//求字符串长度




	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));



	int len = strlen("abc");//string length
	
	printf("%d\n", len);


	// 
	// 
	//打印字符串

	printf("%s\n", arr1);
	printf("%s\n", arr2);







	return 0;
}




















