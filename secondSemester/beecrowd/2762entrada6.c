#include <stdio.h> 
#include <string.h> 

int main (){ 
  char text[15];
  gets(text);  
  char *novastring1; 
  char novastring2[10];
  char ponto;
  int cont=0;

  while(ponto!='.'){ 
    ponto=text[cont]; 
    cont++ ;
  }
  int j=strlen(text);
  for(int i=0;i<j;i++){  
    novastring2[i]=text[cont];
    cont++;
  }
  novastring1=strtok(text,".");
  printf("%s", novastring2);
  printf("%c", ponto);  
  printf("%s", novastring1);
  printf("\n");
    
  
  

  return 0;
}