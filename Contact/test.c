#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
//test.c����ͨѶ¼ģ��

//ͨѶ¼
//1.ͨѶ¼�ܹ����1000���˵���Ϣ
// ÿ���˵���Ϣ��
// ����+����+�Ա�+�绰+��ַ
// 2.�����˵���Ϣ
// 3.ɾ��ָ���˵���Ϣ
// 4.�޸�ָ���˵���Ϣ
// 5.����ָ���˵���Ϣ
// 6.����ͨѶ¼����Ϣ
// 


void menu()
{
	printf("*****************************************\n");
	printf("************1.add      2.del*************\n");
	printf("************3.search   4.modify**********\n");
	printf("************5.sort     6.print***********\n");
	printf("************0.exit             **********\n");
	printf("*****************************************\n");
	printf("*****************************************\n");
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};

int main()
{
	int input = 0;
	//����ͨѶ¼
	Contact con;
	

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			break;
		case DEL:
			break;
		case SEARCH:
			break;
		case MODIFY:
			break;
		case SORT:
			break;
		case PRINT:
			break;
		case EXIT:
			break;
		}
	} while (input);
	return 0;
}