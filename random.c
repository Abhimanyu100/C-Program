#include <stdio.h>
int main()
{
    int i, j;
    printf("Enter your number: ");
    scanf("%d", &i);
    for ( j = 1; j <= i; j++)
    {
        printf("%d ", j);
    }
}
