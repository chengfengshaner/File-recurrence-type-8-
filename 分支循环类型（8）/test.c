//goto��� - C�����ṩ�˿����������õ�goto���ͱ����ת�ı��
//������goto�����û�б�Ҫ�ģ�ʵ����û��goto���Ҳ���Ժ����׵�д������
//����ĳЩ������goto��仹���õõ��ģ�������÷�������ֹ������ĳЩ���Ƕ�׵Ľṹ�Ĵ�����̣�����һ�������������ѭ��
//�������ʹ��break��û�б�Ҫ�ģ���ֻ�ܴ����ڲ�ѭ���˳�����һ���ѭ��
//������ʹ��goto����һ������

#define _CRT_SECURE_NO_WARNINGS 01
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("hehe\n");
//
//	goto flag;//ʵ����ѭ��
//	return 0;
//}

//�ػ�����
//1�����ڹػ� - ������ȡ���ػ�
//   -s        -t         60
//���ùػ� ����ʱ��ػ� ����ʱ��60
//   -a
//�ƻ�ȡ��
//shutdown -s -t 60
//shutdown -a

int main()
{
	char input[20] = { 0 };//����������Ϣ
	//C�����ṩ��һ��������system() - ִ��ϵͳ����

	//stdlib.h

	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺no����ȡ���ػ�\n");
	scanf("%s", input);

	//string.h

	if (strcmp(input, "no") == 0)//�����ַ����Ƚ��ǲ���ʹ��==�ģ�Ӧ��ʹ��strcmp() string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}

//int main()
//{
//	char input[20] = { 0 };//����������Ϣ
//	//C�����ṩ��һ��������system() - ִ��ϵͳ����
//	//stdlib.h
//	system("shutdown -s -t 60");
//while(1)
//{ 
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺no����ȡ���ػ�\n");
//	scanf("%s", input);
//	//string.h
//	if (strcmp(input, "no") == 0)//�����ַ����Ƚ��ǲ���ʹ��==�ģ�Ӧ��ʹ��strcmp() string compare
//	{
//		system("shutdown -a");
//		break;
//	}	
//}
//return 0;
//}

//goto���ֻ����һ��������Χ����ת�����ܿ纯��