#include <iostream>
using namespace std;

int main()
{
	int sort;
	int num;

	sort = rand() % 11;

	cout << "Qual foi o número sorteado (0 a 10)? ";
	
	cin >> num;
	while (num != sort)
	{
		if (num < sort)
			cout << "Muito baixo." << endl;
		else
			cout << "Muito alto." << endl;

		cout << "Digite novamente: ";
		cin >> num;
	}

	cout << "Você acertou." << endl;
}