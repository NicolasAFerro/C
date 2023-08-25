/*cálculo do frete para a remessa de uma mercadoria obedece às seguintes especificações:
• entregas por via aérea: a tarifa básica é de R$ 10,50 por kg, adicionando na tarifa básica R$ 2,50
 para cada quilo excedente quando o peso da entrega for superior a 25 kg.
• entregas por via terrestre: o cálculo do frete é feito a partir da tabela abaixo:
	distancia até o 					tarifa básica
	destino da entrega					por quilo 
		inferior a 50km 					3.5
		de 50 até 150 						4.5
		acima de 150  						6

Construa um algoritmo que calcule e exiba o valor do frete de uma determinada mercadoria. */

#include <stdio.h> 
 
void main (void){ 
	char routeType;
    int distance;
    float productWeight, shipping;
	printf("insert the route type"); 
	printf("\n<A>-- AIRWAY"); 
	printf("\n<T>-- LANDWAY"); 
	scanf(" %c", &routeType); 

	if (routeType == 'A' || routeType == 'a')
		if (productWeight <=25) 
			shipping = productWeight * 10.5;
		else 
			shipping = productWeight * 10.5 + (productWeight - 25) * 2.5;
	else{ 
		printf("insert the distance"); 
		scanf("%i", &distance);
		if (distance < 50 )
			shipping = productWeight * 3.5;
		else
			if (distance <= 150 )
				shipping = productWeight * 4.5;
			else
				shipping = productWeight * 6;
	
	};
}








