#include <iostream>
#include <cmath>
using namespace std;

float VolumeCilindro(int raio_base, int altura);

int main()
{
	int altura, raio_base;

	cout << "Calcula o Volume de um Cilindro\n";
	cout << "-------------------------------\n";

	cout << "Entre com o raio da base: ";
	cin >> raio_base;

	cout << "Entre com a altura: ";
	cin >> altura;

	cout << "O volume do cilindro e " << VolumeCilindro(raio_base, altura);

	return 0;
}

float VolumeCilindro(int raio_base, int altura) {
	float volume;

	volume = 3.14159 * pow(raio_base, 2) * altura;

	return volume;
}