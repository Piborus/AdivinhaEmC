
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int
main ()
{
  int numero;
 
  printf("\nBem-vindo ao mentalista, tente descobrir um numero de 1 a 1000.\n");
  
  srand(time(NULL));
  int advinha = rand () % 1000 + 1;

  
 int tentativa = 1; 
 while (tentativa <= 10){
    printf ("\nDigite um numero: ");
    scanf ("%d", &numero);
   
      if (numero > advinha){
        printf ("\nEsse numero é MAIOR, DIMINUA O NUMERO...");
	    getch();
	    
      }  else if (numero < advinha) {
        printf ("\nEsse numero é MENOR, AUMENTE O NUMERO ...");
	    getch();
	   
      } else if (numero == advinha) {
        printf ("\n\n\tVOCC ACERTOU O NUMERO :D!!!!!\n\t%d\n\t%d Tentativas\n", advinha, tentativa);
        printf("Iniciar nova operação(s/n): ");
        char resposta;
        scanf(" %c", &resposta);

    if (resposta == 's' || resposta == 'S') {
        system("clear"); // Limpar a tela no Linux/Mac (use "cls" no Windows)
        main();
    } else {
        printf("Encerrando operação.\n");
    }
        return 0;
        
      } 
      tentativa++;
 }  
    if (tentativa == 10) {
        printf("\n\n\tVOCÊ ERROU O NUMERO :(!!!!!\n\t%d\n\t%d Tentativas\n", advinha, tentativa);
    }

    printf("Iniciar nova operação(s/n): ");
    char resposta;
    scanf(" %c", &resposta);

    if (resposta == 's' || resposta == 'S') {
        system("clear"); // Limpar a tela no Linux/Mac (use "cls" no Windows)
        main();
    } else {
        printf("Encerrando operação.\n");
    }

    return 0;
}

