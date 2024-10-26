#pragma once
#include <iostream>
using namespace std;

class Flat 
{
	int area;
	int cost;
public:
	Flat() : Flat(0, 0) {}
	explicit Flat(int area_P) : Flat(area_P, 0) {}
	Flat(int area_P, int cost_P) : cost{ cost_P }, area{ area_P } { }
	Flat(const Flat& obj) : cost{ obj.cost }, area{ obj.area } { }

	void set_area(int area_P) { area = area_P; } 
	void set_cost(int cost_P) { cost = cost_P; }

	Flat& operator=(const Flat& obj) { area = obj.area; cost = obj.cost; return *this; } 

	friend bool operator==(const Flat& obj, const Flat& obj2) { return (obj.area == obj2.area); }
	friend bool operator>(const Flat& obj, const Flat& obj2) { return (obj.cost > obj2.cost); }
	friend bool operator<(const Flat& obj, const Flat& obj2) { return (obj.cost < obj2.cost); }

	int get_area() { return area; }
	int get_cost() { return cost; }
};

