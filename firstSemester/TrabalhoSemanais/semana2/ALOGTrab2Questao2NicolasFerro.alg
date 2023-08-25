Inicio
    Real: receita, valorPgt; 
    inteiro: numPremiado, numCliente;   
    leia(receita, numPremiado, numCliente); 
    Se(numPremiado=numCliente)Entao 
      inicio
       valorPgt<-receita*0.7;
       escreva("1°premio", valorpgt);
      fim
    Senao 
       inicio 
       Se(numPremiado MOD 1000=numCliente MOD 1000)Entao 
         inicio
         valorPgt<-10000;
         escreva("2°premio", valorPgt); 
         fim
       Senao 
         inicio  
         Se(numPremiado MOD 100 = numCliente Mod 100)Entao 
           inicio 
           valorPgt<-250; 
           escreva("3°premio", valorPgt); 
           fim
         Senao 
            inicio
            Se(numPremiado mod 10 = numCliente mod 10) Entao 
              inicio 
              valorPgt<-50; 
              escreva("4° premio", valorPgt); 
              fim 
            Senao 
               escreva("O seu bilhete não foi premiado");
            fim
          fim  
        fim
Fim