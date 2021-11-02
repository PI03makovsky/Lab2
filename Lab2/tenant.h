#pragma once
#include "date.h"
struct tenant { //Структура арендатор
	char name[15]; //имя
	char surname[25]; //фамилия
	char patronymic[30]; //отчество
	date tnt; //связка со структурой дата
};

struct tenant createTenant(char n[15], char s[25], char p[30], date tntС); //Функция создания
struct tenant enterTenant(); //Функция ввода
void printTenant(tenant tenant1); //Функция вывода