#include "Liberary.h"
#include "Book.h"


Book::Book() {



}



istream& operator >> (istream& a, Book& my_book) {


	cout << "Введите:\n\n\tНаименование книги : ";
	a >> my_book.name;
	cout << "\tПроизводитель: ";
	a >> my_book.manufacturer;
	cout << "\tЦена: ";
	a >> my_book.price;
	cout << "\tГод книги: ";
	a >> my_book.year;
	cout << "\tКоличество страниц: ";
	a >> my_book.number_of_page;
	cout << "_____________________________________________________\n";

	return a;
}


ostream& operator << (ostream& b, Book my_book) {


	cout << "\n\n\tНаименование книги: ";
	b << my_book.name;
	cout << "\n\tПроизводитель: ";
	b << my_book.manufacturer;
	cout << "\n\tЦена: ";
	b << my_book.price;
	cout << "\n\tГод книги: ";
	b << my_book.year;
	cout << "\n\tКоличество страниц: ";
	b << my_book.number_of_page;
	cout << "\n";

	return b;
}
