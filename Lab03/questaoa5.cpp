#include <iostream>
#include <cmath>
using namespace std;

int Absoluto(int valor);

int main()
{	
	int valor;

	cout << "Digite um numero inteiro: ";
	cin >> valor;

	cout << "O valor absoluto e " << Absoluto(valor) << ".";

	return 0;
}

int Absoluto(int valor) {
	int absoluto;

	absoluto = sqrt(pow(valor, 2));

	return absoluto;
}