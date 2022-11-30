#include"Header.h"

double trapezoid::S() {
	cout << "¬ведите сторону трапеции : ";
	cin >> this->side;

	cout << "¬ведите вторую сторону трапеции  : ";
	cin >> this->side2;

	cout << "¬ведите высоту трапеции  : ";
	cin >> this->height;



	double TR;
	TR = ((this->side + this->side2) / 2) * this->height;

	return TR;
}

void trapezoid::show() {

	cout << "_______________________________________" << endl;
	cout << endl;
	cout << "ѕлоадь трапеции: " << S() << endl;
	cout << "_______________________________________" << endl;
}