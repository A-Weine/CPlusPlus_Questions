#include <iostream>
#include <cmath>
using namespace std;

double anguloVetor(double, double);

int main()
{
	double coord_x, coord_y;

	cout << "Digite as coordenadas do vetor:\n";
	cout << "x: ";
	cin >> coord_x;

	cout << "y: ";
	cin >> coord_y;

	cout << "O ângulo do vetor é " << anguloVetor(coord_x, coord_y);

	return 0;
}

double anguloVetor(double coord_x, double coord_y)
{
	double angulo_vetor;

	angulo_vetor = atan2(coord_y, coord_x) * 180/3.1415;

	return angulo_vetor;
}