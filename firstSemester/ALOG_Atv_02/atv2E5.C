/*Elabore um algoritmo que tenha como entrada de dados o tipo de um ingresso 
 (C-Comum, E-Estudante, I-Idoso) e o valor do ingresso e em seguida calcula e exiba o valor  
 final pago pelo ingresso aplicado de um desconto de acordo com os critérios abaixo:
Tipo da Ingresso       Porcentagem do desconto
Comum                             0
Estudante              15% do valor do ingresso
Idoso                   20% do valor do ingresso
Exemplo:
Entrada: c Saída: 30.00
        30.00
Entrada: E Saída: 51.00
        60.00*/ 
#include <stdio.h> 



void main (void){  

  char ticketType;
  float ticketValue;
  printf("insert your ticket type: "); 
  scanf(" %c", &ticketType); 
  printf("insert the ticket value"); 
  scanf("%f", &ticketValue); 
  
  if (ticketType =='E' || ticketType == 'e' )
     ticketValue = ticketValue - (ticketValue * 0.15);  
  else 
	if (ticketType == 'I' || ticketType == 'i' )
      ticketValue = ticketValue - (ticketValue * 0.20); 
  printf("ticket value:  %.2f", ticketValue);


}