#include <stdio.h>
#include <stdlib.h>

float Troca(float *a,float *b){
    float temp=*a;
    *a=*b;
    *b=temp;
}

int main(void){
    int n;
    float *x;
    printf("Digite quantos valores \n");
    scanf("%d",&n);
    x=malloc(n*sizeof(int));
    printf("Digite os valores: ");
    for(int i =0;i<n;i++){
        scanf("%f",&x[i]);
    }
    for(int i=0;i<n;i++){
        if (&x[i]>&x[i+1]){
            Troca(&x[i],&x[i+1]);    
        }else if(&x[i-1]>&x[i]){
            Troca(&x[i-1],&x[i]);
            //printf("%f \n bef big: ",x);
        }
        //printf("%f",x[i]);
    printf("\n x[%d] == %f",i,x);
    }
    free(x);
    return 0;
}