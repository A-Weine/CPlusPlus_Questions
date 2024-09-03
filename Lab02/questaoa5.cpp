#include <iostream>
using namespace std;

int main()
{
	cout << "Que horas sao? ";
	int horas, minutos;
	char pontos;

	cin >> horas;
	cin >> pontos;
	cin >> minutos;

	cout << "O seu relogio esta atrasado.\n";
	cout << "Agora sao " << horas+1 << pontos << minutos << ".";
}