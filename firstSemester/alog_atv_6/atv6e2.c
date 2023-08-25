/* 
Monte uma função chamada Potencia que têm como parâmetros de entrada um 
número real representado a base da potência e um número inteiro positivo 
representando o expoente da potência. Esta função tem como retorno um número
 real que representa o resultado da potência.
Exemplo: Potencia(5.4, 3) o valor de retorno desta função é o número 157.464
 que representa 5.43.
  Lembre-se que todo número elevado ao expoente zero é igual a 1 (um).
Em seguida, utilizando a função Potencia, construa um algoritmo que a
 partir da entrada de dados para o valor da base e do expoente, faça a 
 exibição da potência BaseExpoente.

*/

#include <stdio.h> 
float exponentiation(float base, int expoent){ 
  float result = 1;
  for (int i=0;i<expoent;i++){ 
    result=result*base;
  };

  return (result);
};

void main (void){ 
  float base; 
  int expoent;
  printf("\n exponentiation");
  printf("\nenter you base: "); 
  scanf("%f", &base); 
  printf("\nenter your expoent: "); 
  scanf("%i", &expoent);
  if(expoent==0) 
    printf("\nresult: 1");
  else    
    printf ("\nresult %f", exponentiation (base, expoent)); 
}