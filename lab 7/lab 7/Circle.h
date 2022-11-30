#pragma once
#pragma once
#pragma once
#include "Figure.h"

using namespace std;

class Circle : public Figure {
public:

	Circle();
	~Circle() {
		cout << "Запущен деструктор";
	}
	float area();
	friend ifstream& operator >> (ifstream&, Circle&);
};
