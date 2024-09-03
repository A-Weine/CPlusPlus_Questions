#include <iostream>
using namespace std;

int main()
{
	float ladoa, ladob, areab, altura, volumep;

	cout << "Lado a: ";
	cin >> ladoa;

	cout << "Lado b: ";
	cin >> ladob;

	areab = ladoa * ladob;

	cout << "Area da base = " << areab << endl;

	cout << "Altura: ";
	cin >> altura;

	volumep = areab * altura;
	cout << "Volume do prisma: " << volumep;
}