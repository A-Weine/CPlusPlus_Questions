#include <iostream>
using namespace std;

double quadrado(double);
double cubo(double);

int main()
{
	double valor;

	cout << "Digite um valor: ";
	cin >> valor;

	cout << "Quadrado = " << quadrado(valor) << endl;
	cout << "Cubo = " << cubo(valor) << endl;
	cout << "Cubo ao quadrado = " << cubo(quadrado(valor));

	return 0;
}

double quadrado(double valor)
{
	return valor * valor;
}

double cubo(double valor)
{
	return valor * valor * valor;
}