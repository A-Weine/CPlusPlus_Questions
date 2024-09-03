#include <iostream>
using namespace std;

int main() {
	float distancia, preco = 0;
	
	cout << "Distância da viagêm(km): ";
	cin >> distancia;

	if (distancia <= 200)
		preco = 0.50;
	else if (distancia <= 400)
		preco = 0.40;
	else
		preco = 0.30;

	cout << "O preço da passagem é: R$" << distancia * preco << endl;
}
