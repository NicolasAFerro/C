/* Construa um algoritmo que a partir de um número inteiro calcule e exiba a somatória de seus algarismos.
Entrada: 34562 Saída: 20
Entrada: 311 Saída: 5*/ 


#include <stdio.h> 

void main (void){ 
	int number, sum=0; 
	printf("\nenter a  integer number: ");  
	scanf("%i", &number);
	while (number>0) { 
		sum=sum+number%10;
		number=number/10;	
	};
	printf("\n sum: %i", sum);
}