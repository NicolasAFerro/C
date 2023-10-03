#include <stdio.h> 
#include <stdlib.h> //Membros de stdlib.h pode ser classificado em: 
//conversão, memória,
// controle de processo, ordenamento e busca, matemática.

int main (){ 
  int repeticoes; 
  char valores[14];
  //valores[14]='\0';
  int intermediario;
  scanf("%i", &repeticoes); 
  for(int i=0;i<repeticoes;i++){  
    intermediario=0;
    //printf("\nentrada: ");
    scanf("%s",valores);  
    //conversão manualmente subtraindo o valor do caractere '0' do caractere char. Isso funciona porque os valores ASCII dos dígitos de '0' a '9' são consecutivos.    
    intermediario+=(valores[2]-'0')*10+(valores[3]-'0');     
    intermediario+=(valores[5]-'0')*100+(valores[6]-'0')*10+(valores[7]-'0');     
    intermediario+=(valores[11]-'0')*10+(valores[12]-'0'); 
    printf("\n%i", intermediario);
  };  
  return 0;
}
/* 
'0' (zero) tem um valor ASCII de 48.
'1' tem um valor ASCII de 49.
'2' tem um valor ASCII de 50.
'3' tem um valor ASCII de 51.
...
'9' tem um valor ASCII de 57.
subtrai o valor do caractere '0' (48) de um caractere '0' a '9',  obtém a diferença entre o valor ASCII do caractere e o valor ASCII de '0'. Essa diferença é exatamente igual ao valor numérico representado pelo caractere.

Por exemplo, se você tem o caractere '5', o valor ASCII dele é 53. Ao subtrair o valor de '0' (48), você obtém 53 - 48 = 5, que é o valor numérico que representa o caractere '5'.*/