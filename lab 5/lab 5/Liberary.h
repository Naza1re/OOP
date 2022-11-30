#pragma once
#pragma once
#include "Book.h"
#include <iostream>
#include <Windows.h>

using namespace std;

class Liberary {
public:
	char* name = new char[25];
	int number_books = 0;
	Book* books = 0;


	Liberary();
	~Liberary();

	friend istream& operator >> (istream&, Liberary&);
	friend ostream& operator << (ostream&, Liberary);
};