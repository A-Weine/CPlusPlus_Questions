#include <iostream>
#include <cmath>
#include "questaoa6d.h"
using namespace std;

int main()
{
	double coord_x, coord_y;

	cout << "Digite as coordenadas do vetor:\n";
	cout << "x: ";
	cin >> coord_x;

	cout << "y: ";
	cin >> coord_y;

	cout << "Coordenadas polares do vetor:\n" << "(" << normaVetor(coord_x, coord_y) << "," << anguloVetor(coord_x, coord_y) << ")";

	return 0;
}
