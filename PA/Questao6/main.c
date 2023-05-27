#include <stdio.h>

int main(void){
    int pulo[3];
    pulo[0]=1;
    pulo[1]=2;
    pulo[2]=3;

    printf("%d \n",*(pulo+2));// correto
    printf("%d \n",*(pulo+4));
    printf("%d \n",(pulo+2));
    printf("%d \n",(pulo+4));
    return (0);
}