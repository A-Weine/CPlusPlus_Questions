#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int numero;
	srand(time(NULL));
	numero = rand();
	cout << "Gerando n�mero pseudoaleat�rio:\n";
	if (numero > 16834) {
		cout << numero << endl;
		cout << "GRANDE";
	}
	else {
		cout << numero << endl;
		cout << "PEQUENO";
	}
}