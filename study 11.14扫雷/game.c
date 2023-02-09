#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//��ʼ�����̣�ȫ��Ϊ'*'
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
// ��ʾӦ�ø��û���ʾ�Ľ��桮*��
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%d|", i);
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("-|");
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d|", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c|", board[i][j]);
		}
		printf("\n");
		for (j = 0; j < col + 1; j++)
		{
			printf("-|");

		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x + 1][y] +
		mine[x - 1][y] +
		mine[x][y + 1] +
		mine[x][y - 1] +
		mine[x - 1][y - 1] +
		mine[x - 1][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y + 1] -
		8 * '0';
}
//������չ���ĺ���
void Open(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int n = get_mine_count(mine, x, y);
	if (n != 0)
	{
		show[x][y] = '0' + n;
	}
	else if (show[x][y] != ' ')
	{
		show[x][y] = ' ';
		int i = 0;
		for (i = x - 1; i <= x + 1; i++)
		{
			int j = 0;
			for (j = y - 1; j <= y + 1; j++)
			{
				Open(mine, show, i, j);
			}
		}
	}
	else
	{
		return;
	}
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("��������Ҫ��ѯ������->");
		scanf("%d%d", &x, &y);
		Sleep(500);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if ('1' == mine[x][y])
			{
				printf("С��������ô�򵥵�ɨ�׶����᣿��\n");
				Sleep(500);
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				//��������x��y��Χ�м�����
				Open(mine, show, x, y);
				DisplayBoard(show, row, col);
			}
		}
		else
		{
			printf("��������Ƿ����޷����ף�����������\n");
		}

		int i = 0;
		int j = 1;
		int flag = 0;
		for (i = 1; i <= row; i++)
		{
			for (j = 1; j <= col; j++)
			{
				if (show[i][j] == '*')
				{
					flag++;
				}
			}
		}
		if (flag == EASY_COUNT)//����ȫ��չ����ɨ������ҵ��׵ĸ����Ƿ񸴺�ʵ���׵ĸ���
		{
			printf("��ϲ��,��Ӯ��!\n");
			DisplayBoard(mine, row, col);
			break;
		}
	}


}