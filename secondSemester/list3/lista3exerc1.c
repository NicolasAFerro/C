#include <stdio.h>
#include <string.h>
#include <ctype.h>



int main (){
    char palavra[30];
    char novoCaracter;
    int a=0,e=0,i=0,o=0,u=0;

    printf("\ninsira uma palavra");
    scanf("%s", palavra);// gets da para usar gets no lugar de scanf; mas só da para usar em string
    strupr(palavra);
    for(int i=0; i<strlen(palavra); i++){
        switch(palavra[i]){
            case 'A':
                a++;
            case 'E':
                e++;
            case 'I':
                i++;
            case 'O':
                o++;
            case 'U':
                u++;
            default:
                ;


        };
    };
    printf("\nA: %i", a);
    printf("\ne: %i", e);
    printf("\ni: %i", i);
    printf("\no: %i", o);
    printf("\nu: %i", u);
    printf("%s", palavra);

    printf("\nvogal ou caracter: ");
    scanf(" %c", &novoCaracter);

    if(palavra >= 65 || palavra <=90)
        for(int i=0; i<strlen(palavra); i++){
            switch(palavra[i]){
                case 'A':
                    palavra[i]=novoCaracter;
                case 'E':
                    palavra[i]=novoCaracter;
                case 'I':
                    palavra[i]=novoCaracter;
                case 'O':
                    palavra[i]=novoCaracter;
                case 'U':
                    palavra[i]=novoCaracter;
                default:
                ;


        };
    };
    printf("\n%s", palavra);


    return 0;
}
