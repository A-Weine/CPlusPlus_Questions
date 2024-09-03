#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int Inicializar(void);
void ligar(void);
void verificar(void);
void ativar(void);

int main()
{
	int funcionamento;

	funcionamento = Inicializar();
	
	if (funcionamento > 16384) {
		cout << "Sistema em funcionamento.";
	}
	else {
		cout << "Falha na inicializacao.";
	}
	return 0;
}

int Inicializar(void){
	srand(time(NULL));
	cout << "Inicializando Sistema:\n";

	ligar();

	verificar();

	ativar();
	
	cout << "Inicializacao concluida.\n\n";

	return rand();
}
void ligar(void) {
	
	cout << "- Ligando dispositivos\n";

}
void verificar(void) {

	cout << "- Verificando integridade\n";

}
void ativar(void) {

	cout << "- Ativando processos\n";

}