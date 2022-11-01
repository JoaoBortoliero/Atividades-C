#include <stdio.h>

int main()
{
    // Declaralção de Variáveis.
    double salario_min, qtde_agua, valor_litro, desconto, conta;
    
    // Entrada de Dados.
    printf("Digite o valor do salário minimo: R$"); // Valor do salário minimo.
    scanf("%lf",&salario_min);
    printf("Qual a quantidade de água consumida no mês? "); // Valor da quantidade de água gasta.
    scanf("%lf",&qtde_agua);
    
    // Processamento de dados.
    valor_litro = (salario_min * 0.02) / 1000; // Cálculo valor por litro.
    
    conta = valor_litro * qtde_agua; // Cálculo conta total.
    
    desconto = conta - 0.15; // Cálculo deconto.
    
    // Saída de dados.
    printf("O valor da conta de água é de R$%0.2lf \n", conta);
    printf("Com desconto de 15% sua conta fica em R$%0.2lf", desconto);
    
    return 0;
}