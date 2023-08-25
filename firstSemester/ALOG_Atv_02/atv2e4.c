/* Construa um algoritmo que a partir do código, do setor, do tempo de serviço (em anos) e do salário bruto 
de um funcionário faça o cálculo e a exibição do seu salário líquido.O cálculo do desconto é feito de acordo
 com a tabela abaixo:
Setor   Porcentagem Desconto
A       10% do Salário Bruto
B       15% do Salário Bruto

O cálculo da gratificação é feito de acordo com a tabela abaixo:
Setor       Tempo de Serviço       Porcentagem de Gratificação
A            Até 5 anos               9,5% do Salário Bruto
             Acima de 5 anos          14,5% do Salário Bruto
B            Até 5 anos               12,5% do Salário Bruto
             Acima de 5 anos          17,5 % do Salário Bruto
O cálculo do salário líquido é feito da seguinte forma: Salário Bruto – Desconto + Gratificação
Exemplo:
Entrada: 3456 Saída: 1950,0
		 B
         4
         2000,0
Entrada: 2267 Saída: 3135,0
         a
         7
         3000,0 */
#include <stdio.h> 
#include <string.h>  


void main (void){  
  char employeeID[5], sector;
  int serviceTime;
  float grossSalary, disconts, extras, netSalary;
  printf("insert you ID: "); 
  scanf(" %s", &employeeID); 
  printf("\ninsert your sector: "); 
  scanf(" %c", &sector); 
  printf("\ninsert your service time: "); 
  scanf("%i", &serviceTime); 
  printf("\ninsert you gross salary: "); 
  scanf("%f", &grossSalary);   

  if (sector == 'A' || sector == 'a') { 
	disconts = 0.1 * grossSalary; 
	if (serviceTime<=5)
		extras=0.095 * grossSalary; 
	else 
		extras=0.145 * grossSalary;
  }	
  else {
	disconts = 0.15 * grossSalary;  
	if (serviceTime<=5)
		extras=0.125 * grossSalary; 
	else 
		extras=0.175 * grossSalary;
  }; 
  netSalary = grossSalary - disconts + extras;
  printf("net salary:  %.2f", netSalary);
}

