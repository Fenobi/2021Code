#pragma once
#include<stdio.h>
#include<time.h>
#include<Windows.h>

#define ROW 9//��ӡ���������̴�С
#define COL 9//��ӡ���������̴�С

#define ROWS ROW+2//ʵ�����̴�С��Ϊ�˷�ֹԽ��
#define COLS COL+2//ʵ�����̴�С��Ϊ�˷�ֹԽ��

#define EASY_COUNT 10//��ģʽ10����Ȼ������Լ�����Ҫ������С

//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
//��ӡ����
void DisplayBoard(char mine[ROWS][COLS], int row, int col);
//������
void SetMine(char mine[ROWS][COLS], int row, int col);
//����
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);