#include <iostream>
using namespace std;
const int aulas = 66;
const float faltas_pcnt = 0.25;

int main()
{
	float n1, n2, n3, n4, media_p = 0;
	int faltas;

	cout << "Digite as notas e frequencia na disciplina\n";

	cout << "Nota 1: ";
	cin >> n1;

	cout << "Nota 2: ";
	cin >> n2;

	cout << "Nota 3: ";
	cin >> n3;

	cout << "Faltas: ";
	cin >> faltas;

	media_p = (n1 + n2 + n3) / 3;

	if (faltas > faltas_pcnt * aulas)
		cout << "Reprovado por falta\n";
	else if (media_p >= 7)
		cout << "Aprovado\n";
	else if (media_p >= 3.5 && media_p < 7)
	{
		cout << "4a Prova\n";
		cout << "Digite sua 4a nota: ";
		cin >> n4;

		if ((media_p * 0.7 + n4 * 0.3) >= 5)
			cout << "Aprovado\n";
		else
			cout << "Reprovado\n";
	}
	else
		cout << "Reprovado\n";

	return 0;
}
