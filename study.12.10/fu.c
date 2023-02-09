#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#define ADD (x,y) ((x)+(y))
//int main()
//{
//	int sum = ADD(3, 4);
//	printf("sum=%d\n", sum);
//	sum = 10 * ADD(3, 4);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int* pa = &a;//pa是用来存放地址的，在c语言中pa是叫指针变量
//
//	//“*” 说明 pa是指针变量
//	//“int” 说明pa执行的对象是int类型的
//	//同理：
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;//* 解引用操作 *pa就是通过pa里面的地址，找到a
//	printf("%d\n", a);//输出a=20
//	return 0;
//}
int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(double*));
	printf("%d\n", sizeof(long*));
	return 0;

}