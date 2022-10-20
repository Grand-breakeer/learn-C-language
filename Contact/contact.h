#pragma once

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX 1000
#define DEFAULT_SZ 3
#define INC_SZ 2

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
//���͵Ķ���
typedef struct PeoInfo 
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//ͨѶ¼����̬�汾
//typedef struct Contact
//{
//	PeoInfo data[MAX];//�����ӽ������˵���Ϣ
//	int sz;//��¼��ǰͨѶ¼�е���Ч��Ϣ����
//
//}Contact;

//��̬�汾
typedef struct Contact
{
	PeoInfo* data;//ָ��̬����Ŀռ����������ϵ����Ϣ
	int sz;//��¼��ǰͨѶ¼�е���Ч��Ϣ����
	int capacity;//��¼��ǰͨѶ¼����
}Contact;

//��ʼ��ͨѶ¼
void InitContact(Contact* pc);
//������ϵ��
void Addcontact(Contact* pc);
//��ʾ��ϵ����Ϣ
void PrintContact(const Contact* pc);
//ɾ����ϵ��
void DelContact(Contact* pc);
//������ϵ��
void SearchContact(Contact* pc);
//�޸���ϵ��
void ModifyContact(Contact* pc);
//����ͨѶ¼
void DestoryContact(Contact* pc);
//����ͨѶ¼���ļ�
void SaveContact(Contact* pc);
//�������ݵ�ͨѶ¼
void LoadContact(Contact* pc);
//�������
void CheckCapacity(Contact* pc);