Inicio 

	Matriz[0..4,0..11] de real:TabVendas; 
	inteiro: lin, col; 
	real: media1, media2; 
	media1<-0; 
	media2<-0; 
	
	Para lin de 0 até 4 faca 
		Para col de 0 ate 11 faca 
			leia(TabVendas[lin,col]); 
	Para lin de 0 ate 4 faca 
		inicio
		  para col de 0 ate 5 faca 
				media1<-media1+TabVendas[lin,col]; 
		  media1<-media1/ 6; 
		  escreva(media1); 
		  media1<-0;
		fim; 
	Para lin de 0 ate 4 faca 
		inicio
		  para col de 6 ate 11 faca 
				media2<-media2+TabVendas[lin,col]; 
		  media1<-media1/ 6; 
		  escreva(media2); 
		  media2<-0;
		fim
Fim