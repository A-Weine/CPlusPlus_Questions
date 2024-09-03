#include <iostream>
using namespace std;

#define preco_pao 0.30
#define preco_pastel 0.25

int main()
{
	int paes, pasteis;
	double valor_total;
	cout << "Pães&Cia";

	cout << "Quantos pães? ";
	cin >> paes;

	cout << "Quantos pastéis? ";
	cin >> pasteis;

	valor_total = paes * preco_pao + pasteis * preco_pastel;

	cout << "O total das compras é R$" << valor_total;


	return 0;
}
