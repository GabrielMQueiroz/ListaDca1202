#include <stdio.h>
#include <stdlib.h>

 somavet(int *vetor1, int *vetor2, int *soma, int n){ // Função para somar 2 vetores
    for(int i = 0; i < n; i++){
        soma[i] = vetor1[i] + vetor2[i];
    }
    return soma;
}

int main(void){
    int n, *x1, *x2, *soma = 0;
    printf("Quantos elementos serão adicionados?");
    scanf("%d", &n); // Quantidade de elementos para cada vetor

    // Alocando memória
    x1 = malloc(n * sizeof(int)); 
    x2 = malloc(n * sizeof(int)); 
    soma = malloc(n * sizeof(int)); 
    printf("Por favor, digite os valores do vetor1: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &x1[i]);  // Lendo os elementos do vetor 1
    }
    printf("Por favor, digite os valores do vetor2: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &x2[i]);  // Lendo os elementos do vetor 2
    }

    printf("Valor do vetor1: ");
    for(int i = 0; i < n; i++){
        printf("%d   ", x1[i]);  // Mostrando o vetor 1
    }
    printf("\nValor do vetor2: "); 
    for(int i = 0; i < n; i++){
        printf("%d   ", x2[i]);  // Mostrando o vetor 2
    }
    
    printf("\n");

    soma = somavet(x1, x2, soma, n); // Chamando som

    printf("\nValor das somas: \n");
    for(int i = 0; i < n; i++){
        printf("%d   ", soma[i]); // Mostrando o valor das somas
    }
    
    // Liberando Mem
    free(soma);
    free(x2);
    free(x1);

    return 0;
}