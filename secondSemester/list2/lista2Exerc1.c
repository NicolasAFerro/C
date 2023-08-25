
#include <stdio.h>

int main (){
    int matA [5][6];
    int vetor[30];
    int lin, col, v=0;

    for (lin=0;lin<5;lin++)
        for(col=0;col<6;col++)
            scanf("%i", &matA[lin][col]);
     for (lin=0;lin<5;lin++)
        for(col=0;col<6;col++){
             vetor[v]=matA[lin][col];
        v++;
        };
     for (lin=0;lin<5;lin++)
        for(col=0;col<6;col++)
            printf("\nMatA [%i][%i]:%i", lin, col, matA[lin][col]);
     for(v=0;v<30;v=v+7){
        printf("\n%i", vetor[v]);
    };


    return 0;
}
