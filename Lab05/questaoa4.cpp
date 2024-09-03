#include <iostream>
using namespace std;

long long calculo(long long, long long);

int main()
{
	long long resultado = long long (200530) * 420800;
	cout << "Direto: " << resultado << endl;
	cout << "Função: " << calculo(200530, 420800) << endl;

	return 0;
}

long long calculo(long long a, long long b)
{
	return a * b;
}
