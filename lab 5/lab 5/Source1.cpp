#include "Liberary.h"
#include "Book.h"


Book::Book() {



}



istream& operator >> (istream& a, Book& my_book) {


	cout << "�������:\n\n\t������������ ����� : ";
	a >> my_book.name;
	cout << "\t�������������: ";
	a >> my_book.manufacturer;
	cout << "\t����: ";
	a >> my_book.price;
	cout << "\t��� �����: ";
	a >> my_book.year;
	cout << "\t���������� �������: ";
	a >> my_book.number_of_page;
	cout << "_____________________________________________________\n";

	return a;
}


ostream& operator << (ostream& b, Book my_book) {


	cout << "\n\n\t������������ �����: ";
	b << my_book.name;
	cout << "\n\t�������������: ";
	b << my_book.manufacturer;
	cout << "\n\t����: ";
	b << my_book.price;
	cout << "\n\t��� �����: ";
	b << my_book.year;
	cout << "\n\t���������� �������: ";
	b << my_book.number_of_page;
	cout << "\n";

	return b;
}
