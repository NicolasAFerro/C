Inicio 
	Matriz[0..99] de real: TabNum; 
	Matriz[0..49] de real: TabProduto; 
	real: somatorio; 
	inteiro: cont, decremento; 
	somatorio<-0; 
	decremento<-99
	
	Para cont de 0 ate 99 faca 
		Leia(TabNum[cont]); 
		
	Para cont de 0 ate 49 faca 
		inicio 
		  TabProduto[cont]<-TabNum[decremento]*TabNum[cont]; 
		  somatorio<-somatorio+TabProduto[cont]; 
		  escreva(TabProduto[cont]); 
		  decremento<-decremento-1; 
		Fim 
	escreva(somatorio);
Fim