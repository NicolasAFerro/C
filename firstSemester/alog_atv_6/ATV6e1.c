/*Monte uma função chama SomaAlg. Esta função tem como parâmetro de entrada 
 um número inteiro positivo e retorna um número inteiro que representa a 
  soma dos algarismos do parâmetro de entrada.
Exemplo: SomaAlg(4231) o valor de retorno desta função é o número 
 10 que representa a soma dos algarismos do número 4231. 
 Em seguida, utilizando a função SomaAlg, construa um algoritmo que a
  partir de um número inteiro, faça a exibição dos somatórios dos algarismos
   do respectivo número. O processo deve ser realizado
  até ser informado 0 (zero) para a entrada de dados.*/  

 #include <stdio.h> 

 int SumAlg(int integer){ 
    int result=0; 
    while (integer>10){ 
      result=result+( integer%10); 
      integer=integer/10; 
    };   
    return( result=result+integer);

 }; 
 void main (void){ 
    int  number; 
     printf("\nenter a integer number: "); 
     scanf("%i", &number);
    do{
      printf("result: %i", SumAlg(number)); 
      printf("\nenter a integer number: "); 
      scanf("%i", &number);
    }while (number>0);
    

 }