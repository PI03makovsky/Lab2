#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "orginf.h"
using namespace std;

struct orginf enterOrginf() { //������� ����� 
	orginf orginff;
	printf("\n\n������� ���� ������ ���: ");
	while (scanf("%d", &orginff.price) != 1) {
		while (getchar() != '\n');
		printf("������. ������� ���� ������ ���: ");
	}
	printf("������� ����� ������(������ ��������� ������): ");
	while (scanf("%d", &orginff.rent) != 1) {
		while (getchar() != '\n');
		printf("������. ������� ����� ������(������ ��������� ������): ");
	}
	printf("\n������� ��� ���������� ������� ����������: ");
	orginff.orgnf = enterTenant();
	return orginff;
}
struct orginf createOrginf(int p, int r, tenant orgnfI) { //������� ��������
	orginf orginff;
	orginff.price = p;
	orginff.rent = r;
	orginff.orgnf = orgnfI;
	return orginff;
}
void printOrginf(orginf pr1) { //������� ������
	printf("\n���� ������ ���: %d", pr1.price);
	printf("\n����� ������: %d", pr1.rent);
	printf("\n���������� � ����������: ");
	printTenant(pr1.orgnf);
}
void valueOrginf(orginf pr1) { //������� ������� ���� � ������ ������
	orginf orginff;
	int rPRICE = 0;
	int fPRICE = 500;
	rPRICE = fPRICE + pr1.price * pr1.rent;
	printf("\n���� ������: %d ", rPRICE);
}