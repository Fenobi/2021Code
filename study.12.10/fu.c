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
//	int* pa = &a;//pa��������ŵ�ַ�ģ���c������pa�ǽ�ָ�����
//
//	//��*�� ˵�� pa��ָ�����
//	//��int�� ˵��paִ�еĶ�����int���͵�
//	//ͬ��
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;//* �����ò��� *pa����ͨ��pa����ĵ�ַ���ҵ�a
//	printf("%d\n", a);//���a=20
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