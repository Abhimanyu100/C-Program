/*Program to print out n natural number which the user want */
#include <stdio.h>
int main()
{
    int i, j; //Defining two variable
    printf("Enter your number: "); //Prompting the user for number
    scanf("%d", &i); //Asking user for input
    for ( j = 1; j <= i; j++) //the value of i (which user typed in) is less then the j (another variable we defined).
    {
        printf("%d ", j); // printing the n natural number.
    }
}
