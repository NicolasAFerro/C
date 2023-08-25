/*A prefeitura de uma cidade fez uma pesquisa com 200 pessoas, coletando dados sobre o salário e o número de filhos.
 Construa um algoritmo que permita a prefeitura identificar:
• A média do salário dessas pessoas 
• A média do número de filhos
 • O maior salário
 • A porcentagem de pessoas com salários até R$ 150,00*/ 
 
 #include <stdio.h> 
 
 void main (void){  
	float salary, biggestSalary=0, untilperc150=0, salaryAverage=0, childAverage=0; 
	int childrenNum;
	
	for (int i=0; i<200; i++){ 
		
		printf("\ninsert your salary: %f", salary); 
		scanf("%f", &salary); 
		printf("\ninsert how many children you have: %i", &childrenNum); 
		scanf("%i", &childrenNum); 
		childAverage=childAverage+childrenNum;  
		salaryAverage=salaryAverage+salary; 
		if (salary>biggestSalary) 
			biggestSalary=salary;
		if (salary<150) 
			untilperc150=untilperc150+1; 		
	}
	childAverage=childAverage/i;
	salaryAverage=(salaryAverage/i); 
	untilperc150=(untilperc150/i)*100; 
	printf("\nchildren average: %.2f", childAverage);
	printf("\nsalary Average: %.2f", salaryAverage); 
	printf("\nbiggest Salary: %.2f", biggestSalary); 
	printf("\nuntil perc 150: %.2f", untilperc150);
	
 
 
 }