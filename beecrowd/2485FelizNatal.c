#include <stdio.h> 

char A(int num) {
    char result = 'a'; 
    for (int i = 1; i <= num; i++) {
        printf("%c", result);
    }
    return result; 
}

int main() {
    int num;
    scanf("%i", &num);
    printf("feliz nat");
    char result = A(num); 
    printf("%c", result); 
    printf("l\n");
    return 0;
}





