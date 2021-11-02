#pragma once
#include "tenant.h"
struct orginf { //Структура орган.информация
	int price; //цена закупа еды
	int rent; //время аренды
	tenant orgnf; //связка со структурой арендатор
};

struct orginf enterOrginf(); //Функция ввода 
struct orginf createOrginf(int p, int r, tenant orgnfI); //Функция создания 
void printOrginf(orginf pr1); //Функция вывода
void valueOrginf(orginf pr1); //Функция расчета цены с учетом скидки