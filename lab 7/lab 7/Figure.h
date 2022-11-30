#pragma once
#pragma once
#pragma once
#include <iostream>
#include <fstream>
#include <Windows.h>

using namespace std;

class Figure {
public:
	char type;
	float pi = 3.1415;
	float radius = 0;
	float fi = 0;
	virtual float area() = 0;
	~Figure() {
		cout << "Запущен деструктор\n";
	}
};
void sorty(Figure**, int);
