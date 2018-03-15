/*Program to print n natural number in reverse order */
#include <stdio.h>

int main()
{
    int i;
    for (i = 10; i >= 1; i--) //First the value is 10 so it will check the condition which is (i >= 1). It prints '10' and then the oondition (i--)apply.
    {
        printf("%d ", i);
    }
}
