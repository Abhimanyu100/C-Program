#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    printf("Enter any natural number: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        sum = sum + (i*2);
    }
    printf("sum of square of natural number is %d", sum);
}
