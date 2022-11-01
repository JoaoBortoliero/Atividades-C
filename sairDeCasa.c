#include <stdio.h>;

int main() {

    int opcao;

    printf("Digite 1 para praia \n");
    printf("Digite 2 para cinema \n");
    printf("Digite 3 para churrasco \n");
    printf("Digite sua opcao: ");
    scanf("%d",&opcao);
    
    switch (opcao) {
    case 1:
        printf("Sair de casa às 8h");
        break;
    case 2:
        printf("Sair de casa às 14");
        break;
    case 3:
        printf("Sair de casa às 12h");
        break;
    default:
        printf("Já que não optou fique em casa mesmo");
        break;
    }
    return 0;

} 