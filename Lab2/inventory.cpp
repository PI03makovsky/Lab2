#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "inventory.h"
using namespace std;

struct inventory enterInventory() {
	inventory invntrr;
	printf("\n\n������� ���������� �����: ");
	while (scanf("%d", &invntrr.nballs) != 1) {
		while (getchar() != '\n');
		printf("������. ������� ���������� �����: ");
	}
	printf("������� ���������� �����: ");
	while (scanf("%d", &invntrr.ngates) != 1) {
		while (getchar() != '\n');
		printf("������. ������� ���������� �����: ");
	}
	printf("������� ��� ��������(������������ ��� �����������): ");
	scanf("%s", &invntrr.typeOFc);
	while (getchar() != '\n');
	printf("\n������� ������ �� �����, ������� ����� ����������� ��� ����(�������� ��� �����): ");
	invntrr.invntr = enterPlayer();
	return invntrr;
}
struct inventory createInventory(int nb, int ng, char toc[20], player invntrY) { // ������� ��������
	inventory invntrr;
	invntrr.nballs = nb;
	invntrr.ngates = ng;
	strcpy(invntrr.typeOFc, toc);
	invntrr.invntr = invntrY;
	return invntrr;
}
void printInventory(inventory invntr1) { // ������� ������
	printf("\n���������� �����: %d", invntr1.nballs);
	printf("\n����� ������: %d", invntr1.ngates);
	printf("\n��� ��������: %s", invntr1.typeOFc);
	printPlayer(invntr1.invntr);
}
void valueInventory(inventory invntr1) { // ������� �������� �������� �����
	//inventory invntrr;
	int rREF = 0;
	rREF = (invntr1.nballs * 100) + (invntr1.ngates * 75);
	printf("\n�������� � ���������: %d ", rREF);

}