#include <stdio.h>
#include <string.h>


char* funcao (char frase[], char fraseAuxiliar[]){
  
        for (int i=0;i<strlen(frase);i++){ 
            frase[i]=((frase[i]=='A'|| frase[i]=='a' || frase[i]=='e' ||frase[i]=='E' || frase[i]=='I' || frase[i]=='i' ||frase[i]=='O' || frase[i]=='o' || frase[i]=='U' || frase[i]=='u' || frase[i]==' ') ?frase[i]:'#');
        }
        /* printf("%s\n", frase); */ 
        char *p=&frase[strlen(frase)];
        int j;
        for(j=0;j<strlen(frase);j++) {
          --p;
          fraseAuxiliar[j]=*p;          
        }
        fraseAuxiliar[j]='\0';
        strcpy(frase,fraseAuxiliar);
        /* printf("%s\n", fraseAuxiliar);
        printf("%s", frase);  */
        return(frase);
}
int main(){
    // questão 1
    /*float valores[10], *p;
    p = &valores[0];// p = valores; aponta para o endereço da primeira posição do vetor valores;
    printf("%p %p\n", valores, p);
    p = valores;
    printf("%p %p\n", valores, p);
    p = &valores[1];
    printf("%x %p\n", p - valores, p);
    p = &valores[6];
    printf("%x %p\n", p - valores, p);*/
    /*(*p)=15;
    printf("%p", p);*/
 
    //A=Significa o endereço de memória da primeira posição do vetor;
    //B= o conteudo da variavel que p aponta será 15;
    //C= %x imprime um valor em inteiro em hexadecimal;
    // será o endereço da posição 6 menos o endereço da primeira posição, então tem 6 casas;
 
    //questão 2
     /*int n[] = {7, 8, 9};
     int *p;
     p = &n[0];
     p++;// aqui ele altera para onde está apontando o endereço, que é a posição n[1]=8
     printf("Valor: %d ", *p);
     (*p)++;// neste ele altera o conteudo da posição n[1] 7,9,9;
     printf("Valor: %d\n", *p);*/
 
 
     //QUESTÃO 3
    /*char texto[25], palavra[15], descr[11], *p1, *p2;
    strcpy(palavra, “xxxxxxx”);
    strcpy(texto, “Linguagem C”);
    scanf(“%s”, &palavra[3]);
    p1 = &texto[6];
    p2 = &descr[0];
    scanf(“%s”, p2); /* O usuário digita “goiaba” aqui
    strcpy(p1, “ de trapo”);
    // a = xxxBanana; 9 ; 6(conta banana a partir da posição 3);
    // B = goiaba;
    // c= pq o nome do vetor, já é o endereço da primeira posição;*/
 
    //QUESTÃO 4
 
    //e
 
    //QUESTÃO 5
 

    char frase[30];
    char fraseAuxiliar[30];
    printf("insira a frase\n");
    gets(frase);
    printf("%s", funcao(frase, fraseAuxiliar));
 
  

    return 0;


}

