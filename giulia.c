#include <stdio.h>

int main ()
{
    int age;
    char sex;
    printf("quanti annni hai: ");
    scanf("%d", &age);
    printf("sesso: M | F | N: \n");
    scanf(" %c", &sex);
    printf("ho %d anni e sono %c\n", age, sex);
    return 0;
}