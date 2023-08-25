  #include <stdio.h>
  #include <string.h> 
  
  
  void main (void){ 
	char sex; 
	float height, idealWeight; 
	printf("insert the height:  "); 
	scanf("%f", &height); 
	printf("insert your sex  "); 
	scanf(" %c", &sex);
	if (sex == 'M' || sex == 'm')
		idealWeight = (72.7 * height) - 58;
	else 
		idealWeight = (62.1 * height) - 44.7;
	printf("ideal Weight:  %.2f", idealWeight);  
  
  }
  
  
  
  
  
  
  
 
 