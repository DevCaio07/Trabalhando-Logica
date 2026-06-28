#include <stdio.h>
#include <math.h> 

int main(){


    int quantidade_abacate;
    float preco_unitario;
    float total; 

    printf("Quantos abacates foram comprados? ");
        scanf("%d", &quantidade_abacate);

    if (quantidade_abacate <= 12){
        preco_unitario =1.00;
    }
    else if(quantidade_abacate <= 25){
        preco_unitario = 0.90;
    }
    else if(quantidade_abacate > 25){
        preco_unitario = 0.70; 
     }
     
     total = quantidade_abacate * preco_unitario; 
     printf("O valor do abacate ficou %.2f", total);


    
}