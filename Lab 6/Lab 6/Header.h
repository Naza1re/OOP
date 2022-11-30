#pragma once
#include <iostream>
#include<iomanip>

using namespace std;

class Triangle {
public:

	double side;
	double side2;
	double height;



	Triangle(double, double, double);

	double S();
	void show();
};
class trapezoid : public Triangle {
public:

	trapezoid(double, double, double);

	double S();
	void show();

};