#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	char mine[ROWS][COLS] = { 0 };//��Ų����׵���Ϣ 0���� 1����
	char show[ROWS][COLS] = { 0 };//չʾ���û������Ҵ���Ų�����׵���Ϣ

	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//������
	SetMine(mine, ROW, COL);
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//����
	FindMine(mine, show, ROW, COL);
}
//��Ϸ�˵�����
void menu()
{
	printf("************\n");
	printf("***1.��ʼ***\n");
	printf("***0.�˳�***\n");
	printf("************\n");
}
//ѡ�������
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��->;");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			//ɨ��
			game();
			break;
		case 0:
			printf("%d\n", input);
			printf("�����˳���Ϸ\n");
			break;
		default:
			printf("�������,����������:\n");
			break;
		}
	} while (input);
}
int main(void)
{
	test();
	return 0;
}