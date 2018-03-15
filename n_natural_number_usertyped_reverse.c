/*Program for printing the n natural number in reverse order */
#include <stdio.h>
int main()
{
    int i, j;
    printf("Type your number: ");
    scanf("%d", &i);
    for (j = 1; j <= i; j++)
    {
        printf("%d ", (i - j));
    }
}
