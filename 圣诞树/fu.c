#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
    int i, j, x;
    int n = 0;
    // a�Ǽ�����������ÿհ���䣻b��ѩ����������*��ʾ��c��ʥ��������䣬��'0'��ʾ 
    char a = ' ', b = '*', c = '0';
    // ��һ���֣������Ҷ
    for (x = 0; x < 3; x++) {
        // ����ʥ������߿��Խ�4���ֵ���� 
        for (i = 0; i < x + 4; i++) {
            for (j = 0; j < 80; j++) {
                if ((j <= 25 + n) && (j >= 25 - n)) {
                    printf("%c", c);
                }
                else if ((j % (n + 6) == n) && ((j > 25 + n) || (j < 25 - n))) {
                    printf("%c", b);
                }
                else {
                    printf("%c", a);
                }
            }
            printf("\n");
            n = n + 2;
        }
        n = n - 2 * (x + 2);
    }
    // �ڶ����֣�������ɣ��߶�Ϊ5 
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 80; j++) {
            if (j >= 22 && j <= 28) {
                printf("%c", c);
            }
            else if ((j % (n + 6) == n) && ((j > 25 + n) || (j < 25 - n))) {
                printf("%c", b);
            }
            else {
                printf("%c", a);
            }
        }
        n = n + 2;
        printf("\n");
    }
    // �������֣�������棬�߶�Ϊ3 
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 80; j++) {
            if (j % 2 == 0) {
                printf("%c", b);
            }
            else {
                printf("%c", a);
            }

        }
        printf("С��\n");
    }
    return 0;
}
