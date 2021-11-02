#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "player.h"
using namespace std;

struct player enterPlayer() { // Функция ввода
	player playerr;
	printf("\n\nВведите позицию: ");
	scanf("%s", &playerr.position);
	while (getchar() != '\n');
	printf("Введите вес: ");
	while (scanf("%d", &playerr.weigh) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите позицию: ");
	}
	printf("Введите рост: ");
	while (scanf("%d", &playerr.height) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите цену закупа еды: ");
	}
	printf("\nВведите минимальную дату рождения: ");
	playerr.plr = enterDate();
	return playerr;
}
struct player createPlayer(char p[15], int w, int h, date plrC) { //Функция создания
	player playerr;
	strcpy(playerr.position, p);
	playerr.weigh = w;
	playerr.height = h;
	playerr.plr = plrC;
	return playerr;
}
void printPlayer(player pl1) { //Функция вывода 
	printf("\n\nИнформация: %s %d %d", pl1.position, pl1.weigh, pl1.height);
	printf("\nДата Рождения: ");
	printDate(pl1.plr);
}