#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//int main()
//{
//	char arr1[] = "welcome to Kenobi computer!!!!!!!";
//	char arr2[] = "                                 ";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(500);
//		system("cls");
//	}
//	printf("%s\n", arr1);
//	return;
//}

#include <string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("登陆成功！\n");
			break;
		}
		else
		{
			printf("登陆失败，请重新输入\n");
		}
	}
	if (i == 3)
	{
		printf("密码三次均输入错误，登陆失败\n");
	}
	return 0;
}