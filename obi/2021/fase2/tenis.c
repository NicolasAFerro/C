#include <stdio.h> 

int main(){ 
  unsigned int A,B,C,D, J1,J2,J3;
  scanf("%i", &A);  
  scanf("%i", &B);  
  scanf("%i", &C);  
  scanf("%i", &D); 

  J1=(A+B)-(C+D); 
  J2=(A+C)-(B+D);
  J3=(A+D)-(B+C);
  if(J1<J2&&J1<J3)
    printf("%i", J1); 
  else 
    if(J2<J1&&J2<J3)
      printf("%i", J2); 
    else
      printf("%i", J3);    
  return 0;
}