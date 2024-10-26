#pragma once
#include <iostream>
using namespace std;

class Overcoat
{
	char* type;
	int cost;
public:
	Overcoat() : Overcoat(nullptr, 0) {}
	explicit Overcoat(const char* type_P) : Overcoat(type_P, 0) {}
	Overcoat(const char* type_P, int cost_P) : cost{ cost_P } { !type_P ? type = { new char[strlen(type_P) + 1] {*type_P} } : type = { new char[100] {"none"}}; }
	Overcoat(const Overcoat& obj) : cost{obj.cost} { !obj.type ? type = { new char[strlen(obj.type) + 1] {*obj.type} } : type = { new char[100] {"none"} }; }

	void set_type(char* type_P) { delete[] type; type = new char[strlen(type_P) + 1] {*type_P}; }
	void set_cost(int cost_P) { cost = cost_P; }


	const char* get_type() { return type; }
	int get_cost() { return cost; }
};

