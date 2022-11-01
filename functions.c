#include <stdio.h>

void welcome();
void soma(int x, int y, int z);
int main()
{
    int x, y, z, result;
    
    x = 100;
    y = 200;
    z = 300;
    
    welcome();
    soma(x, y, z);
    result = soma2(x, 3000, z);
    printf("Soma: %d \n", result);
    
    return 0;
}

void welcome(){
    printf("------------------------\n");
    printf("  WELCOME TO MY PROGRAM \n");
    printf("------------------------\n");
    printf("-- FOR HELP PRESS: F4 --\n");
    printf("------------------------\n");
}
void soma(int x, int y, int z){
    int result = x + y + z;
    printf("Soma: %d \n", result);
}
int soma2(int x, int y, int z){
    int result = x + y + z;
    return result;
}