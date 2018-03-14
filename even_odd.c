/*Program to check whether the number is ODD or EVEN */

#include <stdio.h>

int main()
{
    int a;
    printf("Type your number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d is a EVEN number", a);
    }
    else
    {
        printf("%d is a ODD number", a);
    }

}
