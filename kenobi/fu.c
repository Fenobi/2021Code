#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c'};
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	printf("给李嘉慧同学写的代码");
//	return 0;
//}

//int main()
//{
	//printf("%c\n",'\x30');
	//printf("%d\n", strlen("c:\test\328\test.c"));
	/*int input = 0;
	printf("1小付:>\n");
	printf("0好好学习(1/0)?");
	scanf("%d", &input);
	if (input == 1)
		printf("好老婆李嘉慧\n");
	else
		printf("好女朋友李嘉慧\n");\
	return 0;*/
//}
//int main()
//{
//	int x, sum = 0;
//	for (x = 1; x <= 100; x++)
//	{
//		sum = x + sum;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	while (line < 50000)
//	{
//		printf("跟小付一起愉快的玩耍:%d\n", line);
//		line++;
//	}
//	if (line == 50000)
//	{
//		printf("快乐的小付和快乐的嘉慧\n");
//	}
//	return 0;
//}

//关于函数
//Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	//int sum = num1 + num2;
//	//函数方式解决
//	int sum=Add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}
//数组-一组相同类型的元素的集合
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char ch[5] = { 'a','b','c' };//不完全初始化，剩余默认为零
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//    //或加上
//	//int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 2;
//	int b = a >>1;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//计算的是数组的总大小，单位是字节
//	printf("%d\n", sizeof(arr[0]));
//	int ab = sizeof(arr) / sizeof(arr[0]);//由此可计算出数组个数
//	printf("%d\n", ab);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	return 0;//-1
//}