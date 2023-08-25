Inicio 
    Real: valorFinal, precoUnit; 
    Caracter: codigo; 
    inteiro: QtdUnidades; 
    Leia(QtdUnidades,precoUnit,codigo); 
    Se(codigo="1")Entao 
       valorFinal<-(precoUnit*0.9)*QtdUnidades; 
    Senao 
      inicio
      Se(codigo="2") Entao 
         valorFinal<-(precoUnit*0.95)*QtdUnidades;  
      Senao 
        inicio
        Se(codigo="3")Entao 
          valorFinal<-(precoUnit*1.05)*QtdUnidades; 
        Senao
          valorFinal<-(precoUnit*1.1)*QtdUnidades;  
        fim
    fim
Escreva(valorFinal);
Fim