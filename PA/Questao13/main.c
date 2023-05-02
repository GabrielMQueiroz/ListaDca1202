#include <stdio.h>
#include <stdlib.h>

int comp(const void *a,const void *b){
    return(*(int*)a- *(int*)b ); 
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
    qsort(x,n,sizeof(float),comp);
    for(int i=0;i<n;i++){
        printf("\n x[%d] == %.1f",i,x[i]);
    }
    free(x);
    return 0;
}