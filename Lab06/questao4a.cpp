#include <iostream>
using namespace std;

int main() {
	int a, b, soma = 0;

	cout << "Digite um n�mero inteiro: ";
	cin >> a;

	cout << "Digite outro n�mero inteiro: ";
	cin >> b;

	if (a < b) {
		for (int i = (a + 1); i < b; i++)
			soma += i;
		cout << "A soma de todos os valores entre " << a << " e " << b << ": " << soma << ".\n";
	}
	else if (a > b) {
		for (int i = (b + 1); i < a; i++)
			soma += i;
		cout << "A soma de todos os valores entre " << a << " e " << b << ": " << soma << ".\n";
	}
	else if (a == b) {
		cout << "N�o h� n�meros inteiros entre " << a << " e " << b << ", logo a soma �: " << soma << ".\n";
	}
}