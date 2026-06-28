#include <stdio.h> 

int main(){ 

    int valor1; 

    int i;

        printf("Digite um valor para ser multiplicado: "); 
            scanf("%d", &valor1);
        
            for (i = 1; i <= 10; i++){
                int resultado = valor1 * i;
                    printf("%d x %d = %d\n", valor1, i, resultado);
            }
             
        


}