inicio 
    real: valorApl, taxa, somatorio, Juros;
    inteiro: qtdMeses, cont;
    leia(valorApl, qtdMeses, taxa);
    taxa<-taxa/100; 
    somatorio<-valorApl;
    para cont de 1 até qtdMeses faca 
        somatorio<-somatorio+(somatorio*taxa);
    Juros<-somatorio-valorApl; 
    escreva ("valor do juros", Juros);
fim