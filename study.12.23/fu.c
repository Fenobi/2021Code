#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//	case 6:
//	case 7:
//		printf("休息日");
//		break;
//	default:
//		printf("输入错误\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		if (i == 5)
//			//continue;
//			break;
//		printf("%d ", i);
//		i++;
//
//	}
//	return 0;
//}

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//输入ctrl+字符退出
	{
		putchar(ch);
	}
	return 0;
}