#include <stdio.h> 

int main(){ 
  /* 1.Seja a seguinte sequência de instruções em um programa em C:

  int *pti;
  int i=10;
  pti = &i
  Qual afirmativa é falsa?
  (2 Pontos)
  pti armazena o endereço de i
  *pti é igual a 10
  ao se executar *pti=20, i passará a ter o valor 20
  °pti é igual a 10
 */
 /*  questão 2
  int vetor[]={10,20,30,40,50};
  vetor++; */

  //questão 3
  int x, y, *p; 
  y = 0; 
  p = &y; 
  x = *p; 
  x = 4; 
  (*p)++; 
  --x; 
  (*p) += x; 
  printf("x=%d  y=%d *p=%d", x, y, *p);

  char *nome1="Celso";
  char prova2[]={"Prova 2"};
  printf("%p nome1: ",  (void *)nome1);
/*   char *nome; 
  strcpy(nome, "Cris"); */
  /* char prova[10]; 
  prova="Reava"; */
  return 0;
}