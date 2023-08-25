/*Construa um algoritmo que tenha como entrada de dados as leituras pluviométricas semanais de uma determinada região.
 Ao final exiba: (3,0)
− Média das leituras
− Maior leitura obtida
− Menor leitura obtida
Considere que o processo de leitura é finalizado quando for informado o valor 0 (zero) para leitura.*/

#include <stdio.h> 

void main (void){ 
	float pluiometricRead, averageRead=0,highestRead=0,lowestRead, totRead=0; 
    printf("\nenter the pluviometric reading: ");
	scanf("%f", &pluiometricRead);
    lowestRead=pluiometricRead;
    do{  
    averageRead=averageRead+pluiometricRead;  
    totRead=totRead+1;
    if(pluiometricRead>highestRead)  
        highestRead=pluiometricRead; 
    else 
        if(pluiometricRead<lowestRead) 
			lowestRead=pluiometricRead ;
    printf("\nenter the pluviometric reading: ");
	scanf("%f", &pluiometricRead);
	}
    while (pluiometricRead>0); 
    averageRead=averageRead/totRead; 
    printf("\naverage Reading:  %.2f", averageRead); 
	printf("\nhighest Reading:  %.2f", highestRead); 
	printf("\nlowest reading:  %.2f", lowestRead);
}