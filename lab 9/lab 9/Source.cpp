#include "Treeangle.h"

Triangle::Triangle(double R, double H, double D) {
	this->side = R;
	this->side2 = H;
	this->height = D;
}


trapezoid::trapezoid(double R, double H, double D) : Triangle(R, H, D) {

}



double Triangle::S() {

	string AION;


	do {


		cout << "������� ������� ������������ : ";
		cin >> AION;




		try
		{
			this->side = stoi(AION);

			if (this->side < 0) {
				throw 12;

			}
			if (this->side == 0) {
				throw 11.4;

			}

			break;
		}


		catch (std::out_of_range) {
			cout << " ������ �� ����� ������� �������� �������� ������������ " << endl;
			continue;
		}




		catch (std::invalid_argument) {
			cout << " ������ �� ����� ������ ����� " << endl;
			continue;
		}

		catch (int)
		{
			cout << " ������ ������� �� ����� ���� ������������� " << endl;
			continue;
		}
		catch (double)
		{
			cout << " ������ ������� �� ����� �������� ���� " << endl;
			continue;
		}

	} while (1);


	string black_pearl;

	do {


		cout << "������� ������ ������������ : ";
		cin >> black_pearl;




		try
		{
			this->height = stoi(black_pearl);

			if (this->height < 0) {
				throw 12;

			}
			if (this->height == 0) {
				throw 11.4;

			}

			break;
		}
		catch (std::invalid_argument) {
			cout << "������  �� ����� ������ ����� " << endl;
			continue;
		}

		catch (std::out_of_range) {
			cout << " ������ �� ����� ������� �������� �������� ������������ " << endl;
			continue;
		}



		catch (int)
		{
			cout << " ������ ������ �� ����� ���� ������������� " << endl;
			continue;
		}
		catch (double)
		{
			cout << " ������ ������ �� ����� �������� ���� " << endl;
			continue;
		}


	} while (1);





	double TR;
	TR = (this->side * this->height) / 2;

	return TR;
}


void Triangle::show() {

	cout << "_____________________________________________" << endl;
	cout << endl;
	cout << "������� ������������: " << S() << endl;
	cout << "_____________________________________________" << endl;
}


double trapezoid::S() {

	string Artas;

	do {


		cout << "������� ������� ������������ : ";
		cin >> Artas;




		try
		{
			this->side = stoi(Artas);

			if (this->side < 0) {
				throw 12;

			}
			if (this->side == 0) {
				throw 11.4;

			}

			break;
		}
		catch (std::invalid_argument) {
			cout << " ������  �� ����� ������ ����� " << endl;
			continue;
		}

		catch (std::out_of_range) {
			cout << " ������ �� ����� ������� �������� �������� ������������ " << endl;
			continue;
		}




		catch (int)
		{
			cout << " ������ ������� �� ����� ���� ������������� " << endl;
			continue;
		}
		catch (double)
		{
			cout << " ������ ������� �� ����� �������� ���� " << endl;
			continue;
		}


	} while (1);

	string CS_GO;


	do {


		cout << "������� ������� ������������ : ";
		cin >> CS_GO;




		try
		{
			this->side2 = stoi(CS_GO);

			if (this->side2 < 0) {
				throw 12;

			}
			if (this->side2 == 0) {
				throw 11.4;

			}

			break;
		}
		catch (std::invalid_argument) {
			cout << " ������  �� ����� ������ ����� " << endl;
			continue;
		}



		catch (std::out_of_range) {
			cout << " ������ �� ����� ������� �������� �������� ������������ " << endl;
			continue;
		}

		catch (int)
		{
			cout << " ������ ������� �� ����� ���� ������������� " << endl;
			continue;
		}
		catch (double)
		{
			cout << " ������ ������� �� ����� �������� ���� " << endl;
			continue;
		}


	} while (1);







	string Black_milk;

	do {


		cout << "������� ������ ������������ : ";
		cin >> Black_milk;




		try
		{
			this->height = stoi(Black_milk);

			if (this->height < 0) {
				throw 12;

			}
			if (this->height == 0) {
				throw 11.4;

			}

			break;
		}
		catch (std::invalid_argument) {
			cout << "������ ������� �� ��� ��� ������" << endl;
			continue;
		}


		catch (std::out_of_range) {
			cout << " ������ �� ����� ������� �������� �������� ������������ " << endl;
			continue;
		}



		catch (int)
		{
			cout << " ������ ������� �� ����� ���� ������������� " << endl;
			continue;
		}
		catch (double)
		{
			cout << " ������ ������� �� ����� �������� ���� " << endl;
			continue;
		}


	} while (1);





	double TR;
	TR = ((this->side + this->side2) / 2) * this->height;

	return TR;
}

void trapezoid::show() {

	cout << "_____________________________________________" << endl;
	cout << endl;
	cout << "������� ��������: " << S() << endl;
	cout << "_____________________________________________" << endl;


	cout << "helloy world" << endl;
}

