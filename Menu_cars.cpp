#include "Menu_cars.h"



void Menu_cars:: Add_car()
{
	string name;
	int year_of_issue;
	float engine_capacity;
	int price;
	cout << "Enter name car" << endl;
	cout << "->";
	cin >> name;
	cout << "Enter year of issue" << endl;
	cout << "->";
	cin >> year_of_issue;
	cout << "Enter engine capacity" << endl;
	cout << "->";
	cin >> engine_capacity;
	cout << "Enter price" << endl;
	cout << "->";
	cin >> price;

	cl.Add_car(Ñar(name, year_of_issue, engine_capacity, price));
}

void Menu_cars::Delete_front()
{
	cl.Delete_front();
}

void Menu_cars::Delete_back()
{
	cl.Delete_back();
}

void Menu_cars::Delete_all()
{
	cl.Delete_all();
}

void Menu_cars::Delete_by_name_car()
{
	string name;
	cout << "Enter name car" << endl;
	cout << "->";
	cin >> name;
	cl.Delete_by_name_car(name);
}

void Menu_cars::Show_all_cars()
{
	cl.Show_all_cars();
}
void Menu_cars::Show_by_name_car()
{
	string name;
	cout << "Enter name car" << endl;
	cout << "->";
	cin >> name;
	cl.Show_by_name_car(name);

}

void Menu_cars::Show_by_year()
{
	int year_of_issue;
	cout << "Enter year of issue" << endl;
	cout << "->";
	cin >> year_of_issue;
	cl.Show_by_year(year_of_issue);
}

void Menu_cars::Show_by_price()
{
	int price;
	cout << "Enter price" << endl;
	cout << "->";
	cin >> price;
	cl.Show_by_price(price);
}

void Menu_cars::Sort_by_name_()
{
	cl.Sort_by_name_();
}

void Menu_cars::Sort_by_prise_()
{
	cl.Sort_by_prise_();
}



void Menu_cars::Menu()
{
	int chois = 0;
	do
	{
		cout << " Car dealership" << endl;
		cout << "1-Add car" << endl;
		cout << "2-Delete front car" << endl;
		cout << "3-Delete back car" << endl;
		cout << "4-Delete all cars" << endl;
		cout << "5-Delete by name car" << endl;
		cout << "6-Show all cars" << endl;
		cout << "7-Show by name car" << endl;
		cout << "8-Show by year" << endl;
		cout << "9-Show by price" << endl;
		cout << "10- Sort by name" << endl;
		cout << "11- Sort by prise" << endl;
		cout << "12- exit" << endl;
		cout << "->";
		cin >> chois;
		system("cls");
		switch (chois)
		{
		case 1:
		{

			Add_car();

		}
		break;
		case 2:
		{
			Delete_front();

		}
		break;
		case 3:
		{
			Delete_back();

			break;
		case 4:
		{
			Delete_all();

		}
		break;
		case 5:
		{
			Delete_by_name_car();

		}
		break;
		case 6:
		{
			Show_all_cars();

		}
		break;
		case 7:
		{
			Show_by_name_car();
		}
		break;
		case 8:
		{
			Show_by_year();
		}
		break;
		case 9:
		{
			Show_by_price();
		}
		break;
		case 10:
		{
			Sort_by_name_();
		}
		break;
		case 11:
		{
			Sort_by_prise_();
		}
		break;
		case 12:
		{
			cout << "bye";

		}
		break;
		}
		}
		system("pause");
		system("cls");
	} while (chois != 12);
}