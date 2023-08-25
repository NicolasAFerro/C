/*Construa um algoritmo que tenha como dado de entrada um número inteiro formado por 4 algarismos.
 Calcule e exiba um número que representa a forma inversa do número informado.
 Exemplo:
Entrada: 8514 Saída: 4158*/

#include <stdio.h> 

void main (void){ 
   int number, invNum, Alg1, Alg2, Alg3, Alg4; 
   printf("insert a integer positive number with four digits:  "); 
   scanf("%i", &number);
   Alg1 = number / 1000;
   Alg2 = (number / 100) % 10;
   Alg3 = (number % 100) / 10;
   Alg4 = number % 10;
   invNum = (Alg4 * 1000) + (Alg3 * 100) + (Alg2 * 10) + Alg1;
   printf("inverse number: %i", invNum);	
}