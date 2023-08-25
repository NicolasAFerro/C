
/*Construa um algoritmo que tenha como dado de entrada um número 
inteiro que representa um horário no formato hhmmss (hh-horas mm-minutos ss-segundos). 
Calcule e exiba a conversão do dado de entrada para segundos. Exemplo:
Entrada: 132253 Saída: 48173*/


#include <stdio.h> 

void main (void){ 
	int hour, TotSeconds, hh, mm, ss;
	printf("type you hour with the format hhmmss: "); 
	scanf("%i", &hour);  
	hh = hour / 10000;
	mm = (hour % 10000) / 100;
	ss = (hour % 10000) % 100;
	TotSeconds = (hh * 3600) + (mm * 60) + ss;
	printf("total seconds: %i", TotSeconds);
}

