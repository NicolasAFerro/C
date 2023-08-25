/*Construa um algoritmo que calcule e exiba o valor da venda de um determinado produto de acordo 
com a quantidade vendida e o preço do produto e a condição de pagamento.
 Utilize os códigos da tabela abaixo para identificar a condição de pagamento e em seguida, 
 efetue o calcule e a exiba o valor 
da venda do produto. 
Código
Condição de Pagamento
1 À vista (aplica-se um desconto de 10% sobre o preço do produto)
2A prazo */ 

#include <stdio.h> 
#include <string.h> 

void main (void){ 
	char ProdName[10], PayType; 
	float soldAmount, UnitPrice, TotalSell; 
	printf(" insert the product name"); 
	scanf("%s", &ProdName); 
	printf("insert the unit price"); 
	scanf("%f", &UnitPrice); 
	printf("insert the sold amount"); 
	scanf("%f", &soldAmount); 
	printf("insert the payment type"); 
	scanf(" %c", &PayType); 
	if (PayType == '1') 
		UnitPrice= UnitPrice-(0.1*UnitPrice); 
	TotalSell =  UnitPrice*soldAmount; 
	printf("total check:  %f", TotalSell); 
	
}

