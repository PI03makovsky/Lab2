#pragma once
#include "date.h"

struct player {
	char position[15]; // позиция
	int weigh; // вес
	int height; // рост
	date plr; // связка со структурой дата
};

struct player enterPlayer(); //Функция ввода 
struct player createPlayer(char p[15], int w, int h, date plrC, player plrR); //Функция создания 
void printPlayer(player pl1); //Функция вывода 