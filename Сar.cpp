#include"Ñar.h"

Ñar::Ñar():name("no_name"), year_of_issue(0), engine_capacity(0), price(0) { }

Ñar::Ñar(string name, int year_of_issue, float engine_capacity, int price)
{
	this->name = name;
	this->year_of_issue = year_of_issue;
	this->engine_capacity = engine_capacity;
	this->price = price;
}

void Ñar::Show()
{
	cout << "Information about the car" << endl;
	cout << "<------------------------>" << endl;
	cout << "Name: " << name << endl;
	cout << "Year of issue: " << year_of_issue << endl;
	cout << "Engine capacity: " << engine_capacity << endl;
	cout << "Price: " << price << endl;
}

string Ñar::Get_name_car()
{
	return name;
}
int Ñar::Get_name_year_of_issue()
{
	return year_of_issue;
}

int Ñar::Get_price()
{
	return price;
}