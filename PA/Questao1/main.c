#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=3,j=5;
    int *p,*q;
    p=&i;
    q=&j;

    printf("%d p==&i \n",p==&i);
    printf("%d *p - *q \n",*p - *q);
    printf("%d **&p \n",**&p);
    printf("%d 3 - *p/(*q) + 7 \n",3 - *p/(*q) + 7);
    return 0;
}
