#include <iostream>
using namespace std;

int main()
{
	float peso, calorias;
	int corridah, corridam, ciclismoh, ciclismom, natacaoh, natacaom;
	char h;

	cout << "Digite seu peso em quilos: ";
	cin >> peso;

	cout << "Digite o tempo de corrida: ";
	cin >> corridah;
	cin >> h;
	cin >> corridam;
	cin >> h;

	calorias = 7.0 * peso * ((corridah * 60.0 + corridam) / 60.0); // calorias da corrida

	cout << "Digite o tempo de ciclismo: ";
	cin >> ciclismoh;
	cin >> h;
	cin >> ciclismom;
	cin >> h;

	calorias += 7.0 * peso * ((ciclismoh * 60.0 + ciclismom) / 60.0); // calorias do ciclismo

	cout << "Digite o tempo de natacao: ";
	cin >> natacaoh;
	cin >> h;
	cin >> natacaom;
	cin >> h;

	calorias += 8.0 * peso * ((natacaoh * 60.0 + natacaom) / 60.0);

	cout << "Voce gastou um total de " << calorias << " calorias.";

	return 0;
}