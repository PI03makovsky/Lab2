#pragma once
#include "player.h"

struct inventory {
	int nballs; // ���������� �����
	int ngates; // ���������� �����
	char typeOFc[20]; // ��� ��������
	player invntr; // ������ �� ���������� �����
};
struct inventory enterInventory(); //������� ����� 
struct inventory createInventory(int nb, int ng, char toc[20], inventory invntrY); //������� �������� 
void printInventory(inventory invntr1); //������� ������
void valueInventory(inventory invntr1); //������� ������� �������� � ���������