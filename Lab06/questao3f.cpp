#include <iostream>
using namespace std;

int main()
{
	int quant = 0, cont = 0;
	double num;
	double media;
	double soma = 0;
	double donativos[10];

	cout << "Digite ate 10 valores de donativos (zero para encerrar):\n";
	
	cin >> num;
	while (num != 0)
	{
		if (quant < 10)
		{
			donativos[quant++] = num;
			soma += num;
		}
		cin >> num;
	}

	media = soma / quant;
	for (int i = 0; i < quant; i++)
		if (donativos[i] > media)
			++cont;

	cout << fixed;
	cout.precision(2);

	cout << "A media dos valores doados foi de R$ " << media << ".\n";
	cout << cont << " valores foram maiores que a media.\n";

	return 0;
}
