#include <stdio.h>

int main(){ 

    int valor_digitado; 
    int contador = 0;
    int i; 

        printf("Digite um valor de 1 a 10: "); 
            scanf("%d", &valor_digitado);
    
        for (i = 1; i <= 10; i++) {
                
            contador = (valor_digitado * valor_digitado); 
    }

            printf("o resultado ao quadrado ficou %.d", contador);
 
        return 0;
}

