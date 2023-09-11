#include <stdio.h> 

int main (){ 
  int repeticoes; 
  scanf("%i", &repeticoes);  
  unsigned long int N[60]; 
  unsigned long int resultado[60]; 
  resultado[0]=1;
  resultado[1]=2;
  int j;
  for( j=2;j<60;j++){ 
    resultado[j]=resultado[j-1]+resultado[j-2];      
 
  }

  for(int i=0;i<repeticoes;i++)
    scanf("\n%lu", &N[i]);
  for ( int i = 0; i < 60; i++)
  {
    if (N[i]==0)
        printf("\nFib(%lu) = 1",N[i]);
      else    
        printf("\nFib(%lu) = %lu",N[i],resultado[N[i]-1]);
  }
  
      

    
     
    

  
  return 0; 
}