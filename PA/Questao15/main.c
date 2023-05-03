#include <stdio.h>
#include <stdlib.h>

int comp(const void * a, const void * b){
    return ( *(int*)a - *(int*)b );
}

// Código para ler apenas números inteiros.
int main(void){
    
    int n, *x; //Valores a serem lidos
    
    printf("Digite quantos valores voce deseja ler\n");
    scanf("%d", &n); // Lendo os valores
    x = malloc(n * sizeof(int)); // Fazendo a alocação de memória
    printf("Digite os valores:");
    for(int i = 0; i < n; i++){
        scanf("%d", &x[i]); // Lendos os valores
    }
    qsort(x, n, sizeof(int), comp); //Função qsort() para apenas números inteiros.
    for(int i = 0; i < n; i++){
        printf("\n x[%d] == %d", i,  x[i]); // Mostrando cada um dos elementos do array em ordem crescente.
    }
    free(x); // Liberando memória

    return 0;

}