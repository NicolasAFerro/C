/*Uma pessoa assina um plano de 50 minutos no celular que custa R$ 50,00 por mês, 
independente de utilizá-los integralmente ou não. Porém, caso seja utilizado mais do que 50 minutos,
 é cobrado mais R$ 0,02 por cada segundo excedente. Construa um algoritmo que a partir dos minutos gastos,
 calcule o valor da conta a que será paga no respectivo mês.
Exemplo:
Entrada: 62 Saída: 64,40
Entrada: 35 Saída: 50, 0*/




#include <stdio.h> 


void main (void){
  int spentMin;
  float amountPay; 
  printf("insert the spent minutes:  "); 
  scanf("%i", &spentMin);
  
  if ( spentMin <= 50 )
     amountPay = 50;
  else
     amountPay = 50 + (spentMin - 50) * 60 * 0.02; 
  printf("bill value:  %.2f", amountPay);
}
