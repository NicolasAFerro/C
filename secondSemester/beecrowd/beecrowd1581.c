#include <stdio.h>
#include <string.h>

int main() {
    int numTestes;
    int pessoas;
    char idioma[100][21];
    char resultado[21];

   
    scanf("%d", &numTestes);

    for (int i = 0; i < numTestes; i++) {
       
        scanf("%d", &pessoas);

        /*if (pessoas > 100 || pessoas < 2) {
          scanf("%d", &pessoas);
        }*/
        
          if (pessoas == 2) {
              scanf("%s", idioma[0]);
              scanf("%s", idioma[1]);

              if (strcmp(idioma[0], idioma[1]) == 0) {
                  strcpy(resultado, idioma[0]);
              } else {
                  strcpy(resultado, "ingles");
              }
        } 
        else {
            for (int k = 0; k < pessoas; k++) {
                scanf("%s", idioma[k]);
            }
            // comparamos se são diferentes os idiomas; sendo diferentes, atribuimos um bool a idiomasdiferentes; 
            // se eles forem iguais sempre será 0;
            int idiomasDiferentes = 0;
            for (int k = 1; k < pessoas; k++) {
                if (strcmp(idioma[k], idioma[k - 1]) != 0) {
                    idiomasDiferentes = 1;
                    break;
                }
            }
            // aqui se verdadeiro (1)(não são iguais !=0) é ingles, se não é tudo igual, não tem problema atribuir o primeiro resultado;
            if (idiomasDiferentes) {
                strcpy(resultado, "ingles");
            } else {
                strcpy(resultado, idioma[0]);
            }
        }
      printf("\n%s", resultado); 
  }  
    return 0;
}
