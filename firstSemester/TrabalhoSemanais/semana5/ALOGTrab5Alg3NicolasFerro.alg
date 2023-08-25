Funcao CalcDifHor(menorHor: inteiro, maiorHor: inteiro):Inteiro
	Inicio
		inteiro: menorHorMin, maiorHorMin, diferenca; 
		
		maiorHorMin<-(menorHor div 100)*60 + (menorHor mod 100); 
		maiorHorMin <- (maiorHor div 100)*60 + (maiorHor mod 100); 
		diferenca<- maiorHorMin-menorHorMin; 
		retorna(diferenca); 
	Fim
Inicio
	inteiro: placa, entrada, saida; 
	real: faturamento; 
	leia(placa); 
	faca 
	  inicio 
		leia(entrada, saida); 
		escreva(calcDifHor(entrada, saida)); 
		faturamento<-(calcDifHor(entrada, saida) div 15); 
		escreva(faturamento); 
		leia(placa); 
	  fim
	Enquanto placa>0;  
Fim
		







