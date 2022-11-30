#include "Header.h"


using namespace std;


int main() {
	system("color 9");

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Airplane* one = new Airplane("Абу-Даби", 625, "Пасажирский", 15, "Понедельник");
	Airplane* two = new Airplane("Минск", 714, "Пасажирский", 16, "Понедельник");
	Airplane* three = new Airplane("Москва", 680, "Грузовой", 17, "Среда");
	Airplane* four = new Airplane("Варшава", 111, "Пасажирский", 20, "Пятница");
	Airplane* five = new Airplane("Краков", 240, "Грузовой", 19, "Пятница");

	Airplane* arr[5] = { one, two, three, four, five };

	string search_destination;
	cout << "а)Список рейсов, следующих до заданного пункта назначения: \n\n";


	cout << "Введите название пункта назначения из предложенных( Абу-Даби , Минск , Москва , Варшава , Краков ): ";
	cin >> search_destination;

	cout << endl;


	for (int i = 0; i < 5; i++)
	{
		if (arr[i]->get_destination() == search_destination)
		{
			arr[i]->show();
		}
		else {
			cout << " ";

		}


	}


	string  search_number_week;
	cout << "\n\nб)список рейсов для заданного дня недели: \n\n ";

	cout << "Введите День недели( Понедельник , Вторник  , Cреда , Четверг , Пятница) : ";
	cin >> search_number_week;


	for (int i = 0; i < 5; i++)
	{
		if (arr[i]->get_number_week() == search_number_week)
		{
			arr[i]->show();
		}
		else {
			cout << "";
		}



	}

	int search_time;

	cout << "\n\nв) список рейсов, отправляющихся в определенный день недели и после указываемого вами времени \n\n ";

	cout << "Введите день недели( Понедельник, Вторник , Cреда , Четверг ,Пятница ): \n\n";
	cin >> search_number_week;

	cout << "Введите время: \n\n";
	cin >> search_time;


	for (int i = 0; i < 5; i++)
	{
		if (arr[i]->get_number_week() == search_number_week && arr[i]->get_time() > search_time)
		{
			arr[i]->show();
		}
		else {
			cout << "";
		}
	}

	cout << "\nДемонстрация перегрузки и объектов с указателем и без: ";



	Airplane* six = new Airplane("Рим", "Вторник", 4);
	six->show();


	cout << "\nПустой конструктор";
	Airplane* zero = new Airplane();
	zero->show();


	Airplane seven;
	seven.set_destination("Орша");
	seven.set_number_week("Понедельник");
	seven.set_time(9);
	seven.show();


}