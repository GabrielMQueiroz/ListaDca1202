#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
void bubble_sort(float *array, int n) {
    int i, j;
    float temp;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void read_and_sort_floats(int n) {
    float *array;
    int i;
    
    array = (float*) malloc(n * sizeof(float));
    
    if (array == NULL) {
        printf("Erro na alocação de memória.\n");
        exit(1);
    }
    
    printf("Digite os %d valores:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &array[i]);
    }
    
    bubble_sort(array, n);
    
    printf("Valores em ordem crescente:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", array[i]);
    }
    printf("\n");
    
    free(array);
}

int main() {
    int n;
    
    printf("Digite a quantidade de valores que serão inseridos:\n");
    scanf("%d", &n);
    
    read_and_sort_floats(n);
    
=======
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
>>>>>>> ac84c0f2581609e84854bdcc63be9a7fc863ef53
    return 0;
}