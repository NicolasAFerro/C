#include <stdio.h> 
#include <string.h> 
#include <ctype.h>// diretiva de manipulação de caracteres. 
#include <stdlib.h> //possui funções envolvendo alocação de memória, 
//controle de processos, conversões e outras

int main(){  
  char frase[50];
  char letra;
  int cont =0;
  printf("escreva uma frase: "); 
  //gets(frase); gets permite colocar mais caracter do que o descrito, por isso é perigoso. 
  fgets(frase, sizeof(frase), stdin);
  // str é onde a string será armazenada; o segundo argumento é o tamanho, incluindo \n e
  // \0 e o terceiro é por onde será lida;   
  //tolower(frase); to lower é só para caracter; 
  strlwr(frase);
  printf("a frase: %s", frase);
  printf("insira uma letra: "); 
  scanf(" %c", &letra);

  int *vetor=NULL;
  vetor = (int *)malloc(strlen(frase) * sizeof(int));
  /* strlen(frase): Isso retorna o tamanho da string armazenada na variável "frase". É a quantidade de caracteres na frase digitada pelo usuário.

sizeof(int): Isso retorna o tamanho em bytes de um inteiro. Geralmente, um inteiro tem 4 bytes.

strlen(frase) * sizeof(int): Multiplicando o tamanho da string pelo tamanho de um inteiro, você obtém o tamanho total necessário para armazenar o array de inteiros.

malloc(...): A função malloc é usada para alocar memória dinamicamente. Ela recebe como argumento o tamanho em bytes que você deseja alocar. Nesse caso, você está alocando memória para um array de inteiros.

(int *): A alocação de memória do malloc retorna um ponteiro genérico (void *), então você está fazendo um type casting para converter esse ponteiro em um ponteiro para inteiros.

No final dessa operação, o ponteiro "vetor" apontará para a memória recém-alocada, que é grande o suficiente para armazenar um array de inteiros com o tamanho igual ao número de caracteres na frase.

Lembre-se de que, após a conclusão do uso do array alocado dinamicamente, você deve liberar a memória alocada usando a função free(vetor) para evitar vazamentos de memória.






  char *ptr;
  ptr = malloc (50*sizeof(frase));A função  malloc  (o nome é uma abreviatura de memory allocation)
   aloca espaço para um bloco de bytes consecutivos na memória RAM
    (= random access memory) do computador e devolve o endereço desse bloco.
    O número de bytes é especificado no argumento da função 
    int vetor[ptr];
*/ 

  for(int i=0;i<strlen(frase);i++){
    if(frase[i]==letra){
      vetor[cont]=i;
      cont++;// se não vai armazenar errado

    };       
  };
  printf("indices onde ocorrem o caracter[%c]:", letra);
  for(int i=0;i<cont;i++)
    printf("\n%d", vetor[i]);
  return 0; 
  }
  // sizeof() retorna o numero de bytes
