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


//�ļ���Ϊ�˰����ݼ�¼��������Ϣ���б��棬���԰���Ϣд���ļ��������Ӳ����

//�����ϵ��ļ����ļ�

//�ļ���Ϊ�������ļ�(����Դ�����ļ���Ŀ���ļ�����ִ�г���
//�������ļ����ļ����ݲ�һ���ǳ��򣬶��ǳ���ִ��ʱ��д�����ݣ��������������Ҫ���ж�ȡ�����ļ���������������ļ�

//����������Ҫ���������ļ�
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}

//�ļ�����һ���ļ�Ҫ��һ��Ψһ���ļ������Ա��û�ʶ��
//�ļ�·��--�ļ�������--�ļ���׺
//��������ļ���ʶ����Ϊ�ļ���

//�ļ��Ĵ򿪺͹ر�
//�����ļ�ϵͳ�У��ؼ��ĸ����ǡ��ļ�����ָ�롱����ơ��ļ�ָ�롱��
//ÿ����ʹ�õ��ļ������ڴ��п�����һ����Ӧ���ļ���Ϣ������������ļ��������Ϣ�����ļ�����
//�֣��ļ�״̬���ļ���ǰ��λ�õȣ�����Щ��Ϣ�Ǳ�����һ���ṹ������еġ��ýṹ����������ϵͳ
//�����ģ�ȡ��FILE


/*struct _iobuf {
    char* _ptr;
    int   _cnt;
    char* _base;
    int   _flag;
    int   _file;
    int   _charbuf;
    int   _bufsiz;
    char* _tmpfname;
};typedef struct _iobuf FILE;*///vs2013���ļ���Ϣ���Ķ���

/*��ͬ��C��������FILE���Ͱ��������ݲ���ȫ��ͬ�����Ǵ�ͬС�졣
ÿ����һ���ļ���ʱ��ϵͳ������ļ�������Զ�����һ��FILE�ṹ�ı�������������е���Ϣ��
ʹ���߲��ع���ϸ�ڡ�
һ�㶼��ͨ��һ��FILE��ָ����ά�����FILE�ṹ�ı���������ʹ���������ӷ��㡣
�������ǿ��Դ���һ��FILE*��ָ�����:*/

//int main()
//{
//    FILE* pf = fopen("test.dat", "w");
//    if (pf == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //д�ļ�
//
//    //�ر��ļ�
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

//�ļ���ַ��˫б�ܸ�������ֹת���ַ���ʶ��

//int main()
//{
//    FILE* pf = fopen("test.dat", "r");
//    if (pf == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //д�ļ�
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

//�����߶ȳ���ĸ���
//�����������ָ�����Ӳ����ÿ��Ӳ���Ķ�ȡ��ʽ����ͬ
//���Գ������������������ݣ�����ͨ����ķ�ʽ���в���Ӳ��

//C���Գ���ֻҪ����������Ĭ�ϴ���������
//stdin-��׼������-����
//stdout-��׼�����-��Ļ
//stderr-��׼������-��Ļ

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
//    //д�ļ�--����д
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
//    //���ļ�--���ж�
//    fgets(arr,4,pf);
//    printf("%s\n", arr);
//    fgets(arr, 4, pf);
//    printf("%s\n", arr);
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}