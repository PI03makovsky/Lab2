#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "date.h"
using namespace std;

struct date enterDate() { //������� ����� 
	date data;
	printf("\n������� ����: ");
	while (scanf("%d", &data.day) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}
	printf("������� �����: ");
	while (scanf("%d", &data.month) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}
	printf("������� ���: ");
	while (scanf("%d", &data.year) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}
	return data;
}

void printDate(date date1) { //������ ������ 
	printf("%d.%d.%d", date1.day, date1.month, date1.year);
}


struct date createDate(int d, int m, int y) { //������� �������� 
	date data;
	data.day = d;
	data.month = m;
	data.year = y;
	return data;
}

int difDate(date date1, date date2) {  //�������, �������������� ���������� ����
	int kdate, sum1;
	if (date1.month < 3) {
		date1.year--, date1.month += 12;
	}
	kdate = 365 * date1.year + date1.year / 4 - date1.year / 100 + date1.year / 400 + (153 * date1.month - 457) / 5 + date1.day - 306;
	if (date2.month < 3) {
		date2.year--, date2.month += 12;
	}
	sum1 = 365 * date2.year + date2.year / 4 - date2.year / 100 + date2.year / 400 + (153 * date2.month - 457) / 5 + date2.day - 306;
	if (kdate < sum1) {
		printf("������. ������ ���� ������ ������.");
	}
	else {
		return kdate - sum1;
	}
}