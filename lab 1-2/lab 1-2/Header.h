#pragma once
#include <iostream>
#include <string>
#include <Windows.h>


using namespace std;


class Airplane {
private:
	string destination = "00";
	int number = 0;
	string type = "00";
	int time = 0;
	string number_week = "00";


public:
	Airplane(string, int, string, int, string);
	Airplane(string, string, int);
	Airplane();

	void show();

	string get_destination();
	string get_number_week();
	int get_time();

	void set_destination(string);
	void set_number_week(string);
	void set_time(int);
};
