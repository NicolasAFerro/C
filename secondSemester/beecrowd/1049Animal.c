#include <stdio.h> 
#include <string.h>


int main (){  

  char entry1[15];
  char entry2[15]; 
  char entry3[15]; 
  
  scanf("%s", entry1); 
  scanf("%s", entry2); 
  scanf("%s", entry3); 
  entry1[14]='\0';  
  entry2[14]='\0'; 
  entry3[14]='\0';
  if (strcmp(entry1,"vertebrado")==0){ 
    if(strcmp(entry2,"ave")==0){  
      if (strcmp(entry3,"carnivoro")==0) 
        printf("\naguia\n"); 
      else 
        printf("\npomba\n");  
    }
    else{  
      if(strcmp(entry2,"mamifero")==0){  
        if (strcmp(entry3,"onivoro")==0) 
          printf("\nhomem\n"); 
        else 
          printf("\nvaca\n"); 
      }
    }
  }
  else{  
    if(strcmp(entry2,"inseto")==0){  
      if (strcmp(entry3,"hematofago")==0) 
        printf("\npulga\n"); 
      else 
        printf("\nlagarta\n"); 
    }
    else{ 
      if(strcmp(entry2,"anelideo")==0){  
        if (strcmp(entry3,"hematofago")==0) 
          printf("\nsanguessuga\n"); 
        else 
          printf("\nminhoca\n");
      }   
    }
  }
     
  

  
    

  return 0;
}