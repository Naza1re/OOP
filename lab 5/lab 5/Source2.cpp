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

	cout << "������� �������� ����������: ";
	a >> my_liberary.name;
	cout << "������� ���������� ����: ";
	a >> my_liberary.number_books;
	cout << "\t\t�����:\n";

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
	cout << "\n�������� ����������: ";
	b << my_liberary.name;
	cout << "\n���������� ����: ";
	b << my_liberary.number_books;
	cout << "\n\n\t�����: ";



	for (int i = 0; i < my_liberary.number_books; i++)
		cout << "\t" << my_liberary.books[i];

	return b;
}
