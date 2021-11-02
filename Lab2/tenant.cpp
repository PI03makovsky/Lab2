#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "tenant.h"
using namespace std;

struct tenant enterTenant() { //Функция ввода 
	tenant tenantt;
	printf("\n\nВведите имя: ");
	scanf("%s", &tenantt.name);
	while (getchar() != '\n');
	printf("Введите фамилию: ");
	scanf("%s", &tenantt.surname);
	while (getchar() != '\n');
	printf("Введите отчество: ");
	scanf("%s", &tenantt.patronymic);
	while (getchar() != '\n');
	printf("\n\nДата вашего рождения: ");
	tenantt.tnt = enterDate();
	return tenantt;
}
struct tenant createTenant(char n[15], char s[25], char p[30], date tntС) {
	tenant tenantt;
	strcpy(tenantt.name, n);
	strcpy(tenantt.surname, s);
	strcpy(tenantt.patronymic, s);
	tenantt.tnt = tntС;
	return tenantt;
}
void printTenant(tenant tenant1) {
	printf("\n\nФИО %s %s %s", tenant1.surname, tenant1.name, tenant1.patronymic);
	printf("\nДата Рождения: ");
	printDate(tenant1.tnt);

}