#include <stdio.h>

int fact(int);
int main()
{
    int x;
    x = fact(5);
    printf("factorial is: %d", x);

}

int fact(int n)
{
    int i, f = 1;
    for(i = 1; i <= n; i++)
        f = f*i;
    return(f);

}
