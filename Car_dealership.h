#pragma once
#include"Ñar.h"
#include<list>
#include<algorithm>


class Sort_by_name
{
public:

	bool operator()(Ñar& car1, Ñar& car2)
	{
		return car1.Get_name_car() < car2.Get_name_car();
	}

};

class Sort_by_prise
{
public:

	bool operator()(Ñar& car1, Ñar& car2)
	{
		return car1.Get_price() < car2.Get_price();
	}

};

class Car_dealership
{
private:
	list<Ñar>cars;

public:

	void Add_car(const Ñar& car);
	
	void Delete_front();
	
	void Delete_back();
	
	void Delete_all();
	
	void Delete_by_name_car(string name);
	
	void Show_all_cars();

	void Show_by_name_car(string name);

	void Show_by_year(int year);

	void Show_by_price(int price);
	
	void Sort_by_name_();
	
	void Sort_by_prise_();
		
};

