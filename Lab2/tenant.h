#pragma once
#include "date.h"
struct tenant { //��������� ���������
	char name[15]; //���
	char surname[25]; //�������
	char patronymic[30]; //��������
	date tnt; //������ �� ���������� ����
};

struct tenant createTenant(char n[15], char s[25], char p[30], date tnt�); //������� ��������
struct tenant enterTenant(); //������� �����
void printTenant(tenant tenant1); //������� ������