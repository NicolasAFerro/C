#include <stdio.h> 

int main(){ 

  int casas, testes;
 
  scanf(" %i", &testes);
  for(int k=0;k<testes;k++){ 
     unsigned long long trigo=1;
    scanf(" %i", &casas);
    for (int i=0;i<casas;i++)
      trigo*=2;
     
    
    printf("%llu kg\n", trigo/12000);
  }


  return 0;
}