#include <stdio.h> 


int main (){ 
  float numbers[100]; 

  for(int i=0;i<100;i++)
    scanf("%f\n", &numbers[i]);
    //numbers[i]=scanf("%f");
    
  for(int k=0;k<100;k++){ 
    if(numbers[k]<=10)
      printf("A[%i]=%.1f\n",k,numbers[k]);
  }

  return 0; 
}