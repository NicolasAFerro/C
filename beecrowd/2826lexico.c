#include <stdio.h> 
#include <string.h> 

int main (){ 
  char entry1[21]; 
  char entry2[21];
  scanf("%s", entry1); 
  scanf("%s", entry2); 
  //for (int i = 0; i<(strlen(entry1)||strlen(entry2)); i++)
  //{ 
    if(strlen(entry1)!=strlen(entry2)){
      for(int j=0;j<21  ; j++){ 
        if (entry1[j]!=entry2[j]){ 
          if (entry1[j]<entry2[j]){ 
            printf("%s\n", entry1);
            printf("%s\n", entry2); 
          }
          else{ 
            printf("%s\n", entry2);
            printf("%s\n", entry1);
          }
          
           break;
        } 
      } 
         
    }
    else{  
      for (int i = 0; i<(strlen(entry1)||strlen(entry2)); i++){
        if(entry1[i]==entry2[i]){ 
        } 
        else{ 
          if(entry1[i]<entry2[i]){
            printf("%s\n", entry1);
            printf("%s\n", entry2);
          } 
          else{  
            printf("%s\n", entry2);
            printf("%s\n", entry1);        
          }
        }

    }   


      } 
    

      
      
      
      
       
    
    


  //}
  

  return 0;
}