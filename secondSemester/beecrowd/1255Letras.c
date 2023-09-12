#include <stdio.h> 
#include <string.h> 
#include <ctype.h>// diretiva do tolower


int main(){
  int tests; 
  char frase[201];
  int letras[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  int maior =0;
  scanf("%i", &tests);
  getchar();
  for(int s=0; s<tests;s++){ 
    //scanf("%[^\n]\n", frase);
    // não estava dando certo pois não estava redefinindo as posições, ai saia tudo CO
    int letras[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    gets(frase); 
    //++++++++++++++++++++++++++++++++++++++++=
    for (int i = 0; i < strlen(frase); i++){
      frase[i]=tolower(frase[i]);
    }
    frase[strlen(frase)]='\0';
    //+++++++++++++++++++++++++++++++++++++++ 
    for(int j=0;j<strlen(frase);j++){ 
      if (frase[j]>=97&&frase[j]<=123){
       letras[(frase[j]-97)]=letras[(frase[j]-97)]+1;
      }      
    }
    int maior =0;
    for (int k = 0; k < 26; k++){
      if(maior<letras[k]){ 
        maior=letras[k]; 
      } 
    }
    /*printf("%i\n", maior);
    for(int j=0;j<26;j++) 
      printf("%i", letras[j]); 
    printf("\n");*/  
    for(int m = 0; m < 26; m++){
      if(letras[m] == maior) 
        printf("%c", m + 'a');
    }
    printf("\n");    
  }
  return 0;
}