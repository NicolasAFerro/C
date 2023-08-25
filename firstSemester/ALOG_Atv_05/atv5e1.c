/*Construa um algoritmo que construa uma matriz para armazenar as leituras IUV (Intensidade Ultra Violeta)
 mensais no período de um ano de uma determinada região. Em seguida calcule exiba:
• A média das leituras
• A maior leitura
• A menor leitura
Meses 
1    2   3    4   5    6   7   8    9   10  11  12
7,8 8,2 10,0 5,4 6,5 7,35 8,5 9,5 13,2 9,8 4,5 6,3*/ 
#include <stdio.h>

void main (void){ 
	float tabUVreading [12]; 
	float average=0, lowestRead, highestRead;
	int lin;
	printf("Enter the UV reading for 1: ");
    scanf("%f", &tabUVreading[0]);
    lowestRead = tabUVreading[0];
    highestRead = tabUVreading[0];
	
	for (lin=1; lin<12; lin++) { 
		printf("enter de UV reading: %i", lin +1); 
		scanf("%f", &tabUVreading [lin]);
		average=average+ tabUVreading[lin];
		if(tabUVreading[lin]<lowestRead)
			lowestRead=tabUVreading[lin]; 
		if (tabUVreading[lin]>highestRead) 
			highestRead=tabUVreading[lin];		
	}
	average=average/lin; 
	printf("\naverage reading: %.2f", average); 
	printf("\n highest reading: %.2f", highestRead); 
	printf("\nlowest reading: %.2f", lowestRead);

}