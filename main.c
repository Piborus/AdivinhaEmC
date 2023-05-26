
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero;

    printf("\nBem-vindo ao mentalista! Tente adivinhar um número de 1 a 1000.\n");

    srand(time(NULL));
    int advinha = rand() % 1000 + 1;
    printf("Número aleatório foi gerado: %d\n", advinha);

    int tentativa = 1;
    while (tentativa <= 10) {
        printf("\nDigite um número: ");
        scanf("%d", &numero);

        if (numero > advinha) {
            printf("Esse número é MAIOR. Diminua o número...\n");
        } else if (numero < advinha) {
            printf("Esse número é MENOR. Aumente o número...\n");
        } else {
            printf("\n\n\tVOCÊ ACERTOU O NÚMERO :D!!!!!\n\t%d\n\t%d Tentativas\n", advinha, tentativa);

            printf("Iniciar nova operação (s/n): ");
            char resposta;
            scanf(" %c", &resposta);

            if (resposta == 's' || resposta == 'S') {
                system("clear"); 
                main();
            } else {
                printf("Encerrando operação.\n");
                break;
            }
            return 0;
        }

        printf("Tentativa: %d de 10\n", tentativa);
        tentativa++;
    }

    printf("\n\n\tVOCÊ ERROU O NÚMERO :(!!!!!\n\tNumero correto: %d\n\tNúmero de tentativas: %d\n", advinha, tentativa - 1);

    printf("Iniciar nova operação (s/n): ");
    char resposta;
    scanf(" %c", &resposta);

    if (resposta == 's' || resposta == 'S') {
        system("clear"); 
        main();
    } else {
        printf("Encerrando operação.\n");
    }

    return 0;
}
