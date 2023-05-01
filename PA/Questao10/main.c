#include <stdio.h>
void main(){
    int xi[4];
    char xc[4];
    float xf[4];
    double xd[4];
    
    printf("%d \n",xi);//Mostra as posições na memória indo de 2 em 2 bytes
    printf("%d \n",xi+1);
    printf("%d \n",xi+2);
    printf("%d \n",xi+3);
    printf("%c. \n",*xc);//Mostra os caracteres indo de 1 em 1 byte 
    printf("%c \n",*xc+1);
    printf("%c \n",*xc+2);
    printf("%c \n",*xc+3);
    printf("%f \n",xf);// Mostra como 
    printf("%f \n",xf+1);
    printf("%f \n",xf+2);
    printf("%f \n",xf+3);
    printf("%f \n",xd);
    printf("%f \n",xd+1);
    printf("%f \n",xd+2);
    printf("%f \n",xd+3);

    return;
}