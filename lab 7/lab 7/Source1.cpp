

#include "Figure.h"
#include "Circle.h"
#include "Sector.h"

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ifstream input_file;


	input_file.open("Текст.txt");

	int N;
	input_file >> N;
	Figure** figures = new Figure * [N];

	char type;

	for (int i = 0; i < N; i++) {
		input_file >> type;

		if (type == 's') {
			Sector* s = new Sector();
			s->type = type;
			input_file >> *s;
			figures[i] = s;
		}
		else if (type == 'c') {
			Circle* c = new Circle();
			c->type = type;
			input_file >> *c;
			figures[i] = c;
		}
		else cout << "\nОшибка в типе\n";
	}

	input_file.close();

	ofstream output_file;
	output_file.open("figure_outputi.txt");

	output_file << N;

	sorty(figures, N);

	for (int i = 0; i < N; i++) {
		output_file << endl << figures[i]->type;
		if (figures[i]->type == 's')
			output_file << " " << figures[i]->radius << " " << figures[i]->fi;

		else if (figures[i]->type == 'c')
			output_file << " \t" << figures[i]->radius;
		output_file << "\t\t|\ " << figures[i]->area();

	}
	output_file.close();

	for (int i = 0; i < N; i++) {
		delete figures[i];
	}

	delete[] figures;

	return 0;
}


