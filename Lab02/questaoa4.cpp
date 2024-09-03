#include <iostream>
using namespace std;

int main()
{
	float custo_fabrica, custo_consumidor;
	
	cout << "Custo de fabrica: ";
	cin >> custo_fabrica;

	custo_consumidor = custo_fabrica * 1.28 + custo_fabrica * 0.45;

	cout << "O custo ao consumidor e: " << custo_consumidor;

	return 0;
}