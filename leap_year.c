/*Program for checking whether the year is LEAP year or not */

#include <stdio.h>

int main()
{
    int year;
    printf("Type the year for checking: ");
    scanf("%d", &year);
    if (year%100 == 0) //for checking century year (1600, 1700, etc) or not, if it's then we will check whether it's divisible by 400.
        if (year%400 == 0) //We know it's a century year, now we are checking if it divisible by 400.
            printf("%d Year is a leap year", year); //printing its a leap year
        else
            printf("%d Year is not a leap year", year); //printing it's not a leap year
    else
        if (year%4 == 0) //the year is not a century year year (1456, 2015, etc). We are checking whether it's divisible by 4 or not.
            printf("%d Year is a leap year", year);
        else
            printf("%dYear is not a leap year", year);

}
