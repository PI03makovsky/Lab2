#define _CRT_SECURE_NO_WARNINGS
#include "locale.h"
#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <Windows.h>
#include "date.h" // дата
#include "tenant.h" // арендатор
#include "orginf.h" // организационная информация
#include "player.h" // игрок
#include "inventory.h" // инвентарь

int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int numberOFdays = 0;
    date dataEST, dataINPUT;
    tenant tenantFIO;
    orginf orginfINF;
    player playerADD;
    inventory inventoryTHINGS;
    dataEST = createDate(30, 10, 2021); //Функция создания даты
    dataINPUT = createDate(20, 1, 2011); //Функция создания даты
    numberOFdays = difDate(dataEST, dataINPUT); //Количество дней между датами
    printf("Введены даты: ");
    printDate(dataEST); //Вывод даты
    printf(" и ");
    printDate(dataINPUT); //Вывод даты
    printf("\nКоличество дней между датами: %d", numberOFdays);
    tenantFIO = enterTenant(); //Ввод данных о водителе
    printTenant(tenantFIO);//Вывод данных о водителе
    orginfINF = enterOrginf(); // ввод данных об организационной информации
    valueOrginf(orginfINF); // подсчёты цены
    printOrginf(orginfINF); // вывод данных об организационной информации
    playerADD = enterPlayer(); //Ввод данных о игроке
    printPlayer(playerADD);//Вывод данных о игроке
    inventoryTHINGS = enterInventory(); // ввод данных об инвенторе
    valueInventory(inventoryTHINGS); // подсчёт надбавки к стоимости
    printInventory(inventoryTHINGS); // вывод данных об инвентаре
}