#pragma once
#include "date.h"

struct player {
	char position[15]; // �������
	int weigh; // ���
	int height; // ����
	date plr; // ������ �� ���������� ����
};

struct player enterPlayer(); //������� ����� 
struct player createPlayer(char p[15], int w, int h, date plrC, player plrR); //������� �������� 
void printPlayer(player pl1); //������� ������ 