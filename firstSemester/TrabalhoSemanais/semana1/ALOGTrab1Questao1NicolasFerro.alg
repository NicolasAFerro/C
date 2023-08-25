Inicio 
    Real:valorVenda,volume, precoBase;
    Caracter:produto,composicao;  
    Leia(produto,volume,composicao); 
    Se(produto="A" OU produto="a")Entao        
      Inicio 
      precoBase<-34;
      Se(composicao="f" ou composicao="F")Entao 
        valorVenda<-precoBase*volume; 
      Se(composicao="M" ou composicao="m")Entao 
        valorVenda<-(precoBase*1.15)*volume;
      Senao 
        valorVenda<-(precoBase*1.25)*volume; 
      Fim
     Se(produto="p" OU produto="P")Entao        
      Inicio 
      precoBase<-42.5;
      Se(composicao="f" ou composicao="F")Entao 
        valorVenda<-precoBase*volume; 
      Se(composicao="M" ou composicao="m")Entao 
        valorVenda<-(precoBase*1.15)*volume;
      Senao 
        valorVenda<-(precoBase*1.25)*volume; 
      Fim
     Se(produto="b" OU produto="B")Entao        
      Inicio 
      precoBase<-28;
      Se(composicao="f" ou composicao="F")Entao 
        valorVenda<-precoBase*volume; 
      Se(composicao="M" ou composicao="m")Entao 
        valorVenda<-(precoBase*1.15)*volume;
      Senao 
        valorVenda<-(precoBase*1.25)*volume; 
      Fim
     Se(produto="S" OU produto="s")Entao        
      Inicio 
      precoBase<-27;
      Se(composicao="f" ou composicao="F")Entao 
        valorVenda<-precoBase*volume; 
      Se(composicao="M" ou composicao="m")Entao 
        valorVenda<-(precoBase*1.15)*volume;
      Senao 
        valorVenda<-(precoBase*1.25)*volume; 
      Fim 
    Se(valorVenda<750)Entao 
        valorVenda<-valorVenda+45; 
    Escreva(valorVenda);
Fim