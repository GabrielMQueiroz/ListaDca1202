#include <stdio.h>
int main(void){
    int mat[4];
    unsigned *p;
    unsigned x;

    printf("%d \n",p = mat + 1);/*O incremento pode ser 
    feito pois ele ocorre antes de ser adicionado aos valores de mat */
    //printf("%d \n",p =(mat++));//Erro de expressão o compialdor não consegue fazer um incremento no vetor
    //printf("%d",p = ++mat);
    printf("%d \n",x = (*mat)++);/*O incremento pode ser 
    feito pois ele está incrementando em 1 a posição de 
    memória onde está o ponteiros  selecionado*/
}