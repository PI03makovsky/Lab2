#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "tenant.h"
using namespace std;

struct tenant enterTenant() { //������� ����� 
	tenant tenantt;
	printf("\n\n������� ���: ");
	scanf("%s", &tenantt.name);
	while (getchar() != '\n');
	printf("������� �������: ");
	scanf("%s", &tenantt.surname);
	while (getchar() != '\n');
	printf("������� ��������: ");
	scanf("%s", &tenantt.patronymic);
	while (getchar() != '\n');
	printf("\n\n���� ������ ��������: ");
	tenantt.tnt = enterDate();
	return tenantt;
}
struct tenant createTenant(char n[15], char s[25], char p[30], date tnt�) {
	tenant tenantt;
	strcpy(tenantt.name, n);
	strcpy(tenantt.surname, s);
	strcpy(tenantt.patronymic, s);
	tenantt.tnt = tnt�;
	return tenantt;
}
void printTenant(tenant tenant1) {
	printf("\n\n��� %s %s %s", tenant1.surname, tenant1.name, tenant1.patronymic);
	printf("\n���� ��������: ");
	printDate(tenant1.tnt);

}