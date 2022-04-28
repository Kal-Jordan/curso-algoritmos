#include <stdio.h>


int main()
{

      int N, x, i;

      printf("Quantos numeros voce vai digitar? ");
      scanf("%d", &N);
      printf("Digite um numero: ");
      scanf("%d", &x);

      for (i = 0; i < N; i++) {
           if (x == 0) {
               printf("NULO\n");
           }
           else if (x < 0 && x % 2 != 0) {
               printf("IMPAR NEGATIVO\n");
           }
           else if (x < 0 && x % 2 == 0) {
               printf("PAR NEGATIVO\n");
           }
           else if (x > 0 && x % 2 != 0) {
               printf("IMPAR POSITIVO\n");
           }
           else { "PAR POSITIVO"; }

           printf("Digite um numero: ");
           scanf("%d", &x);
      }


    return 0;
}
