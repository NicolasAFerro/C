/* 
Uma empresa trabalha com 4 tipos de produtos: Areia, Pedrita, Saibro, Brita.
 Cada produto apresenta três tipos de composição (Fina, Média, Grossa).
  O preço de cada produto nas suas respectivas composições está descrito 
  na tabela abaixo:
Produto
Preço     Tipo Fina      Preço Tipo Média    Preço Tipo Grossa
Areia     R$ 34,00       15% a mais da Fina   25% a mais da Fina
Pedrita   R$ 42,50       15% a mais da Fina   25% a mais da Fina
Brita     R$ 28,00       15% a mais da Fina   25% a mais da Fina
Saibro    R$ 27,00       15% a mais da Fina   25% a mais da Fina

Construa um algoritmo que a partir do produto, da sua composição e da 
 quantidade vendida (em metros cúbicos) calcule e exiba o Preço Final 
  do Produto e o Valor da Venda. Caso o valor da venda seja inferior a  
  R$ 750,00 acrescente uma taxa de frete de R$ 45,00 no Valor da Venda.
Exemplos:
Entrada
A   F   25
Saída
34,00    850,00
Entrada
A     f     8,5
Saída
34,00    334,00
Entrada
b     m    20
Saída
32,20     689,00
Entrada
s     G    23,5
Saída
33,75     793,12

*/

#include <stdio.h> 
#include <string.h>

float checkValue(char){ 


  
};

void main (void){ 
  char product[12], productType;
  float volume;
  printf("\n enter the product type"); 
  printf("\n SAND ");
  printf("\n GRAVEL"); 
  printf("\n SMALL STONE"); 
  printf("\n SAIBRO: "); 
  scanf("%s", &product); 
  printf("enter the type"); 
  printf("<1> THIN"); 
  printf("<2> MEDIUM"); 
  printf("<3> THICK: "); 
  scanf(" %c", &productType);
  printf("cubic meters: "); 
  scanf("%f", &volume); 
  
}