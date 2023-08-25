/*Um determinado material radioativo perde metade de sua massa a cada 50 segundos. 
Dada a massa inicial em quilogramas construa um algoritmo que calcule e exiba o tempo 
necessário para que respectiva massa fique inferior a 0,5 gramas. 
O tempo deve ser exibido no formato mmss (mm-minutos, ss – segundos).*/ 


#include <stdio.h> 

void main (void){ 
	int time=0, mm, ss; 
	float mass;
	printf("enter the mass: "); 
	scanf("%f", &mass); 
	while (mass>0.5){ 
		time=time+50;
		mass = mass/2; 	
	}; 
	mm= time/60; 
	ss= time%60; 
	printf("\nspent time: %imm %iss", mm, ss);
}