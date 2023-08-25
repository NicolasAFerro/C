/*Construa um algoritmo que faça a criação e a entrada de dados para a matriz definida acima.
 Em seguida calcule e exiba a somatória dos valores armazenados dos elementos representados pela cor cinza.*/
 
 #include <stdio.h> 
 
 void main (void){ 
	float tabNum [14][14]; 
	float sum=0;
	int lin, col;
	
	for ( lin=0; lin<13;lin++) 
		for(col =0; col<13;col++) {
			printf("enter your number"); 
			scanf("%f", &tabNum[lin][col]);
		}; 
	for ( lin=4; lin=9;lin++) 
		for(col =0; col<14;col++){ 
		sum=sum+tabNum[lin][col];
			
	}; 
	for ( lin=0; lin=3;lin++) 
		for(col =4; col=9;col++){ 
		sum=sum+tabNum [lin][col];			
	}; 
	for ( lin=10; lin=13;lin++) 
		for(col =4; col=9;col++){ 
		sum=sum+tabNum[lin][col];
	}
	printf("sum: %f", sum);
 
 }