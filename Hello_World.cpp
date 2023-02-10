#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

// Diga "Olá, mundo!"

int main(void){

	setlocale(LC_ALL, "Portuguese"); //Utilizando caracteres e acentuação do PT-BR.
	std::cout << "Olá, mundo! \n";

	return 0;

}
