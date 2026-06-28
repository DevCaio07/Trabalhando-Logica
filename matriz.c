#include <stdio.h> 
// Como preencher um valor em uma matriz com FOR

int main (){
     
    int matriz[2][2]; 
    int i, j; 

        for(i = 0; i < 2; i++){
            for(j = 0; j < 2; j++)
            printf("Digite um valor:"); 
            printf("%d", &matriz[2][2]); 
        }

        return 0; 
}