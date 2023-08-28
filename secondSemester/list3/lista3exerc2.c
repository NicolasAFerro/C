#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (){
    char palavra [30];
    char letra;
    int cont=0;

    printf("\ninsira uma palavra: ");
    scanf("%s", palavra);
    printf("informe uma letra: ");
    scanf(" %c", &letra);
    strupr(palavra);
    letra=toupper(letra);
    for(int i=0; i<strlen(palavra);i++){
        if(palavra[i]==letra)
            cont++;
    };

    printf("\qtd[%c]: %i", letra, cont);





    return 0;
}
