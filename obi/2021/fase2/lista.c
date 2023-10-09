#include <stdio.h> 
#include <stdlib.h>
#include <string.h>



int main(){ 
  int j ;
  int cont;
  long int elementos;
  scanf("%li",&elementos);  
  int *lista;
  lista=(int *)malloc(elementos * sizeof(int)); 
  cont = elementos-1;
  int resultado;
  int novoElemento;
  for(int i=0;i<elementos;i++)
    scanf("%i", &lista[i]);
  for(j=0;j<elementos;j++){
    if(lista[j]==lista[cont])
      printf("\nnois");
    else{ 
      if(lista[j]<lista[cont]){ 
        novoElemento=lista[j]+lista[j+1]; 
        resultado++;
        
      }        
      else{  
        novoElemento=lista[cont]+lista[cont-1]; 
        resultado++; 
      }  
    }
    cont--;
  } 
  printf("\n%i", resultado);
  return 0;
}