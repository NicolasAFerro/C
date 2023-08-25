inicio  
    real: consumo, totResidencial, totComercial, totIndustria, pgt;
    inteiro: totAmarelo, totVermelho; 
    caracter: instalacao, faixa; 
    totResidencial<-0;
    totComercial<-0;
    totIndustria<-0; 
    totAmarelo<-0; 
    totVermelho<-0; 
    leia(consumo, instalacao, faixa); 
        faca 
            inicio        
            Se (instalacao="R" ou instalacao = "r") entao  
               inicio
               Se(consumo <=500) entao 
                 pgt<-0.4*consumo; 
               Senao 
                 pgt<-0.55*consumo;
               Se(faixa="v" ou faixa="V") entao 
                 inicio
                 pgt<-pgt*1.2; 
                 totVermelho<-totVermelho+1;
                 fim
               Senao 
                 totAmarelo<-totAmarelo +1;
               totResidencial<-totResidencial+pgt;
               fim
            Senao 
               Se(instalacao="c" ou instalacao ="C") entao
                 inicio
                 Se(consumo<= 1000) entao 
                    pgt<-0.6*consumo; 
                 Senao
                    pgt<-0.7*consumo; 
                 Se(faixa="v" ou faixa="V") entao 
                    inicio
                    pgt<-pgt*1.2; 
                    totVermelho<-totVermelho+1;
                    fim    
                 Senao 
                    totAmarelo<-totAmarelo +1; 
                 totComercial<-totComercial+pgt;
                 fim
               Senao
                 Se(instalacao="i" ou instalacao= "I") entao 
                    inicio
                    se (consumo<=5000) entao 
                      pgt<-0.65*consumo; 
                    Senao 
                      pgt<-0.85*consumo; 
                    Se(faixa="v" ou faixa="V") entao 
                      inicio
                      pgt<-pgt*1.2; 
                      totVermelho<-totVermelho+1;
                      fim  
                    Senao 
                      totAmarelo<-totAmarelo +1;
                    totIndustria<-totIndustria+pgt;
                    fim           
        leia(consumo, instalacao, faixa);
           fim
    enquanto (consumo>0);
    escreva(totResidencial,totComercial, totIndustria, totAmarelo, totVermelho); 
fim