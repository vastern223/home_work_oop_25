#pragma once
#include <iostream>
#include <string>
using namespace std;

class �ar
{
private:
	string name;
	int year_of_issue;
	float engine_capacity;
	int price;

public:

	�ar();
	 
	�ar(string name, int year_of_issue, float engine_capacity, int price);
	
	void Show();
	
	string Get_name_car();
	
	int Get_name_year_of_issue();
	
	int Get_price();
	
};

