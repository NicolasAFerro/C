#include <stdio.h> 

int main(){ 
    int sumAlg, sum=0;
    int algMax, algMin=0;
    int number;
    int min, max; 
    scanf("%i", &sumAlg); 
    scanf("%i", &min); 
    
    scanf("%i", &max); 
    for(int i=min;i<=max;i++){  
      number=i;
      sum=0;
      while(number>0){ 
        sum=sum+number%10;
        number=number/10;
      }
      if(sum==sumAlg){ 
        algMax=i; 
        if(algMin==0)
          algMin=i;
      }
     
    }
   printf("%i\n", algMin); 
   printf("%i", algMax);
   
    

  return 0;
}