/*Construa um algoritmo que a partir do código, do preço de custo, da categoria (A – Alimentação, B – Bebidas)
 e do tipo de armazenagem (S - precisa de refrigeração, N - Não precisa de refrigeração) 
 de um determinado produto, calcule e exiba o seu preço de venda. O cálculo do preço de venda deve ser feito 
 de acordo com a tabela abaixo:
 
Refrigeração        Categoria             Preço de Custo            Porcentagem aplicada ao Preço de Custo
N                      A                   Até R$ 100,00                             15%
                                          Acima de R$ 100,00                          20%
                       B                                                              15%
S                      A                                                             20%
                       B                  Até de R$ 80,00                            25%
                                          Acima de R$ 80,00                          35%
Exemplo:
Entrada: 3456 Saída: 92.0
         80.0
         B
         n
Entrada: 2267 Saída: 202.5
         150.0
         B
         S*/ 
#include <stdio.h> 

void main (void){
	
	char id [5], refrigeration, category;
    float costPrice, sellValue; 
	printf("insert the id:  "); 
	scanf(" %s", &id);
	printf("insert your cost price: "); 
	scanf("%f", &costPrice); 
	printf("\ninsert the category: "); 
	scanf(" %c", &category);	
	printf("\ninsert the refrigeration"); 
	printf("\n<YES>---Y "); 
	printf("<NO>-----N:  ")
	scanf(" %c", &refrigeration); 

	if(refrigeration=='n' || refrigeration=='N')	  
			if (costPrice>100) 
				sellValue=costPrice*1.2; 
			else 
				sellValue=costPrice*1.15;  
	else 
		if (refrigeration=='y' || refrigeration=='Y') 
			if (category=='b' || category=='B') 
				if(costPrice>80) 
					sellValue=costPrice*1.35; 
				else 
					sellValue=costPrice*1.25; 
			else 
				sellValue=costPrice*1.20; 
	printf("\nbill:  %.2f", sellValue);

}
