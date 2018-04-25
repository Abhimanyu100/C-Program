#include <stdio.h>

int main()
{
    int i;
    printf("Type the number: ");
    scanf("%d", &i);
    if (i%1 != 0 || i%2 != 0)
        printf("%d is a prime number", i);
    else
        printf("%d is not a prime number", i);
}
