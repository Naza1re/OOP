#include "Header.h"

int main() {
	setlocale(LC_ALL, "RUS");
	system("color 6");
	srand(time(0));

	Matrix* matrix1 = new Matrix();
	cin >> *matrix1;


	Matrix* matrix2 = new Matrix();
	cin >> *matrix2;

	;

	Matrix* matrix_result = new Matrix();

	cout << "������ �������:\n";
	cout << *matrix1;
	cout << endl;
	cout << "������ �������:\n";
	cout << *matrix2;
	cout << endl;

	int pop;



	for (int i = 0;; i++) {


		cout << "_____________________________________________________________________________________" << endl;

		cout << "������� 1 ���� ������ ������� ������� , ��� �� ������� 2 ���� ������ �������� �������" << "|" << endl;
		cout << "��� �� ������� 0 ���� ������� ���������� ������ ���������" << setw(29) << "|" << endl;
		cout << "_____________________________________________________________________________________" << "|" << endl;
		cin >> pop;
		cout << "\n";




		if (pop == 0)
			break;

		else {
			switch (pop) {

			case(1): {

				matrix_result = *matrix1 + *matrix2;
				break;
			}
			case(2): {

				matrix_result = *matrix1 * *matrix2;
				break;
			}

			}
			matrix_result->show();
		}

	}


	delete matrix1;
	delete matrix2;
	delete matrix_result;

	return 0;
}

