#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "player.h"
using namespace std;

struct player enterPlayer() { // ������� �����
	player playerr;
	printf("\n\n������� �������: ");
	scanf("%s", &playerr.position);
	while (getchar() != '\n');
	printf("������� ���: ");
	while (scanf("%d", &playerr.weigh) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �������: ");
	}
	printf("������� ����: ");
	while (scanf("%d", &playerr.height) != 1) {
		while (getchar() != '\n');
		printf("������. ������� ���� ������ ���: ");
	}
	printf("\n������� ����������� ���� ��������: ");
	playerr.plr = enterDate();
	return playerr;
}
struct player createPlayer(char p[15], int w, int h, date plrC) { //������� ��������
	player playerr;
	strcpy(playerr.position, p);
	playerr.weigh = w;
	playerr.height = h;
	playerr.plr = plrC;
	return playerr;
}
void printPlayer(player pl1) { //������� ������ 
	printf("\n\n����������: %s %d %d", pl1.position, pl1.weigh, pl1.height);
	printf("\n���� ��������: ");
	printDate(pl1.plr);
}