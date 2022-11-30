#include "Header.h"

using namespace std;

Airplane::Airplane(string destination1, int number1, string type1, int time1, string number_week1)
{
	destination = destination1;
	number = number1;
	type = type1;
	time = time1;
	number_week = number_week1;
}

Airplane::Airplane(string destination1, string number_week1, int time1)
{
	destination = destination1;
	number_week = number_week1;
	time = time1;
}
Airplane::Airplane() {

}
void Airplane::show()
{
	cout << "\n Пункт назначения: " << destination << "\n Номер рейса: " << number << "\n Тип самолета: " << type << "\n Время: " << time << "\n День Недели: " << number_week << endl;
}
string Airplane::get_destination()
{
	return destination;
}
string Airplane::get_number_week()
{
	return number_week;
}
int Airplane::get_time() {
	return time;
}
void Airplane::set_destination(string destination1)
{
	destination = destination1;
}
void Airplane::set_number_week(string number_week1)
{
	number_week = number_week1;
}
void Airplane::set_time(int time1) {

	time = time1;
}

