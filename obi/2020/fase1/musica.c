

/* #include <stdio.h> 

int main(){ 

  unsigned int numAmigos,numMusicas,musica;
  int cont=0;
  printf("entrada1");
  scanf("%d", &numAmigos); 
  printf("\nentrada2");
  scanf("%d", &numMusicas); 
  printf("\nentrada3"); 
  scanf("%d", &musica);
  unsigned int musicasFavoritas[1000000][2]; 
  for(int i=0;i<numAmigos;i++) 
    for(int j=0;j<2;j++){ 
      scanf("%d", &musicasFavoritas[i][j]);
  }
  int lin=0, condicao=0;
  while(lin<numAmigos){ 
    if(musicasFavoritas[lin][1]==musica){ 
      musica=musicasFavoritas[lin][0];
      cont++;
      lin=0;
    }else
      lin++;
    if(cont>=numAmigos){ 
      cont=-1; 
      break;
    }
  }
  printf("%i", cont);


} */
#include <stdio.h>

int main() {
    unsigned int numAmigos, numMusicas, musica;
    int cont = 0;

    // Read input values
    if (scanf("%u", &numAmigos) != 1) {
        printf("Error reading input for numAmigos\n");
        return 1;
    }

    if (scanf("%u", &numMusicas) != 1) {
        printf("Error reading input for numMusicas\n");
        return 1;
    }

    if (scanf("%u", &musica) != 1) {
        printf("Error reading input for musica\n");
        return 1;
    }

    unsigned int musicasFavoritas[1000000][2];

    // Read musicasFavoritas array
    for (unsigned int i = 0; i < numAmigos; i++)
        for (unsigned int j = 0; j < 2; j++)
            if (scanf("%u", &musicasFavoritas[i][j]) != 1) {
                printf("Error reading input for musicasFavoritas[%u][%u]\n", i, j);
                return 1;
            }

    int lin = 0;

    while (lin < numMusicas) {
        if (musicasFavoritas[lin][1] == musica) {
            musica = musicasFavoritas[lin][0];
            cont++;
            lin = 0;
        } else
            lin++;

        if (cont >= numAmigos) {
            cont = -1;
            break;
        }
    }

    printf("%i\n", cont);

    return 0;
}