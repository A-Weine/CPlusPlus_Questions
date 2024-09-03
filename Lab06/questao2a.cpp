#include <iostream>
using namespace std;

const int multa = 8;

int main() {
	int cont = 0;
	int velocidades[10] = {};
	int multa_total = 0;

	cout << "As últimas 10 velocidades registradas: \n";

	for (int i = 0; i < 10; i++) {
		cin >> velocidades[i];
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		if (velocidades[i] > 80) {
			cout << velocidades[i] << " Km/h excede o limite = multa de R$" << (velocidades[i]-80) * multa << endl;
			multa_total += (velocidades[i]-80) * multa;
			cont++;
		}
	}

	cout << endl << cont << " carros foram multados em valor total de R$" << multa_total << ".\n";
}