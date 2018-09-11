#include "Cat.h"
#include "Dog.h"
#include "Mouse.h"
#include "Horse.h"
#include "Snake.h"
#include "Fish.h"
#include "Animals.h"
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

Animals::Animals() {}

void Animals::Create_Animals() {
	cout << "Выберите тип объекта:\n";
	cout << "|1| - Кошка\n";
	cout << "|2| - Собака\n";
	cout << "|3| - Мышь\n";
	cout << "|4| - Лошадь\n";
cout << "|5| - Змея\n";
cout << "|6| - Рыбка\n";
	cout << "|0| - Назад\n";
	cin >> O_b_j;
	switch (O_b_j) {
	case 1: {
		Cat * O_b_j_1 = new Cat();
		O_b_j_1->Vivod_in_not_fail();
		O_b_j_1->Vivod_in_fail();
		delete O_b_j_1;
		break;
	}
	case 2: {
		Dog * O_b_j_1 = new Dog();
		O_b_j_1->Vivod_in_not_fail();
		O_b_j_1->Vivod_in_fail();
		delete O_b_j_1;
		break;
	}
	case 3: {
		Mouse * O_b_j_1 = new Mouse();
		O_b_j_1->Vivod_in_not_fail();
		O_b_j_1->Vivod_in_fail();
		delete O_b_j_1;
		break;
	}
	case 4: {
		Horse * O_b_j_1 = new Horse();
		O_b_j_1->Vivod_in_not_fail();
		O_b_j_1->Vivod_in_fail();
		delete O_b_j_1;
		break;
	}
	case 5: {
		Snake * O_b_j_1 = new Snake();
		O_b_j_1->Vivod_in_not_fail();
		O_b_j_1->Vivod_in_fail();
		delete O_b_j_1;
		break;
	}
	case 6: {
		Fish * O_b_j_1 = new Fish();
		O_b_j_1->Vivod_in_not_fail();
		O_b_j_1->Vivod_in_fail();
		delete O_b_j_1;
		break;
	}

	case 0: break;
	}
}

Animals::~Animals() {
	cout << "Конец работы!";

}
