#include <stdio.h> 

int main(){ 

  int age1, age2, result; 

  //printf("\nidade irmão mais novo: "); 
  scanf("%i", &age1); 
  //printf("\nidade irmao do meio: "); 
  scanf("%i", &age2); 
  result=(age2-age1)+age2;
  printf("%i", result);

  return 0;
}