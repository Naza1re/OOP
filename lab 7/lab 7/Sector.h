#pragma once
#pragma once
#pragma once
#include "Figure.h"

using namespace std;

class Sector : public Figure {
public:

	Sector();
	~Sector()
	{
		cout << "������� ����������";
	}
	float area();
	friend ifstream& operator >> (ifstream&, Sector&);

};


