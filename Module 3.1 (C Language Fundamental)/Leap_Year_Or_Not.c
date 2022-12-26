// WAP to check if the given year is a leap year or not.
#include <stdio.h>;
int main()

//  if year is century year is perfectly divisible by 400.
//  if year is not century year is perfectly divisible by 4.

{
    int year;
    printf("Enter Year:");
    scanf("%d", &year);
    if (year % 400 == 0)
    {
        printf("%d is a leap year", year);
    }
    else if (year % 4 == 0)
    {
        printf("%d is a leap year", year);
    }
    else if (year % 100 != 0)
    {
        printf("%d is not a leap year", year);
    }
    else
    {
        printf("You are enter wrong value");
    }
    return 0;
}

