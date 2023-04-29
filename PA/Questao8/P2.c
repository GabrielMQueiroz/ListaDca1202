#include <stdio.h>
int main(){
    int vet[]={4,9,13};
    int i;
    for(i=0;i<3;i++){
        printf("%X \n",vet+i);
    }
}
/*O código acima mostra a posição de memória onde os endereços de memória
onde os valores foram alocados. Podemos notar também que como a variável é 
do tipo inteiro o espaço alocado de 4 em 4 bytes
*/