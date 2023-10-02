#include <stdio.h> 
#include <string.h> 



int main(){ 

  int copas=13; 
  int verificaCopas=0;
  int espadas=13;  
  int verificaEspadas=0;
  int ouros=13; 
  int verificaOuros=0; 
  int paus=13; 
  int verificaPaus=0;
  char entrada[157]; 
  char verificacao[52][3];
  scanf("%s", entrada); 
  int i=0;

  for(int j=0;j<(strlen(entrada)/3);j++){ 
    for(int k=0;k<3;k++){ 
      verificacao[j][k]=entrada[i];
      i++;
    }
  }     
  for(int l=0;l<(strlen(entrada)/3);l++){ 
    for(int p=l+1;p<(strlen(entrada)/3);p++){ 
      if(strncmp(verificacao[l],verificacao[p],3)==0){ 
        switch(verificacao[l][2]){ 
          case 'C': verificaCopas++; 
            break;
          case 'E': verificaEspadas++; 
            break; 
          case 'U': verificaOuros++ ; 
            break;
          case 'P': verificaPaus++;
            break;
          default:i++;
            
        }
      } 
      
      
    }
  }

  for(int w=2;w<strlen(entrada);w=w+3){ 
    switch(entrada[w]){ 
      case 'C': copas--; 
        break;
      case 'E': espadas--; 
        break; 
      case 'U': ouros--; 
        break;
      case 'P': paus--;
        break;
      default:;
    }
  }
  if(verificaCopas>0){ 
    printf("\nerro");
  }else 
    printf("%i", copas); 
   
  if(verificaEspadas>0){ 
    printf("\nerro");
  }else 
    printf("\n%i", espadas); 

  if(verificaOuros>0){ 
    printf("\nerro");
  }else 
    printf("\n%i", ouros);  

  if(verificaPaus>0){ 
    printf("\nerro");
  }else 
    printf("\n%i", paus); 
  



  return 0;
}