#include <stdio.h> 
#include <string.h>


int main(){ 

  char word1[100]; 
  char word2[100]; 
  int cont1[26]; 
  int cont2[26]; 
   for (int i=0; i<26; i++) {
    cont1[i] = 0;
    cont2[i] = 0;
  }
  //printf("\npalavra1: ");
  //scanf("%s", word1);
  //printf("\npalavra2: ");
  //scanf("%s", word2);
    scanf("%s%s", word1, word2);
  
  int i = 0;
  while (word1[i] != '\0') {
    cont1[(unsigned) word1[i] - (unsigned) 'a']++;
    if (word2[i] != '*')
      cont2[(unsigned) word2[i] - (unsigned) 'a']++;
    i++;
  }
  for(int o=0;o<26;o++){ 
    printf("\ncont1[%i]:%i ",o, cont1[o]); 
    printf("\ncont2[%i]:%i ",o, cont2[o]);
  }
  char result = 'S';
  for (int i=0; i<26; i++) {
    if (cont2[i] >  cont1[i]) {
      result = 'N';
      break;
    }
  }
  printf("%c\n",result);
     

     return 0; 
  }
    



    


 
