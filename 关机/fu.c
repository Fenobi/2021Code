#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 30");
again:
	printf("���Խ���60s�ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", &input);
	if (0 == strcmp(input, "������"))
	{
		system("shutdown -a");
	}
	else
	{
		goto again;       //goto��䣬����������ݲ���"������"��������ת��again��������ʾ�û�����"������"
	}
	return 0;
}