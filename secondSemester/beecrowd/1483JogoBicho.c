#include <stdio.h> 
 

void vetor(/*int escolhido, int sorteado, /*int vescolhido[],int vsorteado[]*/
numero, vetor){ 
 
 /* int v1[7]={0,0,0,0,0,0,0};  
  int v2[7]={0,0,0,0,0,0,0}; 
  
  int cont=6; 
  /*while (escolhido>10)
  {
    vescolhido[cont]=escolhido%10; 
    escolhido=escolhido/10; 
    cont--;
  }
  vescolhido[cont]=escolhido;  
  cont=6;
    while (sorteado>10)
  {
    vsorteado[cont]=sorteado%10; 
    sorteado=sorteado/10; 
    cont--;
  }
  vsorteado[cont]=sorteado;  
  
  int cont=6; 
  /*while (numero>10)
  {
    vescolhido[cont]=escolhido%10; 
    escolhido=escolhido/10; 
    cont--;
  }
  vescolhido[cont]=escolhido;*/
  int cont=6; 
  while (numero>10)
  {
    vetor[cont]=numero%10; 
    numero=numero/10; 
    cont--;
  }
  vetor[cont]=numero;  
}
/*
void familia(int sorteado[], int escolhido[], float aposta){ 
  int contSorteado = 1;
  int contEscolhido=1;
  int numsorteado=(sorteado[5]*10)+sorteado[6];
  int numescolhido = (escolhido[5]*10)+sorteado[6];
  for(int i=1;i<100;i=i+4){ 
    if(numescolhido==numsorteado){ 
       aposta=aposta*50;
      printf("%.2f", aposta);
    }
  }
 for(int j=1;j<=contEscolhido;j=j+4)
    contEscolhido++; 
 for (int k = 0; k < numsorteado; k=k+4)
    contSorteado++; 
  if (contEscolhido==contSorteado)
    printf("%.2f", aposta*16); 
  else 
    printf("0.00");
  

  
  

}
void premio(float aposta, int verificador, int sorteado[],int escolhido[]){
  switch (verificador)
  {
  case 6: 
    familia(sorteado, escolhido, aposta);
    break;
  case 5: 
    familia(sorteado, escolhido, aposta);;
    break;
  case 4: 
    printf("%.2f", aposta*50);
    break; 
  case 3: 
    printf("%.2f", aposta*500);
    break;  
  default:
  printf("%.2f", aposta*3000);
    break;
  }

}
*/
int main (){ 
  float Aposta; 
  long int numeroEscolhido, numeroSorteado; 
  int vetorEscolhido[7]={0,0,0,0,0,0,0}; 
  int vetorSorteado[7]={0,0,0,0,0,0,0};

  scanf("%f", &Aposta); 
  scanf("%ld", &numeroEscolhido); 
  scanf("%ld", &numeroSorteado);

  
 
  while (numeroEscolhido!=0&&numeroSorteado!=0&&Aposta!=0){  
    vetor(numeroEscolhido,numeroSorteado,vetorEscolhido,vetorSorteado);
    /*for(int i=0;i<7;i++)
      printf("%i", vetorEscolhido[i]);
      printf("\n");
     for(int i=0;i<7;i++)
      printf("%i", vetorSorteado[i]);*/
    /*int i=6;
    int condicao=0;
    while (condicao==0)
    {
      if(vetorEscolhido[i]==vetorSorteado[i]){       
      } 
      else{ 
        premio(Aposta,i,vetorSorteado,vetorEscolhido);
        condicao=1;
        break;
      }
      i--;
    }*/
    vetor(numeroEscolhido,vetorEscolhido);
    vetor(numeroSorteado,vetorSorteado);
    for(int i=0;i<7;i++){ 
      printf("%i", vetorEscolhido[i]); 
    }
    printf("\n");
    for (int k = 0; k < 7; k++)
    {
      printf("%i", vetorSorteado[k]);
    }
    
    /*for(int i=6;i=3;i--){ 
      if(vetorEscolhido[i]==vetorSorteado[i]){ 
        "";        
      } 
      else{ 
        premio(Aposta,i,vetorSorteado,vetorEscolhido);
      }
    }*/
    break;
  }
   
  
  


  return 0;
}