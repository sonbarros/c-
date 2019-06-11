#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	
	int valor1, valor2, valor3, resultadoSoma;
	
	
	printf("\r\n:::::::::::::::::::::::::::::::\r\n"); // apenas para mostrar na tela
	printf("Algoritimo para somar 3 valores ");
	printf("\r\n:::::::::::::::::::::::::::::::\r\n \r\n");
	
	printf("Digite o primeiro valor ");
	cin >> valor1; // Habilita o teclado e guarda o que for digitado na variavel valor1
	printf("\r\n");
	
	printf("Digite o segundo valor ");
	cin >> valor2;
	printf("\r\n");
	
	printf("Digite o terceiro valor ");
	cin >> valor3;
	printf("\r\n");
	
	resultadoSoma = valor1 + valor2 + valor3; // Soma os resultados e guarda o resultado na variavel resultadoSoma
	
	printf("O resultado da soma e: ");
	cout << resultadoSoma; // mostra o resultado na tela
	
	printf("\r\n\r\n\r\n"); // apenas para saltar algumas linhas
	
	system("pause");	
}
