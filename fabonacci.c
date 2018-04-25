#include <stdio.h>

int main()
{
    int i, j, a = -1, b = 1, c;
    printf("Type any natural number: ");
    scanf("%d", &i);
    for (j = 0; j <= i; j++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}
