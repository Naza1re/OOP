#include "Liberary.h"
#include "Book.h"

using namespace std;

Liberary::Liberary() {
	*(this->name) = 0;
	this->books = new Book[number_books];

}

Liberary::~Liberary() {
}

istream& operator >> (istream& a, Liberary& my_liberary) {

	cout << "Введите название Библеотеки: ";
	a >> my_liberary.name;
	cout << "Введите количество Книг: ";
	a >> my_liberary.number_books;
	cout << "\t\tКниги:\n";

	my_liberary.books = new Book[my_liberary.number_books];

	for (int i = 1; i < my_liberary.number_books; i++) {
		cout << i << endl;
		Book* p = new Book();
		cin >> *p;
		my_liberary.books[i] = *p;
	}

	return a;
}


ostream& operator << (ostream& b, Liberary my_liberary) {
	cout << "\nНазвание Библеотеки: ";
	b << my_liberary.name;
	cout << "\nКоличество книг: ";
	b << my_liberary.number_books;
	cout << "\n\n\tКниги: ";



	for (int i = 0; i < my_liberary.number_books; i++)
		cout << "\t" << my_liberary.books[i];

	return b;
}
