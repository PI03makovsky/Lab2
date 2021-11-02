#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "orginf.h"
using namespace std;

struct orginf enterOrginf() { //Функция ввода 
	orginf orginff;
	printf("\n\nВведите цену закупа еды: ");
	while (scanf("%d", &orginff.price) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите цену закупа еды: ");
	}
	printf("Введите время аренды(только почасовая оплата): ");
	while (scanf("%d", &orginff.rent) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите время аренды(только почасовая оплата): ");
	}
	printf("\nВведите ФИО поручителя вслучае форсмажора: ");
	orginff.orgnf = enterTenant();
	return orginff;
}
struct orginf createOrginf(int p, int r, tenant orgnfI) { //Функция создания
	orginf orginff;
	orginff.price = p;
	orginff.rent = r;
	orginff.orgnf = orgnfI;
	return orginff;
}
void printOrginf(orginf pr1) { //Функция вывода
	printf("\nЦена закупа еды: %d", pr1.price);
	printf("\nВремя аренды: %d", pr1.rent);
	printf("\nИнформация о поручителе: ");
	printTenant(pr1.orgnf);
}
void valueOrginf(orginf pr1) { //Функция расчета цены с учетом скидки
	orginf orginff;
	int rPRICE = 0;
	int fPRICE = 500;
	rPRICE = fPRICE + pr1.price * pr1.rent;
	printf("\nЦена аренды: %d ", rPRICE);
}