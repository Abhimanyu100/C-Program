/*Program to check whether which value is greater between two number*/
#include <stdio.h>

int main()
{
    int a, b;
    printf("Type your number: ");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        printf("A is greater then b");
    }
    else if (a < b)
    {
        printf("B is greater then A");
    }
    else
    {
        printf("Both number are equal");
    }

}
