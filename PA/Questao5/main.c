#include <stdio.h>
int main(void){
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f= vet;
    printf("contador/valor/valor/endereco/endereco");
    for (i =0;i<=4;i++){
        printf("\ni =%d",i); // O primeiro valor é o próprio contador
        printf("vet[%d] = %.1f",i, vet[i]); // Seguido pelo conteúdo v[i] do vetor float
        printf("*(f + %d) = %.1f",i, *(f+i)); // O conteúdo do ponteiro f + 1, ou seja, *(f+i) que resulta no mesmo valor que v[i]
        printf("&vet[%d] = %X",i, &vet[i]); // O endereço do vetor float, em base hexadecimal
        printf("(f + %d) = %X",i, f+i); //  O mesmo endereço supracitado, apenas introduzido de forma diferente (f+1)
    }

}