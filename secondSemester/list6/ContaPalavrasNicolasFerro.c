#include <stdio.h>
#include <string.h>



int contarPalavra(char *frase, char *palavra){
    int resultado=0;
    int condicao=1;
    char *ponteiro=frase;
    int tamanhoPalavra= sizeof(palavra);

    do{
        ponteiro=strstr(ponteiro,palavra);
        if(ponteiro!=NULL){
            resultado++;
            ponteiro=ponteiro+tamanhoPalavra;
        }
        else 
             condicao=0;
       /*  if(ponteiro==NULL)
            condicao=0; */
    }while(condicao==1);
    return (resultado);
}

int main(){

      char frase[151];
      char palavra[21];
      char frase2[151];
      int result;
      printf("\nInforme uma frase: ");
      gets(frase);
      printf("\nInforme uma palavra: ");
      gets(palavra);
      result=contarPalavra(frase,palavra);
      // chamada da fun��o e printf
      printf("\nnumero de ocorrencias %i", result);
      return 0;
}
