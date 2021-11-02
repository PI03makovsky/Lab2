#pragma once
#include "player.h"

struct inventory {
	int nballs; // количество мячей
	int ngates; // количество ворот
	char typeOFc[20]; // тип покрытия
	player invntr; // связка со структурой игрок
};
struct inventory enterInventory(); //Функция ввода 
struct inventory createInventory(int nb, int ng, char toc[20], inventory invntrY); //Функция создания 
void printInventory(inventory invntr1); //Функция вывода
void valueInventory(inventory invntr1); //Функция расчета надбавки к стоимости