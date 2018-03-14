/*Greater among three number */
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Your three number are: ");
    scanf("%d%d%d", &a, &b, &c);
    if ( a > b && b > c)
    {
        printf("A is greater among");
    }
    else if ( b > a && a > c)
    {
        printf("B is greater among three value");
    }
    else
    {
        printf("C is greater among three value");
    }
}
