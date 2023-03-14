#include <stdio.h>

int main()

{
    int x;
    int y;
    int z;
    printf("è un lato del triangolo?");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    if(x+y>z && x+z>y && y+z>z)
    {
    printf ("è lato di un triangolo\n");
    }
    else
    {
        printf("non è un lato di un triangolo\n");
    }
}