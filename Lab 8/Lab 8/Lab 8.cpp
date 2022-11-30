#include "Header.h"

int main() {

	Matrix<int>* a = new Matrix<int>();
	cin >> *a;
	cout << *a;

	cout << "\ndeterminant = " << a->determinant() << endl;

	float X = 0; cout << "\nX = "; cin >> X;//число, на которое умножается матрица
	cout << "matrix_by_number:\n" << a->matrix_by_number(X);

	delete a;
	return 0;
}



