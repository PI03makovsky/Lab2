#pragma once
#include "tenant.h"
struct orginf { //��������� �����.����������
	int price; //���� ������ ���
	int rent; //����� ������
	tenant orgnf; //������ �� ���������� ���������
};

struct orginf enterOrginf(); //������� ����� 
struct orginf createOrginf(int p, int r, tenant orgnfI); //������� �������� 
void printOrginf(orginf pr1); //������� ������
void valueOrginf(orginf pr1); //������� ������� ���� � ������ ������