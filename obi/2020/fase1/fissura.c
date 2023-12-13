#include <stdio.h> 
#include <string.h>

void verificarOrtogonal(char matriz[][500],int forca,int tamanhoMatriz){ 
   for(int l=0;l<tamanhoMatriz;l++)
    for(int c=0;c<tamanhoMatriz;c++) 
      if(matriz[c][l]-'0'<=forca) 
        matriz[c][l]='*';
     

}
int main(){ 
  char matriz[500][500]; char matrizAux[500][500];
  int forcaErupcao, tamanhoMatriz, aux;
  char frase[500];

  scanf("%d %d",&tamanhoMatriz, &forcaErupcao);
 
  for(int i=0;i<tamanhoMatriz;i++) 
    for(int j=0;j<tamanhoMatriz;j++) 
      scanf(" %c", &matriz[i][j]);  
  for(int i=0;i<tamanhoMatriz;i++) 
    for(int j=0;j<tamanhoMatriz;j++) 
      matrizAux[l][c]=matriz[l][c];
   for(int i=0;i<tamanhoMatriz;i++){ 
    for(int j=0;j<tamanhoMatriz;j++) 
      printf("%c", matriz[i][j]); 
    printf("\n");
  }
  printf("\n-----------------------------------\n"); 

  aux=matriz[0][0]-'0';
  if(aux<=forcaErupcao) 
    matriz[0][0]='*'; 
  verificarOrtogonal(matriz, forcaErupcao, tamanhoMatriz);
  for(int i=0;i<tamanhoMatriz;i++){ 
    for(int j=0;j<tamanhoMatriz;j++) 
      printf("%c", matriz[i][j]); 
    printf("\n");
  }

  return 0; 
}