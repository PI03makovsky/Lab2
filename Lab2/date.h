#pragma once
struct date { //��������� ����
	int day; //����
	int month; //�����
	int year; //���
};
struct date createDate(int d, int m, int y); //������� ��������
struct date enterDate(); //������� �����
void printDate(date date1); //������� ������
int difDate(date date1, date date2); //������� �������� ���� ����� ������