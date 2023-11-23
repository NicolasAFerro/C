#include <stdio.h> 
#include <string.h>


typedef struct{ 
  char nome[50]; 
  float salario; 
  int situacaoRegistro;

}Pessoa;

char procura(char *s, char ch){
 while (*s != ch && *s != '\0')
 s++;
 
 if (*s != '\0') 
 return *s;
 else
 return '\0';
}
int main(){ 
/*   1) Seja a seguinte sequência de instruções em um programa em C:
int *pti;
int i=10;
pti = &i
Qual afirmativa é falsa?
a) pti armazena o endereço de i
b) *pti é igual a 10
c) ao se exercutar *pti=20, i passará a ter o valor 20
d) pti é igual a 10 */
//resposta C 

/* 2) Assumindo que o endereço da variável x foi atribuído a um ponteiro px, escreva uma 
expressão que não usa x e divida x por 5 */ 
/* int x=10; 
int *px=&x; 
*px=*px/5; 
printf("%i", *px) */ 

//######DUVIDA###3
/* 3) Suponha que v é um vetor declarado assim: int v[]={1,2,3,4,5}.
a) Coloque V ou F e justifique: 
#v++; verdadeiro, o vetor aponta para 2?
#v+1; falso, esse comando não está indo a lugar algum;
p=v; Verdadeiro de p for ponteiro,
v=p; Falso, está atribuindo um valor ao vetor
b) O que retorna? 
*v+5; o conteudo da posição v[0] agora é 6;
*(v+5); da erro, pois tenta acessar posição de memória além dos limites do vetor */


/* Dadas as declarações abaixo; qual é o valor dos itens:
int x=10, *px=&x;
float y=5.9, *py=&y;
 X y px py
 FFA0 FFB4 FFF0 FFA5
a) X =10 b)*py =5.9 c) px =ffa0 
d) &y=ffb4 e) *px =10 f) y = 5.9
g) py=ffb4 h) &x =ffa0
  return 0; */


//5) Chame a função abaixo no main 
/* char frase[]="todo elefante tem tromba"; 
char procurado = 's';
char resposta=procura(frase,procurado);// isso aqui?
printf("%c", resposta); */ 


/* 6) Assumindo que M1[] é um vetor do tipo int, quais das seguintes expressões referenciam o 
valor (conteúdo) do terceiro elemento de M1? 
a) *(M1 + 2) b) *(M1 + 4) c) M1 + 4 d) M1 + 2 */ 
//Resposta A 


//#####DUVIDA#####
/* 7) Defina em C um novo tipo denominado Pessoa que contenha as seguintes 
características: 
Nome, Idade, Salário e um indicador que mostre se o registro está cancelado ou não. */
Pessoa novoUsuario; 
strcpy(novoUsuario.nome,"ana");
//novoUsuario.nome="ana"; 
printf("\nqual o nome?"); gets(novoUsuario.nome);
novoUsuario.salario=1000.00; 
novoUsuario.situacaoRegistro=0;
printf("\nnome: %s", novoUsuario.nome);
printf("\n salario %f", novoUsuario.salario); 
printf("\n%s", (novoUsuario.situacaoRegistro==0?"Cancelado":"Ativo"));
return 0;


/* 8) typedef struct DATA1 
{ 
 int dia, mês, ano; 
} data; 
Qual declaração de variável abaixo está correta? 
struct DATA1 dtnasc; 
data dtnasc */ 
// a segunda opção está correta.
}