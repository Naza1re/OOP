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
			cout << " ÎØÈÁÊÀ Âû ââåëè ïîëíóþ ôèãíþ " << endl;
			continue;
		}

		catch (int)
		{
			cout << " ÎØÈÁÊÀ Ñòîðîíà íå ìîæåò áûòü îòðèöàòåëüíîé " << endl;
			continue;
		}
		catch (double)
		{
			cout << " ÎØÈÁÊÀ Ñòîðîíà íå ìîæåò ðàâíÿòñÿ íóëþ " << endl;
			continue;
		}

	} while (1);


	string black_pearl;

	do {


		cout << "Ââåäèòå âûñîòó òðåóãîëüíèêà : ";
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
			cout << "ÎØÈÁÊÀ  Âû ââåëè ïîëíóþ ôèãíþ " << endl;
			continue;
		}

		catch (std::out_of_range) {
			cout << " ÎØÈÁÊÀ Âû ââåëè ñëèøêîì áðîëüøîé ïàðàìåòð òðåóãîëüíèêà " << endl;
			continue;
		}



		catch (int)
		{
			cout << " ÎØÈÁÊÀ Âûñîòà íå ìîæåò áûòü îòðèöàòåëüíîé " << endl;
			continue;
		}
		catch (double)
		{
			cout << " ÎØÈÁÊÀ Âûñîòà íå ìîæåò ðàâíÿòñÿ íóëþ " << endl;
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
	cout << "Ïëîùàäü òðåóãîëüíèêà: " << S() << endl;
	cout << "_____________________________________________" << endl;
}


double trapezoid::S() {

	string Artas;

	do {


		cout << "Ââåäèòå ñòîðîíó òðåóãîëüíà : ";
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
			cout << " ÎØÈÁÊÀ  Âû ââåëè ïîëíóþ ôèãíþ " << endl;
			continue;
		}

		catch (std::out_of_range) {
			cout << " ÎØÈÁÊÀ Âû ââåëè ñëèøêîì áðîëüøîé ïàðàìåòð òðåóãîëüíèêà " << endl;
			continue;
		}




		catch (int)
		{
			cout << " ÎØÈÁÊÀ Ñòîðîíî íå ìîæåò áûòü îòðèöàòåëüíîé " << endl;
			continue;
		}
		catch (double)
		{
			cout << " ÎØÈÁÊÀ Ñòîðîíà íå ìîæåò ðàâíÿòñÿ íóëþ " << endl;
			continue;
		}


	} while (1);

	string CS_GO;


	do {


		cout << "Ââåäèòå ñòîðîíó òðåóãîëüíèêà : ";
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
			cout << " ÎØÈÁÊÀ  Âû ââåëè ïîëíóþ ôèãíþ " << endl;
			continue;
		}



		catch (std::out_of_range) {
			cout << " ÎØÈÁÊÀ Âû ââåëè ñëèøêîì áðîëüøîé ïàðàìåòð òðåóãîëüíèêà " << endl;
			continue;
		}

		catch (int)
		{
			cout << " ÎØÈÁÊÀ Ñòîðîíî íå ìîæåò áûòü îòðèöàòåëüíîé " << endl;
			continue;
		}
		catch (double)
		{
			cout << " ÎØÈÁÊÀ Ñòîðîíà íå ìîæåò ðàâíÿòñÿ íóëþ " << endl;
			continue;
		}


	} while (1);







	string Black_milk;

	do {


		cout << "Ââåäèòå âûñîòó òðåóãîëüíèêà : ";
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
			cout << "Íåëüçÿ ââîäèòü íå òîò òèï äàííûõ" << endl;
			continue;
		}


		catch (std::out_of_range) {
			cout << " ÎØÈÁÊÀ Âû ââåëè ñëèøêîì áðîëüøîé ïàðàìåòð òðåóãîëüíèêà " << endl;
			continue;
		}



		catch (int)
		{
			cout << " ÎØÈÁÊÀ Ñòîðîíî íå ìîæåò áûòü îòðèöàòåëüíîé " << endl;
			continue;
		}
		catch (double)
		{
			cout << " ÎØÈÁÊÀ Ñòîðîíà íå ìîæåò ðàâíÿòñÿ íóëþ " << endl;
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
	cout << "Ïëîùàäü òðàïåöèè: " << S() << endl;
	cout << "_____________________________________________" << endl;


	cout << "helloy world" << endl;
}

