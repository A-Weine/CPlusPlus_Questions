#include <iostream>
#include <cmath>
using namespace std;

double normaVetor(double, double);

int main()
{
	double coord_x, coord_y;

	cout << "Digite as coordenadas do vetor:\n";
	cout << "x: ";
	cin >> coord_x;

	cout << "y: ";
	cin >> coord_y;

	cout << "O tamanho do vetor é " << normaVetor(coord_x, coord_y);

	return 0;
}

double normaVetor(double coord_x, double coord_y)
{
	double tamanho_vetor;

	tamanho_vetor = sqrt(pow(coord_x,2)+pow(coord_y,2));

	return tamanho_vetor;
}