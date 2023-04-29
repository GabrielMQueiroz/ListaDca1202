#include <stdio.h>
#include<stdlib.h>
void main(){
    int valor;
    int *p1;//POnteiro pra inteiro 
    float temp;
    float *p2;// Ponteiro para float
    char aux;
    char *nome = "Ponteiros";//ponteiro para char 
    char *p3;//ponteiro para char 
    int idade;
    int vetor[3];
    int *p4;//ponteiro para inteiro
    int *p5;//ponteiro para inteiro
    
    /* (a) */
    
    valor = 10;
    p1 = &valor;// p1 recebe o endereço de memória de valor
    *p1 = 20;// é colocado o valor de 20 para onde o ponteiro p1 aponta
    printf("%d \n", valor);
    
    /* (b) */
    
    temp= 26.5;
    p2= &temp;
    *p2= 29.0;
    printf("%.1f \n", temp);
    
    /* (c) */
    
    p3= &nome[0];
    aux= *p3;
    printf("%c \n", aux);
    
    /*(d)*/
    
    p3= &nome[0];
    aux= *p3;
    printf("%c \n", aux);
    
    /*(e)*/
    
    p3= nome;
    printf("%c \n",*p3);

    /*(f)*/

    p3=p3+4;
    printf("%c \n",*p3);

    /*(g)*/
    p3--;
    printf("%c \n",*p3);


    /*(h)*/

    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;
    idade = *p4;
    printf("%d \n",idade);

    /**/

    p5 = p4 +1 ;
    idade =*p5;
    printf("%d \n",idade);

    /* (j) */
    
    p4= p5+1;
    idade= *p4;
    printf("%d \n", idade);
    
    /* (l) */
    
    p4= p4-2;
    idade= *p4;
    printf("%d \n", idade);
    
    /* (m) */
    
    p5 = &vetor[2] - 1;
    printf("%d \n", *p5);
    
    /* (n) */

    p5++;
    printf("%d \n", *p5);



return;
}