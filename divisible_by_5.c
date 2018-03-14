/*Program to check whether number is divisible by 5 or not*/

#include <stdio.h>

int main()
{
    int a;
    printf("Type your number");
    scanf("%d", &a);
    if (a % 5 == 0)
    {
        printf("Number is divisible by 5");
    }
    else
    {
        printf("Number is not divisible by 5");
    }
}
