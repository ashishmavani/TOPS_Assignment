#include <stdio.h>
int main()
// Days convert into years
{
    float year, days;

    printf("Enter Days :");
    scanf("%f", &days);

    year = days / 365;
    printf("Year of :%.2f", year);

    return 0;
}
