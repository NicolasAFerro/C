#include <stdio.h>
#include <string.h>

int main() {
    int testes;
    char placa[8];
    int validade = 1;

    scanf("%i", &testes);

    for (int i = 1; i <= testes; i++) {
        scanf("%s", placa);
        validade = 1; // Reinicialize a variável validade a cada iteração

        for (int j = 0; j < 3; j++) {
            if (placa[j] < 'A' || placa[j] > 'Z') {
                validade = 0;
                break; 
            }
        }

        if (strlen(placa) != 8 || !validade) {
            printf("FAILURE\n");
        } else {
            switch (placa[7]) {
                case '1':
                case '2':
                    printf("MONDAY\n");
                    break;
                case '3':
                case '4':
                    printf("TUESDAY\n");
                    break;
                case '5':
                case '6':
                    printf("WEDNESDAY\n");
                    break;
                case '7':
                case '8':
                    printf("THURSDAY\n");
                    break;
                default:
                    printf("FRIDAY\n");
                    break;
            }
        }
    }

    return 0;
}