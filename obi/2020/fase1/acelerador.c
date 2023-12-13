#include <stdio.h> 


int main (){ 
  int entrada;
  //printf("\n entrada:"); 
  scanf("%i", &entrada); 
  entrada-=3;
  entrada=entrada%8;
  if(entrada==3)
    printf("%d", 1); 
  else if(entrada==4) 
    printf("%d", 2); 
  else
    printf("%d", 3);

  return 0; 
}