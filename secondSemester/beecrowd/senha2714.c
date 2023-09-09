#include <stdio.h> 
#include <string.h>


int main (){ 
  short num; 
  scanf("%hd", &num); 


  for(int i=0;i<num;i++){  
    char RA[21];
    scanf("\n%s",RA); 
    if((strlen(RA)<20)||(RA[0]!='R'||RA[1]!='A'))
      printf("INVALID DATA\n");
    else { 
      int validade =0; 
      int l;
      int cont=2;
      for( l=2;l<strlen(RA);l++){ 
        if(RA[l]!='0'){ 
          validade=1; 
          break;
        } 
      }         
      if(validade){ 
        for (int h=l;h<strlen(RA);h++) 
          printf("%c", RA[h]);
      }; 
      printf("\n");
    }   
  } 

  return 0;


}