#include <iostream>
using namespace std;

#define preco_pao 0.30
#define preco_pastel 0.25

int main()
{
	int paes, pasteis;
	double valor_total;
	cout << "P�es&Cia";

	cout << "Quantos p�es? ";
	cin >> paes;

	cout << "Quantos past�is? ";
	cin >> pasteis;

	valor_total = paes * preco_pao + pasteis * preco_pastel;

	cout << "O total das compras � R$" << valor_total;


	return 0;
}
