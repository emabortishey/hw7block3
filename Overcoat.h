#pragma once
#include <iostream>
using namespace std;

class Overcoat
{
	char* type;
	int cost;
public:
	// конструкторы
	Overcoat() : Overcoat(nullptr, 0) {}
	explicit Overcoat(const char* type_P) : Overcoat(type_P, 0) {}
	// с помощью тернарного оператора инициализируем динамический массив символов типа
	Overcoat(const char* type_P, int cost_P) : cost{ cost_P } { !type_P ? type = { new char[strlen(type_P) + 1] {*type_P} } : type = { new char[100] {"none"}}; }
	Overcoat(const Overcoat& obj) : cost{obj.cost} { !obj.type ? type = { new char[strlen(obj.type) + 1] {*obj.type} } : type = { new char[100] {"none"} }; }

	// модификаторы
	void set_type(char* type_P) { delete[] type; type = new char[strlen(type_P) + 1] {*type_P}; }
	void set_cost(int cost_P) { cost = cost_P; }

	// перегрузки операторов
	Overcoat& operator=(const Overcoat& obj);

	friend bool operator==(const Overcoat& obj, const Overcoat& obj2) { return (strcmp(obj.type, obj2.type) == 0); }
	friend bool operator>(const Overcoat& obj, const Overcoat& obj2) { if (obj == obj2) { return (obj.cost > obj2.cost); } return 404; }
	friend bool operator<(const Overcoat& obj, const Overcoat& obj2) { if (obj == obj2) { return (obj.cost < obj2.cost); } return 404; }

	//аксессоры
	// возвращаем константу для невозможности пользователем изменения значения атрибута
	const char* get_type() { return type; }
	int get_cost() { return cost; }

	// деструктор 
	~Overcoat()
	{
		delete[] type;
	}
};

