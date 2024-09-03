#include <iostream>
using namespace std;

float imc(float, float);

int main()
{
	float altura, massa;
	
	cout << "Altura: ";
	cin >> altura;

	cout << "Massa: ";
	cin >> massa;

	cout << "IMC: " << imc(altura, massa);

	return 0;
}

float imc(float altura, float massa)
{
	float imc;

	imc = (massa) / (altura * altura);

	return imc;
}