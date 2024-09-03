#include <iostream>
using namespace std;

int main()
{
	int hora_partida, minuto_partida, hora_chegada, minuto_chegada, tempo_total, hora_total, minuto_total;
	char pontos;

	cout << "Digite o horário de partida (HH:MM): ";
	cin >> hora_partida >> pontos >> minuto_partida;

	cout << "Digite o horário de chegada (HH:MM): ";
	cin >> hora_chegada >> pontos >> minuto_chegada;

	tempo_total = (hora_chegada * 60 + minuto_chegada) - (hora_partida * 60 + minuto_partida);
	hora_total = tempo_total / 60;
	minuto_total = tempo_total % 60;

	cout << "O tempo total de viagem foi de " << hora_total << " horas e " << minuto_total << " min.";

	return 0;
}
