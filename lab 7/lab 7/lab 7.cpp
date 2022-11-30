#include "Figure.h"
#include "Circle.h"

void sorty(Figure** mas, int N) {
	Figure* temp;
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N - i - 1; j++) {
			if (mas[j]->area() > mas[j + 1]->area()) {
				temp = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = temp;
			}
		}
	}
}