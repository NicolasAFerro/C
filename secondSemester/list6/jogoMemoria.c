#include <stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include <time.h>
//#include <unistd.h> 
#include <Windows.h>

char* transformarEmString(int numSorteado, char sequenciaRecebida[],int cont){ 
  char transformacao = numSorteado+48;
  char *ponteiro=&transformacao;
  sequenciaRecebida[cont]=*ponteiro;
 // printf("\nponteiro: %c\n", *ponteiro);
 // printf("string: %s",sequenciaRecebida); 
  return(sequenciaRecebida);
}
int compararString(char sequencia[]){ 
  char compararString[10];
  printf("\nqual a sequencia: ");
  scanf("%s", compararString);
  return (strcmp(compararString,sequencia)==0)? 0 : 1;
}
int finalizacao(int condicaoJog1,int condicaoJog2){ 
  int retorno;
  if(condicaoJog1!=condicaoJog2){ 
     retorno=1;
  }else{
    retorno=0;
  }
  return (retorno);
}
int vencedor(int condicaoJog1,int condicaoJog2){ 
  if(condicaoJog1==1){ 
    printf("\njogador 2 venceu"); 
    exit(1);
  }    
  else{  
      printf("\n jogador 1 venceu");
      exit(1);
    }
  return 0 ;   

}
int main(){ 
  int  numJogador1, numJogador2;
  char sequencia[20]="", sequencia2[20]="";
  int parada=0, cont=0, condicaoJog1=0, condicaoJog2=0;

  srand(time(NULL));
  do{ 
    numJogador1 = rand() % 9;
    printf("\nJogador 1: Numero Aleatorio - %d\n", numJogador1);
    Sleep(5000); // Aguarde 5 segundos
    system("cls");
    transformarEmString(numJogador1, sequencia,cont);
    if(compararString(sequencia)==0){ 
      printf("\nsequencia correta");
    }       
    else 
      condicaoJog1=1; 

    numJogador2 = rand() % 9;
    printf("\nJogador 2: Numero Aleatorio - %d\n", numJogador2);
    Sleep(5000); // Aguarde 5 segundos
    system("cls");
    transformarEmString(numJogador2, sequencia2,cont);
    if(compararString(sequencia2)==0){ 
      printf("\nsequencia correta");
    }       
    else 
      condicaoJog2=1;
    //finalizacao(condicaoJog1,condicaoJog2); 
    /* printf("\ncondicção jog1: %i", condicaoJog1);
    printf("\ncondicção jog2: %i", condicaoJog2);
    
    printf("\nparada: %i", parada);  */
    parada = finalizacao(condicaoJog1,condicaoJog2); 
    cont++;
  }while(parada==0);
  vencedor(condicaoJog1,condicaoJog2);
  return 0;
}







    
    /* // Gere e exiba o número para o jogador 2
    numJogador2 = rand() % 9;
    printf("Jogador 2: Número Aleatório - %d\n", num_jogador2);
    sleep(5); 
    num2=57-'numJogador2';
    verdadeiroFalso(num1,num2); */