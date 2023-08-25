/*Construa um algoritmo que leia o peso de uma pessoa na Terra e o número de
 identificação do planeta e em seguida calcule e exiba o valor do peso desta 
 pessoa neste planeta. A relação de planetas é dada a seguir juntamente com 
 o valor das gravidades relativas à Terra:
Planeta                Gravidade relativa em relação ao planeta Terra
1 – Mercúrio                                    37 %
2 – Vênus                                        88 %
3 – Marte                                       38 %
4 – Júpiter                                      264 %
5 – Saturno                                       115 %
6 - Urano                                         117 %
Exemplo:
Entrada: 63.5 Saída: 73.02
          5 

*/
#include <stdio.h>
float planet (int inicial, float weight){ 
  if (inicial ==1) 
    weight=weight*0.37; 
  else 
    if(inicial==2)
      weight=weight*0.88;
      else
        if(inicial==3)
          weight=weight*0.38;
        else
          if(inicial==4)
            weight=weight*2.64;
          else 
            if(inicial==5)
              weight=weight*1.15;
            else 
              weight=weight*1.17;
  return(weight);
};
void main(void){ 
  float weight; 
  int code;
  printf("\nenter your earth weight: ");
  scanf("%f", &weight);
  printf("\n enter the planet code: ");
  printf("\n 1  Mercurio ");                                   
  printf("\n 2  Venus");                                        
  printf("\n 3  Marte ");                                       
  printf("\n 4  Jupiter") ;                                     
  printf("\n 5  Saturno");                                       
  printf("\n 6  Urano: ");
  scanf(" %i", &code);
  printf("\n new weight: %.2f",planet(code, weight) );

}