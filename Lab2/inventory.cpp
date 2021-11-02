#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "inventory.h"
using namespace std;

struct inventory enterInventory() {
	inventory invntrr;
	printf("\n\nВведите количество мячей: ");
	while (scanf("%d", &invntrr.nballs) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите количество мячей: ");
	}
	printf("Введите количество ворот: ");
	while (scanf("%d", &invntrr.ngates) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите количество ворот: ");
	}
	printf("Введите тип покрытия(Искуственное или натуральное): ");
	scanf("%s", &invntrr.typeOFc);
	while (getchar() != '\n');
	printf("\nВведите одного из судей, который будет обслуживать ваш матч(Лайнсмен или Судья): ");
	invntrr.invntr = enterPlayer();
	return invntrr;
}
struct inventory createInventory(int nb, int ng, char toc[20], player invntrY) { // Функция создания
	inventory invntrr;
	invntrr.nballs = nb;
	invntrr.ngates = ng;
	strcpy(invntrr.typeOFc, toc);
	invntrr.invntr = invntrY;
	return invntrr;
}
void printInventory(inventory invntr1) { // Функция вывода
	printf("\nКоличество мячей: %d", invntr1.nballs);
	printf("\nВремя аренды: %d", invntr1.ngates);
	printf("\nТип покрытия: %s", invntr1.typeOFc);
	printPlayer(invntr1.invntr);
}
void valueInventory(inventory invntr1) { // Функция подсчёта рейтинга судьи
	//inventory invntrr;
	int rREF = 0;
	rREF = (invntr1.nballs * 100) + (invntr1.ngates * 75);
	printf("\nНадбавка к стоимости: %d ", rREF);

}