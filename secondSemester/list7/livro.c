#include <stdio.h>

struct Livro
{
   int ano;
   char titulo[100];
   char autor[100];
   int nVolume; // Número de exemplares de um dado livro.
   float preco;
};

struct Livraria
{
   struct Livro V[100]; // Armazena a informação de n livros !!
   int nLivros; // Número de livros existentes na livraria.
};

struct Livro preencheLivro()
{
   struct Livro l;

   printf("Informe o titulo do livro: ");
   //gets(l.titulo);
   scanf("%s",l.titulo);

   printf("Informe o autor do livro: ");
   //gets(l.autor);
   scanf("%s",&l.autor);

   printf("Informe o ano do livro:");
   scanf("%i",&l.ano);

   printf("Informe o volume do livro:");
   scanf("%i",&l.nVolume);

   printf("Informe o preco do livro:");
   scanf("%f",&l.preco);

   return l;

}

void preencheLivraria(struct Livraria *liv, int numLivros)
{

   int i;

   liv->nLivros = numLivros;

   for (i=0;i<numLivros;i++)
   {
      // *(v+i) ou v[i]
      //*(liv->V+i)=preencheLivro();
      liv->V[i]=preencheLivro();
   }

}

void visualizaLivros(struct Livraria *l)
{
   int i;
   printf("\nLivro               ");
   printf("Autor               ");
   printf("Ano ");
   printf("Preco\n");

   for (i=0;i<l->nLivros;i++)
   {
      printf("\n%-20s %-20s %i %.2f",(l->V+i)->titulo,
                               l->V[i].autor,
                               l->V[i].ano,
                               l->V[i].preco);
   }

}

float valorLivraria(struct Livraria *l)
{
   float soma=0;
   int i;
   for (i=0;i<l->nLivros;i++)
   {
      soma=soma+l->V[i].preco*(l->V[i].nVolume);
   }
   return soma;

}

int main()
{
   int qtlivros;
   struct Livraria livraria;

   printf("Informe a quantidade de livros");
   //visualizaLivros();
   scanf("%i",&qtlivros);

   preencheLivraria(&livraria, qtlivros);
   // chamar aqui função para mostrar todos os livros
   visualizaLivros(&livraria);

   // chamar aqui função que RETORNE o custo da Livraria (soma dos valores dos livros)
   //  e exiba em tela.
   printf("\n Custo total da Livraria: %.2f",valorLivraria(&livraria));
   return 0;

}
