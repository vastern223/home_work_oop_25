#pragma once
#include"Car_dealership.h"

class Menu_cars
{
private:
	Car_dealership cl;

	void Add_car();
	
	void Delete_front();
	
	void Delete_back();
	
	void Delete_all();
	
	void Delete_by_name_car();
	
	void Show_all_cars();
	
	void Show_by_name_car();
	
	void Show_by_year();
	
	void Show_by_price();
	
	void Sort_by_name_();
	
	void Sort_by_prise_();
	
public:

	void Menu();
	
};

