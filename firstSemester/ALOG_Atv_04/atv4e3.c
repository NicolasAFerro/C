/* Uma loja utiliza o código V para compras à vista e o código P para compras a prazo. 
Faça um algoritmo que receba o código e o valor da compra para 15 produtos. Calcule e mostre:
 • O valor total das compras à vista 
 • O valor total das compras a prazo 
 • O valor total das compras efetuadas*/ 
 #include <stdio.h>
 
 void main (void){ 
	float totalSales=0, debitPay=0, creditPay=0, payValue; 
	char payType; 
	for (int i=0; i<15; i++){ 
		printf("\ninsert the payment type"); 
		printf("\n<D> DEBIT"); 
		printf("\n<C> CREDIT: "); 
		scanf(" %c", &payType); 
		printf("\ninsert the payment value"); 
		scanf("%f", &payValue);
		if (payType=='D' || payType=='d') 
			debitPay=debitPay+payValue;
		else
			creditPay=creditPay+payValue; 
		totalSales=totalSales+payValue;	
	}
	printf("\ndebit payment: %.2f", debitPay); 
	printf("\n credit payment: %.2f", creditPay); 
	printf("\n total sales: %.2f", totalSales); 
 
 }