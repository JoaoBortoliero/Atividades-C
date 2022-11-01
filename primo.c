#include <stdio.h>

int main()
{
    int n;
    int soma = 0;
    int sair = 0;
    int num = 0;
    int par = 0;
    
    do{
        printf("Insíra um número: ");
        scanf("%d", &n);
        
        printf("Números pares: "); 
        for(int i=1; i <= n; i++){
            if(i % 2 == 0){
            printf("%d - ", i);
            par = i;
            num = par - 1;
            }
            if ((num / num == 1) && (num / 1 == num)){
                printf("%d é um número primo! \n", num);
                
            }
        }
        printf("\n");
        printf("Digite 1 para sair e 2 para repetir: ");
        scanf("%d", &sair);
        
        } while (sair == 2);
        
        printf("Tchau! Até logo.");

    return 0;
}