#pragma once
#pragma once
#pragma once
#include <iostream>
using namespace std;




template<class T> class Matrix {
	T a11 = 0;
	T a12 = 0;
	T a13 = 0;
	T a21 = 0;
	T a22 = 0;
	T a23 = 0;
	T a31 = 0;
	T a32 = 0;
	T a33 = 0;


	T* matrix[3][3] = { &a11, &a12, &a13, &a21, &a22, &a23, &a31, &a32, &a33 };
public:

	Matrix() {};



	T determinant() {
		T det = 0;

		det = *(this->matrix[0][0]) * (*this->matrix[1][1]) * (*this->matrix[2][2]) - (*this->matrix[0][0]) * (*this->matrix[1][2]) * (*this->matrix[2][1]) - (*this->matrix[0][1]) * (*this->matrix[1][0]) * (*this->matrix[2][2]) + (*this->matrix[0][1]) * (*this->matrix[1][2]) * (*this->matrix[2][0]) + (*this->matrix[0][2]) * (*this->matrix[1][0]) * (*this->matrix[2][1]) - (*this->matrix[0][2]) * (*this->matrix[1][1]) * (*this->matrix[2][0]);

		return det;
	}



	Matrix matrix_by_number(float number) {

		Matrix<T>* res = new Matrix<T>();

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				(*res->matrix[i][j]) = number * (*this->matrix[i][j]);
			}
		}

		return *res;
	};



	friend istream& operator >>(istream& input, Matrix& some_matrix) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cout << "a[" << i << "][" << j << "] = ";
				input >> *(some_matrix.matrix[i][j]);
			}
		}

		return input;
	};

	friend ostream& operator << (ostream& output, const Matrix& some_matrix) {

		for (int i = 0; i < 3; i++) {
			cout << "\t";

			for (int j = 0; j < 3; j++) {
				cout << *(some_matrix.matrix[i][j]) << " ";
			}

			cout << endl;
		}
		return output;
	};
};






