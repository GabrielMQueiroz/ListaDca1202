#include <stdio.h>
/*
Um ponmteiro para função é normalmente para utilizado para passar 
funções como argumentos para outras funções.
*/

int mult(int a,int b){
    return (a*b);
}
int chama(int a,int b,int (*funct(int,int))){
    int valor;
    valor= funct(2,5);
    return(valor);
}
int main(){
    int s;
    s = chama(2,5,mult);
    printf("%d \n",s);

}