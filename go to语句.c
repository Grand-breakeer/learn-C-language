//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<time.h>
//#include<stdlib.h>

//goto���
//C �����е� goto �������ѿ���������ת�Ƶ�ͬһ�����ڵı���ǵ���䡣
//ע�⣺���κα�������У���������ʹ�� goto ��䡣��Ϊ��ʹ�ó���Ŀ��������Ը��٣�ʹ�����������������޸ġ��κ�ʹ�� goto ���ĳ�����Ը�д�ɲ���Ҫʹ�� goto ����д����
//����goto���Կ���һ�����������ѭ�����ڿ�������
// ����goto���ֻ������һ�������޷�����������ߴ�һ������������һ������
//int main()
//{
//flag:
//	printf("baba\n");
//	printf("mama\n");
//	goto flag;
//	return 0;
//}

//�ػ�����
//ֻҪ�����������Խ���1�����ڹػ���������"������"
//
// shutdown -s -t 60�ػ�
// shutdown -aȡ���ػ�
//

//int main()
//{
//	//�ػ�
//	//C�����ṩ��һ��������system����--ִ��ϵͳ����
//	char input[20] = { 0 };//����������Ϣ
//	system("shutdown -s -t 60");//system()--stdlib.h
//again:
//	printf("�������������ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input,"������")==0)//�����ַ����Ƚ���strcmp����  string compare
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}