#include <iostream>
using namespace std;

int main()
{
	int ano, dias;

	cout << "Digite sua idade: ";

	cin >> ano;

	dias = 365 * ano;

	cout << ano << " anos equivalem a " << dias << " dias.";

	return 0;
}