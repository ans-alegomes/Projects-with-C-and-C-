//Calcula a sua idade em dias;

#include <iostream>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese"); // Define corretamente acentuação e pontuação;

	cout << "\n PROGRAMA 01 - Conversor de idade em dias \n \n";

	cout << "\t Digite sua idade em anos: ";

	int anos;

	cin >> anos; //Recebe a quantidade de anos;

	cout << "\t A sua idade em dias é: " << (anos * 365) << endl; "\n \n";

	system("PAUSE");

	return 0;
}