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
		cout << "Первая квартира стоит дешевле второй";
	}
	else
	{
		cout << "Вторая квартира стоит дешевле первой";
	}

	Overcoat first("свитер", 5000);
	Overcoat second("свитер", 3500);

	if (first < second) 
	{
		cout << "\nПервый свитер стоит дешевле второго";
	}
	else
	{
		cout << "\nВторой свитер стоит дешевле первого";
	}

	return 0;
}