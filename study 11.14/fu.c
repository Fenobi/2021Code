#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 1;
	int sum = 0;
	//for (i = 0;i <= 200;i++)
	while (i <= 200)
	{
		sum = i + sum;
		i++;
		printf("%d\n", sum);
	}
	return 0;
}
//int main()
//{
//	int a = 0;
//	while (a < 500000)
//	{
//		printf("д���룺%d\n", a);
//		a++;
//	}
//	if (a = 500000)
//	{
//		printf("��û��:%d\n",a);
//	}
//	return 0;
//}
