#include <stdio.h> 
#include <string.h>
#include <conio.h>



int main (){ 
  int nums1 [200], nums2[200], result[400]; 
  int m1, n2; 
   
  
  int i=0, condition=1;
  while(condition==1){
    printf("\nnums1 [%i]: ", i); 
    scanf("%i", (&nums1[i]=='27'?break))
    if (&nums1[i]==27) {
      break;
    }
    //printf("\nkeep going? 1 yes 2 no");
    //scanf("%i", &condition);
    i++;
   
  }  
  printf("\ntamanho do primeiro array: "); 
  scanf("%i", &m1);
  condition=1;
  int j=0;
  while(condition==1){
    printf("\nnums2 [%i]: ", j); 
    scanf("%i", &nums2[j]);
    printf("\nkeep going? 1 yes 2 no");
    scanf("%i", &condition);
    j++;
  } 
  printf("\ntamanho do segundo array: "); 
  scanf("%i", &n2); 
  memcpy(result,nums1,m1*sizeof(int)); 
  memcpy(result+m1,nums2,n2* sizeof(int)); 

  int minimo, aux;
  for(int i=0;i<(m1+n2);i++)
    printf("\nresult[%i]: %i", i, result[i]);
  
   for (int i=0; i<(m1+n2);i++){
    minimo = i;
    // pega indice do menor
  for (int j=i+1;j<(m1+n2);j++){
    if ( result[j] < result[minimo] ){
      minimo = j;
    }
  }
    aux = result[minimo];
    result[minimo] = result[i];
    result[i] = aux;
  } 
  for(int i=0;i<(m1+n2);i++)
    printf("\nresult[%i]: %i", i, result[i]);
 

  return 0;
} 
/* 
int a[5] = { 1, 2, 3, 4, 5 };
int b[5] = { 6, 7, 8, 9, 10 };
int c[10];

/* Copia vetor 'a' para a primeira metade do vetor 'c' */
//memcpy( c, a, sizeof(a) );

/* Copia vetor 'b' para a segunda metade do vetor 'c' */
//memcpy( c + 5, b, sizeof(b) ); */