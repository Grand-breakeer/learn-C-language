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
//	//���ļ�����ʧ�ܷ���NULL
//	FILE* pf = fopen("test.txt", "r");
//	//0  "no error"
//	if (pf == NULL)
//	{
//		//strerror��������ת��Ϊ������Ϣ
//		//perrorֱ�Ӵ�ӡ������Ϣ
//		//printf("%s\n", strerror(errno));
//		perror("foprn");//��errno ��ֵ����Ϊ������Ϣ���������ӡ��stderr����׼�����������ͨ���ǿ���̨������ѡ������ǰ�����str��ָ�����Զ�����Ϣ
//		return 1;
//	}
//	//���ļ�
//	//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�ַ���������

//int main()
//{
//	char ch = 'a';
//	int ret=isdigit(ch);
//	//isdigit����������ַ����ط�0��ֵ��������������ַ�����0
//	ret = islower(ch);
//	//islower�����Сд�ַ����ط�0ֵ����������ַ�����0
//
//	printf("%d\n", ret);
//	return 0;
//}

//�ַ�ת������
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
//			arr[i]=tolower(arr[i]);//�����еĴ�д�ַ�ת��ΪСд
//		
//		}
//		printf("%c ", arr[i]);
//		i++;
//	}
//	return 0;
//}


//�ڴ��������
//�ڴ濽����������memcpy()

void* my_memcpy(void* dest,const void* src,size_t num)
{
	assert(dest && src);
	//��ʼ�������ݣ����ǲ�֪���������ͣ��Ǿ�һ���ֽ�һ���ֽڵĿ���
	//����ȫ��ת��Ϊ��char*�������numȷ�������յ�
	void* ret = dest;
	while(num--)
	{
		/**(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;*/
		* ((char*)dest)++ = * ((char*)src)++;
	}
	return ret;
}

int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[20] = { 0 };

	//void * memcpy ( void * destination, const void * source, size_t num );
	//memcpy(arr2, arr1, 20);//20��ʾ�������ݵĴ�С
	my_memcpy(arr2, arr1, 20);
	return 0;
}