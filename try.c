#include <stdio.h>

int main()
{
    int i = 6, *p, **q, ***r;
    p = &i;
    q = &p;
    r = &q;
    **q = 8;
    printf("Address: %d\n", p);
    printf("Address: %d\n", q);
    printf("Address: %d\n", r);
    printf("Value is: %d\n", i);

}
