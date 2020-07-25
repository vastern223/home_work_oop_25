#include"Car_dealership.h"

void Car_dealership:: Add_car(const Ñar& car)
{
	cars.push_back(car);
}


void Car_dealership::Delete_front()
{
	cars.pop_front();
}

void Car_dealership::Delete_back()
{
	cars.pop_back();
}

void Car_dealership::Delete_all()
{
	cars.erase(cars.begin(), cars.end());
}

void Car_dealership::Delete_by_name_car(string name)
{
	for (auto iter = cars.begin(); iter != cars.end(); iter++)
	{
		if ((*iter).Get_name_car() == name)
		{
			cars.erase(iter);
		}
		break;
	}
}

void Car_dealership::Show_all_cars()
{
	if (!cars.empty())
	{
		cout << "Information about all cars\n\n ";
		for (auto iter = cars.begin(); iter != cars.end(); iter++)
		{
			(*iter).Show();
			cout << endl;
		}
	}
}


void Car_dealership::Show_by_name_car(string name)
{
	for (auto iter = cars.begin(); iter != cars.end(); iter++)
	{
		if ((*iter).Get_name_car() == name)
		{
			(*iter).Show();
			break;
		}

	}
}

void Car_dealership::Show_by_year(int year)
{
	for (auto iter = cars.begin(); iter != cars.end(); iter++)
	{
		if ((*iter).Get_name_year_of_issue() == year)
		{
			(*iter).Show();

		}

	}
}

void Car_dealership::Show_by_price(int price)
{
	for (auto iter = cars.begin(); iter != cars.end(); iter++)
	{
		if ((*iter).Get_price() == price)
		{
			(*iter).Show();

		}
	}
}

void Car_dealership::Sort_by_name_()
{
	cars.sort(Sort_by_name());
}
void Car_dealership::Sort_by_prise_()
{
	cars.sort(Sort_by_prise());
}