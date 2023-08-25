#include <stdio.h> 
#include <string.h>

int CalcDifHor(int menorHor, int maiorHor){  
  int menorHorMinutos, maiorHoraMinutos,diferenca;

  menorHorMinutos=(menorHor/100)*60+(menorHor%100); 
  maiorHoraMinutos = (maiorHor/100)*60+(maiorHor%100); 
  diferenca=maiorHoraMinutos-menorHorMinutos; 
  return(diferenca); 
}

void main (void){ 
  int placa; 
  int Entrada, Saida;
  float faturamento;  
  printf("insira a placa: "); 
  scanf("%i",&placa); 
  do {
  printf("insira o horario de entrada <hhmm>: ");  
  scanf("%i", &Entrada); 
  printf("insira o horario de saida: "); 
  scanf("%i", &Saida);
  printf("tempo de permanencia %i", CalcDifHor(Entrada,Saida));
  faturamento= (CalcDifHor(Entrada, Saida)/15)*1.5; 
  printf("\nfaturamento: %2.f", faturamento); 
  printf("\ninsira a placa: "); 
  scanf("%i",&placa);  
 
  } while (placa!=0); 
  
  
}