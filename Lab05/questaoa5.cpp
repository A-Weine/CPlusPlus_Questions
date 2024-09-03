#include <iostream>
#include <climits>
using namespace std;

bool isShort(long long);
bool isInt(long long);

int main()
{
	long long valor;
	cout << "Digite um valor inteiro: ";
	cin >> valor;

	if (isShort(valor) == true) {
		cout << valor << " cabe em 16 bits\n";
	}
	else {
		cout << valor << " não cabe em 16 bits\n";
	}

	if (isInt(valor) == true) {
		cout << valor << " cabe em 32 bits\n";
	}
	else {
		cout << valor << " não cabe em 32 bits\n";
	}

	return 0;
}

bool isShort(long long valor)
{
	if (valor <= SHRT_MAX) {
		return true;
	}	
	else {
		return false;
	}
}

bool isInt(long long valor)
{
	if (valor <= INT_MAX) {
		return true;
	}
	else {
		return false;
	}
}
