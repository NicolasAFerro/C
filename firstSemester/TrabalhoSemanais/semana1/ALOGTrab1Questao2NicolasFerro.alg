Inicio 
    Real:valorVenda,volume, precoBase;
    Caracter:produto,composicao;  
    Leia(produto,composicao,volume); 
    Se(produto="A" OU produto="a")Entao        
      Inicio 
      precoBase<-34;
      Se(composicao="f" ou composicao="F")Entao 
        valorVenda<-precoBase*volume; 
      Senao
        inicio
        Se(composicao="M" ou composicao="m")Entao 
           inicio 
            precoBase<-precoBase*1.15;
            valorVenda<-precoBase*volume;
           fim
        Senao
          inicio 
            precoBase<-precoBase*1.25; 
            valorVenda<-precoBase*volume;
          fim         
        fim
      Fim
     Se(produto="p" OU produto="P")Entao        
      Inicio 
      precoBase<-42.5;
      Se(composicao="f" ou composicao="F")Entao 
        valorVenda<-precoBase*volume; 
      Senao
        inicio  
        Se(composicao="M" ou composicao="m")Entao
          inicio 
            precoBase<-precoBase*1.15;
            valorVenda<-precoBase*volume;
           fim
        Senao 
            inicio 
            precoBase<-precoBase*1.25; 
            valorVenda<-precoBase*volume;
          fim      
        fim 
      Fim
     Se(produto="b" OU produto="B")Entao        
      Inicio 
      precoBase<-28;
      Se(composicao="f" ou composicao="F")Entao 
        valorVenda<-precoBase*volume; 
      Senao
        inicio
        Se(composicao="M" ou composicao="m")Entao 
           inicio 
            precoBase<-precoBase*1.15;
            valorVenda<-precoBase*volume;
           fim
        Senao 
          inicio 
           precoBase<-precoBase*1.25; 
           valorVenda<-precoBase*volume;
          fim      
        fim
      Fim
     Se(produto="S" OU produto="s")Entao        
      Inicio 
      precoBase<-27;
      Se(composicao="f" ou composicao="F")Entao 
        valorVenda<-precoBase*volume; 
      Senao 
        inicio
        Se(composicao="M" ou composicao="m")Entao 
           inicio 
            precoBase<-precoBase*1.15;
            valorVenda<-precoBase*volume;
           fim
        Senao 
          inicio 
            precoBase<-precoBase*1.25; 
            valorVenda<-precoBase*volume;
          fim      
        fim
      Fim 
    Se(valorVenda<750)Entao 
        valorVenda<-valorVenda+45; 
    Escreva(precoBase,valorVenda);
Fim