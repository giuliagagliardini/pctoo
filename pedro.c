#include <stdio.h>
int main()
{
   int i=0;
   int n;

   printf("ïnserisci un numero\n");
   scanf("%d", &n);
   int array[n];
   int j;
   int k;

   while(i < n)
   {
    printf("ïnserisci un numero\n");
    scanf("%d", &array[i]);
    i++;
   }
   i = 1;
   j = array[0];
   k = array[0];
   while (i < n)
   {
    if(array[i] < j)
    {
        j = array[i];

    }
    else if (array[i]>k)
    {
        k = array[i];
    }
    i++;
   }
   printf("ïl numero piu piccolo è %d e il numero più grande è %d\n", j, k);

}