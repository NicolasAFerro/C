#include <stdio.h> 


float calcGratif (int cod, int tempo, float sal){ 
  float gratif;
  if (cod==1) {
    if(tempo>5) 
      gratif=sal*0.045; 
    else 
      gratif=sal*0.025; 
  }    
  else {  
    if(cod==2) {       
      if(tempo>5) 
        gratif=sal*0.055; 
      else 
        gratif=sal*0.035; 
    }
    else {  
       if (tempo>5) 
        gratif=sal*0.065; 
      else 
        gratif=sal*0.04; 
    };
  };
    
  return(gratif);
}; 

void main (void){ 
  float salario, totGratif; 
  int codigo, tempoServic; 
  totGratif=0;  
  printf("\n\ninsira o salario: "); 
  scanf("%f", &salario);
  do{ 
    printf("\nInsira o codigo do funcionario: "); 
    scanf("%i", &codigo); 
    printf("\nInsira o tempo de servico: "); 
    scanf("%i", &tempoServic); 
    while(codigo>=10)  
      codigo=codigo/10; 
    totGratif=totGratif + calcGratif(codigo,tempoServic,salario); 
    printf("\n gratificacao: %.2f", calcGratif(codigo,tempoServic,salario)); 
    printf("\n total de gratificacao: %.2f", totGratif); 
    printf("\n\ninsira o salario: "); 
    scanf("%f", &salario);
  } while (salario>0);

}



