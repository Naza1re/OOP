#include"Header.h"

double trapezoid::S() {
	cout << "������� ������� �������� : ";
	cin >> this->side;

	cout << "������� ������ ������� ��������  : ";
	cin >> this->side2;

	cout << "������� ������ ��������  : ";
	cin >> this->height;



	double TR;
	TR = ((this->side + this->side2) / 2) * this->height;

	return TR;
}

void trapezoid::show() {

	cout << "_______________________________________" << endl;
	cout << endl;
	cout << "������ ��������: " << S() << endl;
	cout << "_______________________________________" << endl;
}