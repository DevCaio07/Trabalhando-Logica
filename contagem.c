#include <stdio.h>

int main(){ 
    int numero;

    printf("Digite um valor: "); 
        scanf("%d", &numero); 

    do{
        
        numero = numero - 1;
        printf("%d\n", numero);
    } while(numero >1 ); 
}