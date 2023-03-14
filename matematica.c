#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    printf("insersci tre numeri");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    if (x+y>z && x+z>y && y+z>x)
    {
    printf ("è un triangolo");
    
       if ("x==y && y==z && z==x")
    
       printf ("è triangolo equilatero\n");
    
       else if("z!=y && x!=y && x!=z")
    
        printf("è un triangolo scaleno\n");
    
         else
         printf ("è un triangolo isoscele\n");
    }

    else 
    {
    
    printf("non è un triangolo\n");
    }
}