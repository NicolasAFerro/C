#include <stdio.h> 


int main(){ 
  char data[9]; 
  gets(data);
  char DD[3];
  char MM[3]; 
  char AA [3];
  DD[2]='\0'; 
  MM[2]='\0'; 
  AA[2]='\0';
  int i, cont=0;
  for (int i = 0; i < 2; i++){
    DD[i]=data[cont];
    cont++;
  }
  cont++;  
  for (int i = 0; i < 2; i++){
    MM[i]=data[cont];
    cont++;
  }
  cont++;
  for (int i = 0; i < 2; i++){
    AA[i]=data[cont];
    cont++;
  }
  printf("%s/%s/%s\n", MM,DD,AA);
  printf("%s/%s/%s\n",AA,MM,DD); 
  printf("%s-%s-%s", DD, MM, AA);
  

  return 0;
}