#include <stdio.h>
#include <math.h>

int main()
{
    int bin, i, s, dec;
    printf("Enter any binary number ");
    scanf("%d", &bin);
    while (bin)
    {
        s = s+pow(2, i)*(bin%10);
        bin = bin/10;
        i++;
    }
    printf("Decimal equivalent is %d", s);
}

