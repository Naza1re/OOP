#include "Header.h"

using namespace std;


trapezoid::trapezoid(double R, double H, double D) : Triangle(R, H, D) {

}


Triangle::Triangle(double R, double H, double D) {
	this->side = R;
	this->side2 = H;
	this->height = D;
}

double Triangle::S() {
	cout << "������� �������: ";
	cin >> side;

	cout << "������� ������ ����������� : ";
	cin >> this->height;


	double TR;
	TR = (this->side * this->height) / 2;

	return TR;
}

void Triangle::show() {

	cout << "_______________________________________" << endl;
	cout << endl;
	cout << "������� ������������: " << S() << endl;
	cout << "_______________________________________" << endl;
}


