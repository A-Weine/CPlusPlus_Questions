#include <iostream>
using namespace std;

int main() {
	int a, b, soma = 0;

	cout << "Digite um número inteiro: ";
	cin >> a;

	cout << "Digite outro número inteiro: ";
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
		cout << "Não há números inteiros entre " << a << " e " << b << ", logo a soma é: " << soma << ".\n";
	}
}