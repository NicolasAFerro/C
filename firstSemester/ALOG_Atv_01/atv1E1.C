// Construa um algoritmo que tenha como dado de entrada um número inteiro formado 
//por 4 algarismos. Calcule e exiba a somatória dos algarismos que compõem o número. Exemplo:
//Entrada: 8514 Saída: 18 

#include <stdio.h> 

void main (void){ 
	int number, sum, alg1, alg2, alg3, alg4; 
	printf("insert a number with four algarism"); 
	scanf("%i", &number); 
	alg1 = number / 1000;
    alg2 = (number / 100) % 10;
    alg3 = (number % 100) / 10;
    alg4 = number % 10;
	sum = alg1+alg2+alg3+alg4;
	printf("\n the sum of the digits: %i", sum); 

}
  