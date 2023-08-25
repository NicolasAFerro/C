#include <stdio.h>


/*int main (){
    int xadrez[8][8];
    int vetor [64];
    int v=0;
    int nenhum=0, peao=0, cavalo=0, bispo=0, torre=0, dama=0, rei=0;

    for(int lin=0; lin<8;lin++)
        for(int col=0; col<8; col++)
            scanf("%i", &xadrez[lin][col]);
     for(int lin=0; lin<8;lin++)
        for(int col=0; col<8; col++){
            vetor[v]=xadrez[lin][col];
            v++;
        };
        printf("nois");
    for(v=0;v<64;v++){
            while(vetor[v]==0){
                nenhum++;
                break;

            };
             while(vetor[v]==1){
                peao++;
                break;

            };
              while(vetor[v]==2){
                cavalo++; 
                break;

            };
              while(vetor[v]==3){
                bispo++;
                break;
            };
              while(vetor[v]==4){
                torre++;
                break;

            };
              while(vetor[v]==5){
                dama++; 
                break;

            };
              while(vetor[v]==6){
                rei++; 
                break;

            };
        };
    printf("\nnenhum: %i", nenhum);
    printf("\npeao: %i", peao);
    printf("\ncavalo: %i", cavalo);
    printf("\nbispo: %i", bispo);
    printf("\ntorre: %i", torre);
    printf("\ndama: %i", dama);
    printf("\nrei: %i", rei);

    return 0;
} */

// betterway 
int main (){
int xadrez[8][8];
int vetor [7]={0,0,0,0,0,0,0};
for(int lin=0; lin<8;lin++)
  for(int col=0; col<8; col++)
    scanf("%i", &xadrez[lin][col]);
for(int lin=0; lin<8;lin++)
  for(int col=0; col<8; col++)
    vetor[xadrez[lin][col]]=vetor[xadrez[lin][col]]+1; 
for(int i=0; i<7;i++) 
  printf("\nvetor[%i]:%i", i, vetor[i]);
  return 0;
};