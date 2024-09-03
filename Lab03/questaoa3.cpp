#include <iostream>
using namespace std;

float media(int a, int b);

int main()
{
	int a, b;

	cout << "Digite um valor inteiro: ";
	cin >> a;

	cout << "Digite outro valor inteiro: ";
	cin >> b;

	cout << "A media dos numeros e: " << media(a, b);

	return 0;
}

float media(int a, int b) {
	float media;

	media = (a + b) / 2.0;

	return media;
}