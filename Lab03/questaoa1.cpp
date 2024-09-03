#include <iostream>
#include <cmath>;
using namespace std;

int main()
{
	float px, py, qx, qy, distancia;

	cout << "Ponto P:\n";
	cin >> px;
	cin >> py;

	cout << "Ponto Q:\n";
	cin >> qx;
	cin >> qy;

	distancia = sqrt(pow((qx-px), 2)+pow((qy-py), 2));

	cout << "A distância entre P e Q é : " << distancia;


	return 0;
}
