#include <iostream>
#include <cmath>;
using namespace std;

int main()
{
	float angulo, seno;
	cout << "Digite o angulo: ";
	cin >> angulo;

	angulo = (angulo * 3.14)/180;

	seno = sin(angulo);
	cout << "Seno: " << seno;


	return 0;
}
