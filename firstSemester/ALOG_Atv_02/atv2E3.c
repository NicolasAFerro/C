/*Uma empresa de energia elétrica calcula o valor da conta de luz de acordo com o consumo
 em quilowatts que é obtida a partir da diferença entre a leitura atual e a leitura anterior. 
 Faça um algoritmo que receba o número da conta, a leitura anterior e a leitura atual, calcule
 e exiba o consumo e o valor a ser pago pela conta. O cálculo do valor do consumo é feito a
 partir dos seguintes critérios:
• Caso o consumo seja até 100 quilowatts o valor da tarifa é R$ 0,35 por quilowatt.
• Caso o consumo seja superior a 100 quilowatts o valor da tarifa é R$ 0,60 por quilowatt.
Exemplo:
Entrada: 1001 Saída: 80
		8340 		 28,0
		8420
Entrada: 2015 Saída: 150
		9200         90,0
		9350*/ 
		
		
#include <stdio.h> 

void main (void){ 
	
  char accountID[5];
  int previusRead, currentRead, consumption;
  float bill;
  printf("insert your account ID: "); 
  scanf("%s", &accountID); 
  printf("insert your previus reading: "); 
  scanf("%i", &previusRead); 
  printf("insert your current reading:"); 
  scanf("%i", &currentRead); 
  consumption = currentRead - previusRead;
  if (consumption < 100) 
     bill = consumption * 0.35;
  else
     bill = consumption * 0.6;
  printf("energy consumption  %i", consumption); 
  printf("\ntotal bill:  %.2f", bill);  
 }