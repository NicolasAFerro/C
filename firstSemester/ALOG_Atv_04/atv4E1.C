/*Construa um algoritmo que exiba a tabela de conversão de graus Fahrenheit para Celsius no intervalo de 50 a 150 de 1 em 1. 
Considere a seguinte de fórmula de conversão: C = (F -32)/1,8*/ 
#include <stdio.h> 

void main (void){
	float C;
	for (int i=50; i<=150; i++){ 
		C = (i -32)/1.8; 
		printf("\nFahrenheit: [%i], celcius: [%.2f]", i, C);
	};
}