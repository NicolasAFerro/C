/* 
Timelimit: 1


Neste problema você deve ler um número, indicando uma linha da 
matriz na qual uma operação deve ser realizada, um caractere maiúsculo,
 indicando a operação que será realizada, e todos os elementos de uma matriz 
 M[12][12]. Em seguida, calcule e mostre a soma ou a média dos elementos que 
 estão na área verde da matriz, conforme for o caso. A imagem abaixo ilustra
  o caso da entrada do valor 2 para a linha da matriz, demonstrando os
   elementos que deverão ser considerados na operação.


Entrada


A primeira linha de entrada contem um número L (0 ≤ L ≤ 11) indicando a
 linha que será considerada para operação. A segunda linha de entrada contém 
 um único caractere Maiúsculo T ('S' ou 'M'), indicando a operação 
 (Soma ou Média) que deverá ser realizada com os elementos da matriz. 
 Seguem os 144 valores de ponto flutuante que compõem a matriz, sendo 
 que a mesma é preenchida linha por linha, da linha 0 até a linha 11, 
 sempre da esquerda para a direita.


Saída


Imprima o resultado solicitado (a soma ou média),
 com 1 casa após o ponto decimal*/ 
#include <stdio.h> 
#include <string.h>

int main(){ 
  float matNum[12][12]; 
  char operation; 
  int matrixLine;
  float Sum=0, average=0;
  int col;

  for(int lin =0; lin<12; lin++)
    for(int col=0; col<12;col++) 
      scanf("%f", &matNum[lin][col]); 
  printf("\nenter the matrix line");
  scanf("%i", &matrixLine); 
  printf("\nEnter the operation S:sum, M: average");
  scanf(" %c", &operation); 
  if(operation=='s'||operation=='S'){ 
    for(int col=0;col<12;col++) 
      Sum=Sum+matNum[matrixLine][col];
    printf("\nsum: %.2f", Sum);
  }
  else{  
    for(col=0;col<12;col++) 
      average=average+matNum[matrixLine][col]; 
    average=average/col;
    printf("\navarege: %.2f", average);
  };



  return 0;
}