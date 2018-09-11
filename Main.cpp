#include "Animals.h"
#include "stdafx.h"
#include <iostream>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	Animals s;
	int button = 1;
	while (button) {
		cout << "Выберите действие:\n";
		cout << "|1| - Добавить животного\n";
		cout << "|0| - Выход\n";
		cin >> button;
		switch (button) {
		case 1: s.Create_Animals(); break;
		case 0: break;
		}
	}

	return 0;

}
