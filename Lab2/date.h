#pragma once
struct date { //Структура дата
	int day; //День
	int month; //Месяц
	int year; //Год
};
struct date createDate(int d, int m, int y); //Функция создания
struct date enterDate(); //Функция ввода
void printDate(date date1); //Функция вывода
int difDate(date date1, date date2); //Функция рассчета дней между датами