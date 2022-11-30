#pragma once
#include <iostream>
#include <Windows.h>


using namespace std;


class Book {
public:

	char* name = new char[20];
	char* manufacturer = new char[20];
	char* price = new char[20];
	char* year = new char[20];
	char* number_of_page = new char[20];

	Book();

	friend istream& operator >> (istream&, Book&);
	friend ostream& operator << (ostream&, Book);
};



