#include<stdio.h>
int main()
{
	char input[20] = { 0 };
	sytstem("shutdown /s");
again:
	printf("��ĵ��Խ���1���Ӻ�ػ���������룺����xx����ȡ���ػ�\n������: ");
	scanf("%s", input);
	if (strcmp(input, "����xx") == 0)
	{
		system("shutdown - a");
	}
	else
	{
		goto again;
	}
	return 0;
}
