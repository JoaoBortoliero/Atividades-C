#include <stdio.h>

int main (){

    int qtde = 0;                           
    double salario = 0;
    double media = 0;
    double menorSalario = 0;
    double maiorSalario = 0;
    int i = 1;
    int func = 0;
  
    printf("Digite a quantidade de funcionários que deseja coletar o salário: ");
    scanf("%d",&qtde);

    while (qtde < 5)
    {
        printf("Quantidade inválida, é necessário no mínimo 5 funcionários! \n");
        printf("Digite novamente: ");
        scanf("%d",&qtde);
    }

    while (i <= qtde)
    {
        printf("Digite o valor do %dº salário: ", i);
        scanf("%lf", &salario);
        media += salario;
        
        if (i == 1){
            maiorSalario = salario;
            menorSalario = maiorSalario;

        }else if(salario > maiorSalario){
            maiorSalario=salario;
        }else if (salario < menorSalario)
        {  
            menorSalario = salario;
        }

        if (salario >= 4000.00)
        {
            func++;
        }
        i++;
    }
    
    media = media/qtde;
    
    printf("--------------------------------------- \n");
    printf("A quantidade de empregados é %d\n", qtde);
    printf("--------------------------------------- \n");
    printf("O menor salário é  %.2lf\n",menorSalario);
    printf("--------------------------------------- \n");
    printf("O maior salário é %.2lf\n",maiorSalario);
    printf("--------------------------------------- \n");
    printf("Média salárial é de R$%.2lf\n", media);
    printf("--------------------------------------- \n");
    printf("%d funcionários ganham R$4.000 ou mais \n",func);
    printf("---------------------------------------");
    
    return 0;

}