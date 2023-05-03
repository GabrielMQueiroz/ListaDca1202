#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int *p, *q;
    p = i; // (Entrada inválida mas programa ainda compila)
    q = &j; // Correto
    p = &*&i; // Correto
    i = (*&)j; // (inválido e programa não compila)
    i = *&j; // Correto
    i = *&*&j; // Correto
    q = *p; // (inválido mas programa ainda compila)
    i = (*p)++ + *q; // Correto
}
