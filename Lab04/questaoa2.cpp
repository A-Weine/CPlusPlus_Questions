#include <iostream>
using namespace std;

int ajustarSalario(int);

int main()
{
	int salario;
	cout << "Salário atual: ";
	cin >> salario;

	cout << "Salário ajustado para " << ajustarSalario(salario);

	return 0;
}

int ajustarSalario(int salario)
{
	return int(salario * 1.15);
}
