inicio 
    inteiro: binario,soma, auxiliar, dobro;
    soma<-0; 
    dobro<-1;
    leia(binario); 
    enquanto binario>0 faca 
        inicio 
        auxiliar<-binario MOD 10;
        soma<-soma+(auxiliar*dobro);
        binario<-binario DIV 10; 
        dobro<-dobro*2;
        fim 
    escreva(soma);
fim