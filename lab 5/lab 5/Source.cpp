#include "Book.h"
#include "Liberary.h"

int main() {

	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	Liberary* book = new Liberary();
	cin >> *book;

	cout << *book;

	return 0;
}


