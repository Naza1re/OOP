#include "Sector.h"

Sector::Sector() {}
float Sector::area() {
	return (pi * pow(this->radius, 2) * this->fi) / 360;
}
ifstream& operator >> (ifstream& in, Sector& some_sector) {
	in >> some_sector.radius;
	in >> some_sector.fi;

	return in;
}