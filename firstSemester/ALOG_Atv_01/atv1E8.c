/*Construa um algoritmo que leia o horário de entrada (hhmm) e o horário de saída (hhmm) 
 de um empregado e exiba quanto tempo, no formato hhmm, o empregado ficou na empresa.  
 Exemplo:
Entrada: 810 Saída: 620
        1430*/ 


#include <stdio.h> 

void main (void){ 
  int HorarioEnt, HorarioSai, TempEmpresa, hhEnt, mmEnt, hhSai, mmSai, TotMin;
  printf("insert the entry time with format <hhmm>   "); 
  scanf("%i", &HorarioEnt);
  printf("insert the departure time <hhmm>   "); 
  scanf("%i", &HorarioSai); 
  hhEnt = HorarioEnt / 100;
  mmEnt = HorarioEnt % 100;
  hhSai = HorarioSai / 100;
  mmSai = HorarioSai % 100;
  TotMin = (hhSai * 60 + mmSai) - (hhEnt * 60 + mmEnt);
  TempEmpresa = (TotMin / 60 * 100) + (TotMin % 60);
  printf("permanency: %i",TempEmpresa);

}