#include "Cat.h"
#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

Cat::Cat() {
	cout << "Порода\n";
	cin >> breed;
	cout << "Окрас\n";
	cin >> color;
	cout << "Кличка\n";
	cin >> name;
	cout << "Пол\n";
	cin >> pol;	
	cout << "Дата рождения\n";
	cin >> date_of_birth;
	cout << "Размеры\n";
	cin >> dimensions;
	cout << "Имя владельца \n";
	cin >> owner_name;
	cout << "Наименование питомника\n";
	cin >> nursery_name;
	cout << "Характер\n";
	cin >> character;

}
