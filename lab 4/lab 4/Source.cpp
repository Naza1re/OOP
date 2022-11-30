

#include "Header.h"


istream& operator >> (istream& in, Matrix& matrica) {

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "a[" << i << "][" << j << "] = ";



			in >> *(matrica.matr[i][j]);
		}
	}

	return in;
}

ostream& operator << (ostream& os, Matrix matrix) {

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			os << setw(5) << *matrix.matr[i][j];
			if (i == 0 && j == 1 || i == 1 && j == 1) {
				cout << endl;
			}
			else
				cout << " ";
		}
	}

	os << endl;

	return os;
}




void Matrix::show() {

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << *matr[i][j];
			if (i == 0 && j == 1 || i == 1 && j == 1)
				cout << endl;
			else cout << " ";
		}
	}
	cout << endl;
}

Matrix* Matrix:: operator + (Matrix matrica2) {

	Matrix* result = new Matrix();

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			*(result->matr[i][j]) = *(this->matr[i][j]) + *(matrica2.matr[i][j]);

		}
	}

	return result;
}



Matrix* Matrix:: operator * (Matrix matrica2) {

	Matrix* result = new Matrix();

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			*(result->matr[i][j]) = *(this->matr[i][j]) * *(matrica2.matr[i][j]);

		}
	}





	return result;
}

