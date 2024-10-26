#pragma once
#include <iostream>
#include "Flat.h"
#include "Overcoat.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	Flat flat1(20, 100);
	Flat flat2(30, 400);

	if (flat1 < flat2)
	{
		cout << "������ �������� ����� ������� ������";
	}
	else
	{
		cout << "������ �������� ����� ������� ������";
	}

	Overcoat first("������", 5000);
	Overcoat second("������", 3500);

	if (first < second) 
	{
		cout << "\n������ ������ ����� ������� �������";
	}
	else
	{
		cout << "\n������ ������ ����� ������� �������";
	}

	return 0;
}