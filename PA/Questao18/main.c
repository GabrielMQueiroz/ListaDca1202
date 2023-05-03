#include <stdio.h>

MultMatrizes(int **A, int **B, int **C, int nl_A, int nc_A, int nc_B){
    for(int i = 0; i < nl_A; i++){
        for(int j = 0; j < nc_B; j++){ // Sabendo que nc_A == nl_B
            for(int k = 0; k < nc_A; k++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j]; // Multiplicação matricial
            } 
        }
    }
    return C;
}

int main(void){
    int **A, **B, **C, nl_A, nc_A, nl_B, nc_B, nl_C, nc_C;
    nl_A = nl_C = 2; // A matriz C tem o mesmo número de linhas que a matriz A, em razão da multiplicação de matrizes.
    nc_A = 3;
    nl_B = 3;
    nc_B = nc_C = 2; // A matriz C tem o mesmo número de colunas que a matriz B, em razão da multiplicação de matrizes.

    // Alocando a matriz A (2x3)
    A = malloc(nl_A*sizeof(int*)); // Alocando o bloco auxiliar da matriz
    A[0] = malloc(nc_A * nl_A * sizeof(int)); // Alocando as linhas
    for(int i = 1; i < nl_A; i++){
        A[i] = A[i-1] + nc_A;
    }

    // Adicionando valores randomícos na matriz A
    for(int i = 0; i < nl_A; i++){
        for(int j = 0; j < nc_A; j++){
            A[i][j] = i+5; 
        }
    }
    // Valores da matriz A 
    printf("Valores da matriz A:\n");
    for(int i = 0; i < nl_A; i++){
        for(int j = 0; j < nc_A; j++){ 
            printf("%2d   ", A[i][j]);
        }
        printf("\n");
    }

    // Alocando a matriz B (3x2)
    B = malloc(nl_B*sizeof(int*)); // Alocando o bloco auxiliar da matriz
    B[0] = malloc(nc_B * nl_B * sizeof(int)); // Alocando as linhas
    for(int i = 1; i < nl_B; i++){
        B[i] = B[i-1] + nc_B;
    }

    // Inserindo valores Randômicos na matriz B
    for(int i = 0; i < nl_B; i++){
        for(int j = 0; j < nc_B; j++){
            B[i][j] = i+10;
        }
    }

    // Mostrando matriz B
    printf("\nValores da matriz B:\n");
    for(int i = 0; i < nl_B; i++){
        for(int j = 0; j < nc_B; j++){ 
            printf("%2d   ", B[i][j]);
        }
        printf("\n");
    }

    // Alocando a matriz C (2x2)
   C = malloc(nl_C*sizeof(int*)); // Alocando o bloco auxiliar da matriz
    C[0] = malloc(nc_C * nl_C * sizeof(int)); // Alocando as linhas
    for(int i = 1; i < nl_C; i++){
        C[i] = C[i-1] + nc_C;
    }

    //Prenchendo a matriz C com zeros
    C[0][0] = 0;
    C[0][1] = 0;
    C[1][0] = 0;
    C[1][1] = 0;

    C = MultMatrizes(A, B, C, nl_A, nc_A, nc_B); // Chamando a função para guardar em C as multiplicações matriciais.
    printf("\nValores da matriz C:\n");
    for(int i = 0; i < nl_C; i++){
        for(int j = 0; j < nc_C; j++){ 
            printf("%2d   ", C[i][j]);
        }
        printf("\n");
    }
    // Liberando memória
    free(C[0]);
    free(C);
    free(B[0]);
    free(B);
    free(A[0]);
    free(A);
    return 0;
}