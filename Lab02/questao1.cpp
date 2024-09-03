#include <iostream>
using namespace std;

int main()
{
	float altura;
	float largura;
	float comprimento;

	cout << "Insira a altura, largura e o comprimento: \n";
	cin >> altura;
	cin >> largura;
	cin >> comprimento;
	
	float volume = altura * largura * comprimento;
	cout << "Volume = " << volume << " cm3.";
}