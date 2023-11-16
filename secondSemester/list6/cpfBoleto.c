#include <stdio.h> 
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void pagamento( char *boleto, char *ptr, int cont2){ 
  double pgt=0;
  char textoPagar[60];
  char auxiliar[20];
  int cont=0, i=0;
  while(cont<(strlen(boleto)-cont2)&& *ptr != '\0'){ 
    if((*ptr>='0'&& *ptr<='9')||*ptr=='.'){ 
    textoPagar[i]=*ptr;
    i++;
    }
    ptr++;
    cont++;
  }
  textoPagar[i]='\0';
  printf("\ntexto pagar: %s", textoPagar);
  i=0;
  ptr=textoPagar;
  while(*ptr != '\0'){       
     if(*ptr=='.'){ 
      auxiliar[i]='.'; 
      ptr++;
      auxiliar[i+1]=*ptr; 
      ptr++;
      auxiliar[i+2]=*ptr;  
      auxiliar[i+3]='\0';
      i=0;
      printf("\nauxiliar: %s", auxiliar);
      pgt+=atof(auxiliar);
      printf("\npgt: %f", pgt);
      //auxiliar[0]='\0'; 
      memset(auxiliar, 0, sizeof(auxiliar));          
    }else{  
      auxiliar[i]=*ptr; 
      i++;
    }  
    ptr++;
  }
  printf("\nauxiliar: %s", auxiliar);
  pgt += atof(auxiliar);
  printf("\nvalor a pagar: %.2f", pgt);
  //return pgt;
} 


void cpf(char *boleto){ 
  char *ptr=boleto;
  int cpf[11], cont=0, cont2=0;
  while(cont<11){ 
      if(*ptr>='0'&& *ptr<='9'){ 
        cpf[cont]=*ptr -'0';
        cont++; 
      }
      ptr++;
      cont2++;
  }
  printf("\ncpf: ");
  for(int i=0;i<11;i++)
    printf("%i",cpf[i]);
  printf("\nponteiro: %c", *ptr);
  pagamento(boleto, ptr, cont2);
  //return *cpf;
}
int main(){
  char boleto[61]; 
  int repeticoes;

  printf("informe o numero de casos: "); 
  scanf("%i", &repeticoes);
  for(int i=0;i<repeticoes;i++){ 
    printf("\ninforme o boleto: ");
    scanf("%s", boleto);
    cpf(boleto);
    //printf("CPF: %s Soma: %.2f ", cpf(boleto), pagamento(boleto));
  } 

  return 0;
}