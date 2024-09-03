#include <cmath>
#include "questaoa6d.h"

double normaVetor(double coord_x, double coord_y)
{
	double tamanho_vetor;

	tamanho_vetor = sqrt(pow(coord_x, 2) + pow(coord_y, 2));

	return tamanho_vetor;
}

double anguloVetor(double coord_x, double coord_y)
{
	double angulo_vetor;

	angulo_vetor = atan2(coord_y, coord_x) * 180 / 3.1415;

	return angulo_vetor;
}