/* Construa um algoritmo que calcule e exiba o valor a 
 ser pago para cobrir de grama a superfície de um terreno retangular 
 considerando que o preço do metro quadrado de grama é de R$ 13,00. Exemplo:
Entrada: 8,0 Saída: 572,0
		 5,5*/ 

#include <stdio.h> 

void main (void){ 
	float width, length, total; 
	printf("enter the land width:  "); 
	scanf("%f", &width); 
	printf("enter the land length:  "); 
	scanf("%f", &length); 
	total = (width*length)*13; 
	printf("total bill:   %.2f  ", total);

}