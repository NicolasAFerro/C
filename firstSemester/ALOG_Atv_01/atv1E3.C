
/*Construa um algoritmo que tenha como entrada de dados a quantidade de alunos do 
sexo masculino e a quantidade de alunos do sexo feminino de uma turma.
 Em seguida calcule e exiba a porcentagem de alunos pertencente a cada um destes
 dois grupos dentro da turma. Exemplo:
Entrada: 25 Saída: 62,5
         15        37,5*/
		 
		 
#include<stdio.h> 

void main (void){  
	float percMale, percFemale, maleStudent, femaleStudent ;
	printf("enter the number of male students");
	scanf("%f",&maleStudent);
	printf ("\n enter the number of female students"); 
	scanf("%f", &femaleStudent); 
	percMale = maleStudent/(maleStudent+femaleStudent)*100; 
	percFemale = femaleStudent/(maleStudent+femaleStudent)*100; 
	printf("\npercentage of male students: %.2f", percMale); 
	printf("\npercentage of female students: %.2f", percFemale);
}

// even if my result is declared as Float, if my entry variables are int the result will be 00. 
// the entry variables must be Float

