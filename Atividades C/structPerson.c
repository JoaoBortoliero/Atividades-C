#include <stdio.h>

struct person {
    int idade;
    double salario;
    char sexo;
    char nome[50];
};
int main () {
    struct person p1;
    printf("Digite a idade: ");
    scanf("%d", &p1.idade);
    printf("Digite o salário: ");
    scanf("%lf", &p1.salario);
    printf("Digite o sexo [F/M]: ");
    scanf(" %c", &p1.sexo);
    printf("Digite o nome: ");
    scanf("%s", p1.nome);

    printf("Idade: %d, salário: %lf, sexo: %c, nome: %s", p1.idade, p1.salario, p1.sexo, p1.nome);

    return 0;
}