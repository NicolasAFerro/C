/* Construa um algoritmo que receba o número de horas trabalhadas e o número de 
horas extras trabalhadas de um empregado bem como o valor do salário mínimo. 
Calcule e mostre o salário final do empregado seguindo as regras abaixo:
• O valor da hora trabalhada vale 7,5% do salário mínimo;
• O valor da hora extra vale 15% do salário mínimo;
• O salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
• O valor a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo 
valor da hora extra;
• O salário final do empregado equivale ao salário bruto mais o valor a receber pelas horas extras.
Exemplo:
Entrada: 100 Saída: 5580,00
         12
         600,00*/ 



#include <stdio.h> 

void main (void){ 
	float salary, workedHours, extraHours,minimumSalary, workedHoursValue, extraHoursValue;  
	printf("insert the worked hours: "); 
	scanf("%f", &workedHours); 
	printf("insert the worked extra hours: "); 
	scanf("%f", &extraHours);  
	printf("insert the the minnimun wage: "); 
	scanf("%f", &minimumSalary);
	workedHoursValue = minimumSalary *0.075; 
	extraHoursValue = minimumSalary *0.15; 
	salary = (workedHours*workedHoursValue)+(extraHours*extraHoursValue); 
	printf("final salary:  %.2f", salary);
}