#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Digite tr�s n�meros inteiros a, b e c ( \"a\" maior que 1 ):\n";
	cin >> a >> b >> c;

	int soma = 0;
	for (int i = b; i <= c; i++)
		if (i % a == 0)
			soma += i;

	cout << "A soma � igual a " << soma << endl;

	return 0;
}
