#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

class Matrix {

	float a11 = 0;
	float a12 = 0;
	float a21 = 0;
	float a22 = 0;

	float* matr[2][2] = { &a11, &a12, &a21, &a22 };
public:
	void show();

	Matrix* operator + (Matrix);
	Matrix* operator * (Matrix);

	friend istream& operator >> (istream&, Matrix&);
	friend ostream& operator << (ostream&, Matrix);
};



