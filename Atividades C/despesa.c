#include <stdio.h>;

void main() {

    double desp1, desp2, desp3, desp4, somaDespesa, resto;
    double salario = 0;

    printf("Insira o valor de 4 desepesas. \n");
    printf("Valor da 1ª desepesa: ");
    scanf("%lf", &desp1);
    printf("Valor da 2ª desepesa: ");
    scanf("%lf", &desp2);
    printf("Valor da 3ª desepesa: ");
    scanf("%lf", &desp3);
    printf("Valor da 4ª desepesa: ");
    scanf("%lf", &desp4);

    somaDespesa = desp1 + desp2 + desp3 + desp4;

    if (somaDespesa < 5000.00) {
        printf("Você economizou este mês. \n");
    } else if (somaDespesa > 5000.00) {
        printf("Insira seu salário: ");
        scanf("%lf",&salario);
        resto = salario - somaDespesa;
            if ((salario > somaDespesa) && (somaDespesa < 5000)) {
                printf("Desta vez você levou sorte. \n"); 
            } else if ((salario < somaDespesa) && (somaDespesa < 5000)) {
                printf("Você necessita de um empréstimo.\n");
            }
        }
    if (somaDespesa > salario) {
        printf("O total de suas despesas foram R$%.2lf.\n", somaDespesa);
        printf("O valor liquido de suas despesas é de R$%.2lf.\n", resto);
    } else 
        printf("O total de suas despesas foram R$%.2lf.",somaDespesa);

}
