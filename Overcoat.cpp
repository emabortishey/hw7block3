#include "Overcoat.h"

Overcoat& Overcoat::operator=(const Overcoat& obj)
{
	// ��������, ������������ � �������������
	delete[] type;
	type = { new char[strlen(obj.type) + 1] };
	strcpy_s(type, strlen(obj.type) + 1, obj.type);
	cost = obj.cost;
	return *this;
}