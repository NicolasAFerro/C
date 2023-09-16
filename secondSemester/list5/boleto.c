/* 
Faça um programa que receba a linha digitável de um Boleto Bancário e 
extraia as informações referentes ao Banco e Valor do Boleto. 
O programa deve ser desenvolvido considerando a orientação abaixo e 
desprezando os caracteres separadores de valores, tais como “.” ou “, “ da linha 
digitável. Todas as orientações serão baseadas no seguinte exemplo de linha 
digitável:
34190.12345 12345.67890 12345.678901 1 12340000012345
O código que identifica o Banco é definido pelos três primeiros caracteres da 
linha digitável. Para identificar o banco referente ao código, utilize a tabela abaixo:
001 Banco do Brasil
033 Santander
104 Caixa Econômica Federal
341 Itaú
745 Citibank
O valor do boleto é definido nos últimos 10 caracteres da linha digitável. É 
importante lembrar que os centavos são definidos nos últimos 2 caracteres, e os 
demais definem o valor em reais. 
Considerar que seu programa está lendo apenas boletos já vencidos, portanto, 
deverá calcular o valor da multa, que é uma porcentagem fixa de 10%.
Ler várias linhas digitáveis e encerrar o programa quando o usuário digitar “FIM”.*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

 

void identificarBanco(int numbanco){
    switch(numbanco){
        case 001: printf("\nBanco do Brasil");
            break;
         case 033: printf("\nSantander");
            break;
         case 104: printf("\ncaixa Economica Federal");
            break;
         case 341: printf("\nItau");
            break;
         default:
            printf("\nBanco do Brasil");
            break;

    }
}

 

 

int main (){
    char banco[4];
    banco[3]= '\0';
    int numBanco;
    char boleto[60];
    char valorConta[11];
    printf("\ninsira a conta: "); 
    gets(boleto);

    while (strcmp(boleto,"FIM")!=0){
              
      strncpy(banco,boleto,3);
      numBanco=atoi(banco);
      identificarBanco(numBanco);

      int cont=10;
      int tamanho=strlen(boleto);
      for(int i=tamanho;i>=(tamanho-10);i--){
              valorConta[cont]=boleto[i];
              cont--;
      }

      float pagamento;
      pagamento=atof(valorConta);
      pagamento=pagamento*1.10;
      printf("\npagamento: %.2f", pagamento);
      printf("\ninsira a conta: "); 
      gets(boleto);
    }
    return 0;
}