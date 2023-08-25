/*Uma empresa de energia elétrica calcula o valor da conta de luz de acordo com o  
consumo em Kw/h que representa a diferença entre a leitura atual e a leitura anterior. 
 Faça um algoritmo que receba o número da conta, a leitura anterior e a leitura atual,  
 calcule o valor a ser pago, sabendo que a tarifa por Kw/h é de R$ 0,25. Ao final, exiba  
 o consumo de luz e o valor da conta do usuário.  
 Exemplo:
Entrada: 122443 Saída: 295
		 8635         73,75
		 8930*/  
		 
#include <stdio.h>  


void main (void) {  
	char billID[8]; 
	int currentRead, lastRead; 
	float totalCheck; 
	printf("insert your id: "); 
	scanf("%s", &billID); // don't forget of use %S for string
	printf("\n insert your previous reading:  "); 
	scanf("%i", &lastRead);
	printf("\n insert your current reading: "); 
	scanf("%i", &currentRead);
	currentRead= currentRead-lastRead; 
	totalCheck= currentRead*0.25; 
	printf("\n consumption: %i", currentRead); 
	printf("\n energy bill: %2.f", totalCheck); 

}