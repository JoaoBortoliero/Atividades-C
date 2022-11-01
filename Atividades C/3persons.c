#include <stdio.h>

struct person {
    int idade;
    double salario;
    char sexo;
    char nome[50];
};

int main () {

    struct person p1;
    printf("Digite o nome: ");
    scanf("%s", p1.nome);
    printf("Digite o sexo [F/M]: ");
    scanf(" %c", &p1.sexo);
    printf("Digite a idade: ");
    scanf("%d", &p1.idade);
    printf("Digite o salário: ");
    scanf("%lf", &p1.salario);
 
    struct person p2;
    printf("Digite o nome: ");
    scanf("%s", p2.nome);
    printf("Digite o sexo [F/M]: ");
    scanf(" %c", &p2.sexo);
    printf("Digite a idade: ");
    scanf("%d", &p2.idade);
    printf("Digite o salário: ");
    scanf("%lf", &p2.salario);

    struct person p3;
    printf("Digite o nome: ");
    scanf("%s", p3.nome);
    printf("Digite o sexo [F/M]: ");
    scanf(" %c", &p3.sexo);
    printf("Digite a idade: ");
    scanf("%d", &p3.idade);
    printf("Digite o salário: ");
    scanf("%lf", &p3.salario);
    
    printf("Nome: %s, sexo: %c, idade: %d, salário: %.1lf \n", p1.nome,  p1.sexo, p1.idade, p1.salario);
    printf("Nome: %s, sexo: %c, idade: %d, salário: %.1lf \n", p2.nome,  p2.sexo, p2.idade, p2.salario);
    printf("Nome: %s, sexo: %c, idade: %d, salário: %.1lf \n ", p3.nome,  p3.sexo, p3.idade, p3.salario);

    return 0;
}