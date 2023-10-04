#include <stdio.h> 

int main(){ 
  int repeticoes;int Valor; int soma=0;
  int num[100000];
  scanf("%i", &repeticoes); 
  for(int i=0;i<repeticoes;i++){  
    scanf("%i", &num[i]);
  }
  for(int j=0;j<repeticoes;j++){ 
    if(num[j]>0)
      soma+=num[j];
    else{ 
      for(int k=j;k>=0;k--){ 
        if(num[k]!=0){ 
          soma-=num[k];
          num[k]=0;
          break;
        }          
      }
    }
  }
  printf("soma: %i", soma);
  return 0;
}