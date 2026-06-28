// Média de Notas (Estrutura Sequencial)
#include <stdio.h> 

int main(){
    
    float nota1, nota2;
    float soma_media; 

    
    printf("Digite a primeira nota: ");
        scanf("%f", &nota1); 

    printf("Digite a segunda nota: "); 
        scanf("%f", &nota2); 

        soma_media = (nota1 + nota2)/2; 
        printf("a media das notas é %.2f", soma_media );

    


}