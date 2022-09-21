#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("bilangan yang diinputkan adalah = "); scanf("%i", &a);
    if(a% 2 == 0)
    {
        printf("bilangan yang diinputkan genap");
    }
    else
        printf("bilangan tersebut adalah ganjil");

    return 0;
}
