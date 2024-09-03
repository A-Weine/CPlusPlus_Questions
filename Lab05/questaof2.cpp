#include <iostream>
using namespace std;

int main()
{
	cout << "Distancia percorrida em kilometros: ";
	int km;
	cin >> km;
	cout << "Quantidade de combustivel gasto: ";
	int litros;
	cin >> litros;

	cout << "O consumo foi de " << km/litros << "km/litro\n";

	system("pause");
	return 0;
}