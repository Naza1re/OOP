#include "Header.h"


using namespace std;


int main() {
	system("color 9");

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Airplane* one = new Airplane("���-����", 625, "�����������", 15, "�����������");
	Airplane* two = new Airplane("�����", 714, "�����������", 16, "�����������");
	Airplane* three = new Airplane("������", 680, "��������", 17, "�����");
	Airplane* four = new Airplane("�������", 111, "�����������", 20, "�������");
	Airplane* five = new Airplane("������", 240, "��������", 19, "�������");

	Airplane* arr[5] = { one, two, three, four, five };

	string search_destination;
	cout << "�)������ ������, ��������� �� ��������� ������ ����������: \n\n";


	cout << "������� �������� ������ ���������� �� ������������( ���-���� , ����� , ������ , ������� , ������ ): ";
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
	cout << "\n\n�)������ ������ ��� ��������� ��� ������: \n\n ";

	cout << "������� ���� ������( ����������� , �������  , C���� , ������� , �������) : ";
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

	cout << "\n\n�) ������ ������, �������������� � ������������ ���� ������ � ����� ������������ ���� ������� \n\n ";

	cout << "������� ���� ������( �����������, ������� , C���� , ������� ,������� ): \n\n";
	cin >> search_number_week;

	cout << "������� �����: \n\n";
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

	cout << "\n������������ ���������� � �������� � ���������� � ���: ";



	Airplane* six = new Airplane("���", "�������", 4);
	six->show();


	cout << "\n������ �����������";
	Airplane* zero = new Airplane();
	zero->show();


	Airplane seven;
	seven.set_destination("����");
	seven.set_number_week("�����������");
	seven.set_time(9);
	seven.show();


}