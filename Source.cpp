#pragma once
#include <iostream>
#include "Flat.h"
#include "Overcoat.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	// создание переменных класса квартира
	Flat flat1(20, 100);
	Flat flat2(30, 400);

	// тест: проверка разницы цен на квартиры
	if (flat1 < flat2)
	{
		cout << "Первая квартира стоит дешевле второй";
	}
	else
	{
		cout << "Вторая квартира стоит дешевле первой";
	}

	//создание переменных класса верхняя одежда
	Overcoat first("свитер", 5000);
	Overcoat second("свитер", 3500);

	// тест2: проверка на разности цен на свитера
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