#include <stdio.h> 

int main(){ 
  int joao=762; 
  int maria=38;
  int *zePequeno;
  printf("%i", joao); 
  printf("\n%p", &joao);
  int *zeGrande=NULL;

  zePequeno=&joao;// se fizer zepequeno=joao da erro, pois um ponteiro só aponta 
  // PARA ENDEREÇO=> um ponteiro só recebe o enderço de uma variavel
  printf("\nzePequeno=&joao %p", zePequeno);
  printf("\nconteudo da variavel que zePequeno aponta perci *zePequeno: %i", *zePequeno);
  printf("\n a frase acima e a mesma coisa de escrever: prci,joao - %i", joao);
  printf("\n-------------------------------------------------------");  
  *zePequeno=20;
  printf("\nse fizermos: *zePequeno=20. o conteudo de joao altera para 20: %d", *zePequeno); 
  printf("\nconteudo de joao perci joao: %d", joao);
  printf("\n --------------------------------------------------------"); 
  printf("\n \t\t PONTEIROS E VETORES") ;
  printf("\n int vetor[10]"); 
  printf("\n vetor=vetor[0] => e o endereco do primeiro elemento"); 
  printf("\n --------------------------------------------------------"); 
  printf("\n \t\t ARITMETICA"); 
  int x=5, *ptrx=&x; 
  float y=5.0000, *ptry=&y; 
  printf("\n x= %d %ld", x, (long) ptrx); 
  printf("\n x= %d %ld", x+1, (long) (ptrx+1));  
  printf("\n y= %f %ld", y, (long) ptry); 
  printf("\n y= %f %ld", y+1, (long) (ptry+1)); 
  printf("\n incrementou no sizeof da variavel tipo int/float");
  int n[] = {7, 8, 9};
  int *p;
  p = &n[0];
  printf("\n p[0]: %d", *p);
  p++;// aqui ele altera para onde está apontando o endereço, que é a posição n[1]=8
  printf("\np[1]: %d - altera para onde p está apontando-p++", *p);
  (*p)++;// neste ele altera o conteudo da posição n[1] 7,9,9;
  printf("\n*p++ -  neste ele altera o conteudo da posição n[1] 7,9,9; %d\n", *p);


  //printf("\n zeGrande: ", *zeGrande);

  
  return 0 ;
}