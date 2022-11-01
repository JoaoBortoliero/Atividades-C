#include <stdio.h>

void main() {
    
int divisor; 
double dividendo;
double result = 0;

    printf("Digite o dividendo: ");
    scanf("%lf", &dividendo);
    printf("Digite o divisor: ");
    scanf("%d", &divisor);

        if ((dividendo <= 10 && dividendo >= 0) && (divisor <= 10 && divisor >= 0)){
            result = dividendo / divisor;
            printf("--------------------------------\n");
            printf("Resulado da divisão: %.1lf.\n", result);
            printf("--------------------------------\n");
        } else {
            printf("--------------------------------\n");
            printf("Dados inválidos \n");
            printf("--------------------------------\n");
        }
        if (divisor == 0) {
            printf("--------------------------------\n");
            printf("Divisor inválido!\n");
            printf("O calculo não pode ser efetuado!\n");
            printf("--------------------------------\n");
        }

    /*  switch (divisor){
        case 0:
            printf("--------------------------------\n");
            printf("Divisor inválido!\n");
            printf("O calculo não pode ser efetuado!\n");
            printf("--------------------------------\n");
            break;
        
        default: 
            result = dividendo / divisor;
            printf("---------------------------\n");
            printf("Resulado da divisão: %.1lf.\n", result);
            printf("---------------------------");
            break;
        } */

    /*  while (divisor == 0)
        {
            printf("Digite o divisor: ");
            scanf("%d", &divisor);
        } */
        
    /*  do {
            printf("Digite o divisor: ");
            scanf("%d", &divisor);
        } while (divisor == 0); 
         
        result = dividendo / divisor;
            printf("---------------------------\n");
            printf("Resulado da divisão: %.1lf.\n", result);
            printf("---------------------------"); */
        

}