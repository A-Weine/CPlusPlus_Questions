#include <iostream>
using namespace std;

int main()
{
	int anos, dias, cigarros;
	float preco, total;

	cout << "A quantos anos voce fuma? ";
	
	cin >> anos;

	dias = anos * 365;

	cout << "Quantos cigarros voce fuma por dia? ";

	cin >> cigarros;

	cout << "Qual o preco medio de uma carteira de cigarros? ";

	cin >> preco;

	total = (cigarros * dias)/20.0 * preco;

	cout << "Voce gastou ate agora R$" << total << " com cigarros.";

	return 0;
}
