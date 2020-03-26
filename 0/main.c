#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, total;

    printf("Introduzca un nro: ");
    scanf("%d", &n1);
    printf("Introduzca otro nro: ");
    scanf("%d", &n2);

    if(n1==n2)
    {
        total = n1 * n2;
    }
    else if(n1>n2)
    {
        total = n1-n2;
    }
    else
    {
        total = n1+n2;
    }

    printf("\n Total: %d", total);

    return 0;
}
