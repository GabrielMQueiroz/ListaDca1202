#include <stdio.h>
int main(){
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;
    aloha[2] = value;
    scanf("%f", &aloha);
    //aloha = value;// Comando inválido pois, esta tentando atribuir um valor à um array sem especificar sua posição
    printf("%f", aloha);
    coisas[4][4] = aloha[3];
    //coisas[5] = aloha;//inválido pois está tentando acessar o valor de uma linha inteira.Esse comando poderioa ser feito, caso ele quisesse acessar o 
    //pf = value; Está inválido pois está tentando associar 
    pf = aloha;
    return;
}