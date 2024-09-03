#include <iostream>
using namespace std;

int main() {
	char ch;
	int subst = 0;
	cout << "Digite um texto (# para finalizar):\n";

	cin.get(ch);
	while (ch != '#') {
		if (ch == '.') {
			ch = '!';
			subst++;
		}
		else if (ch == '!') {
			ch = '!';
			cout << ch;
			subst++;
		}
		cout << ch;
		cin.get(ch);
	}

	cout << endl << "Substituições: " << subst;
}