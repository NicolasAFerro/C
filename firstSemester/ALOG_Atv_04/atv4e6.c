/*Escreva um algoritmo que tenha como entrada de dados um número inteiro e em seguida calcule e exiba o 
fatorial do respectivo número. Entrada: 5 Saída: 120*/ 

#include <stdio.h> 

void main (void){  
	int number, result=1;
	
	printf("enter a number"); 
	scanf("%i", &number); 
	for (int i=1; i<=number; i++){ 
		result=result*i;	
	};
	printf("result: %i", result);
}