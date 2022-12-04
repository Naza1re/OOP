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


		cout << "Введите сторону треугольника : ";
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
			cout << " ОШИБКА Вы ввели слишком брольшой параметр треугольника " << endl;
			continue;
		}




		catch (std::invalid_argument) {
			cout << "  ОШИБКА Вы ввели полную фигню " << endl;
			continue;
		}

		catch (int)
		{
			cout << "  ОШИБКА Сторона не может быть отрицательной " << endl;
			continue;
		}
		catch (double)
		{
			cout << "  ОШИБКА Сторона не может равнятся нулю " << endl;
			continue;
		}

	} while (1);


	string black_pearl;

	do {


		cout << "Введите высоту треугольника : ";
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
			cout << "ОШИБКА  Вы ввели полную фигню" << endl;
			continue;
		}

		catch (std::out_of_range) {
			cout << " ОШИБКА Вы ввели слишком брольшой параметр треугольника  " << endl;
			continue;
		}



		catch (int)
		{
			cout << " ОШИБКА Высота не может быть отрицательной" << endl;
			continue;
		}
		catch (double)
		{
			cout << " ОШИБКА Высота не может равнятся нулю " << endl;
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
	cout << "Площадь треугольника: " << S() << endl;
	cout << "_____________________________________________" << endl;
}


double trapezoid::S() {

	string Artas;

	do {


		cout << "Введите сторону треугольника :  ";
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
			cout << "ОШИБКА  Вы ввели полную фигню" << endl;
			continue;
		}

		catch (std::out_of_range) {
			cout << "  ОШИБКА Вы ввели слишком брольшой параметр треугольника " << endl;
			continue;
		}




		catch (int)
		{
			cout << "  ОШИБКА Стороно не может быть отрицательной " << endl;
			continue;
		}
		catch (double)
		{
			cout << " ОШИБКА Стороно не может быть отрицательной  " << endl;
			continue;
		}


	} while (1);

	string CS_GO;


	do {


		cout << "Введите сторону треугольника :";
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
			cout << "  ОШИБКА  Вы ввели полную фигню " << endl;
			continue;
		}



		catch (std::out_of_range) {
			cout << " ОШИБКА Вы ввели слишком брольшой параметр треугольника " << endl;
			continue;
		}

		catch (int)
		{
			cout << "ОШИБКА Стороно не может быть отрицательной " << endl;
			continue;
		}
		catch (double)
		{
			cout << "ОШИБКА Сторона не может равнятся нулю  " << endl;
			continue;
		}


	} while (1);







	string Black_milk;

	do {


		cout << "Введите высоту треугольника : ";
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
			cout << "Нельзя вводить не тот тип данных" << endl;
			continue;
		}


		catch (std::out_of_range) {
			cout << " ОШИБКА Вы ввели слишком брольшой параметр треугольника " << endl;
			continue;
		}



		catch (int)
		{
			cout << " ОШИБКА Стороно не может быть отрицательной" << endl;
			continue;
		}
		catch (double)
		{
			cout << " ОШИБКА Сторона не может равнятся нулю " << endl;
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
	cout << "Площадь трапеции: " << S() << endl;
	cout << "_____________________________________________" << endl;


	cout << "helloy world" << endl;
}

