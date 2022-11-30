#include "Header.h"

using namespace std;


int main() {
	setlocale(LC_ALL, "RUS");


	Triangle myTriangle = Triangle(0, 0, 0);
	myTriangle.show();


	cout << endl;

	trapezoid* mytrapezoid = new trapezoid(0, 0, 0);
	mytrapezoid->show();
};





