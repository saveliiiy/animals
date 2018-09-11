#include "Snake.h"
#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

Snake::Snake() {
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

void Snake::Vivod_in_not_fail() {
	cout << endl << "Порода - " << breed << endl;
	cout << "Окрас - " << color << endl;
	cout << "Кличка - " << name << endl;
	cout << "Пол - " << pol << endl;
	cout << "Дата рождения - " << date_of_birth << endl;
	cout << "Размеры - " << dimensions << endl;
	cout << "Имя владельца - " << owner_name << endl;
	cout << "Наименование питомника - " << nursery_name << endl;
	cout << "Характер - " << character << endl;
}

void Snake::Vivod_in_fail() {
	ofstream file1("Animals.txt", ios_base::app);
	file1 << "---------------------------------" << endl;
	file1 << "Змея" << endl;
file1 << "Порода - " << breed << endl;
file1 << "Окрас - " << color << endl;
file1 << "Кличка - " << name << endl;
file1 << "Пол - " << pol << endl;
file1 << "Дата рождения - " << date_of_birth << endl;
file1 << "Размеры - " << dimensions << endl;
file1 << "Имя владельца - " << owner_name << endl;
file1 << "Наименование питомника - " << nursery_name << endl;
file1 << "Характер - " << character << endl;
	file1 << "---------------------------------" << endl;
	file1 << "\n\n";
	file1.close();
}
Snake::~Snake() {}
