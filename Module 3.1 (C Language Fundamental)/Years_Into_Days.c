#include <stdio.h>
int main()
// year multiply by 365
{
    float years, days;

    printf(" Enter The Years: ");
    scanf("%f", &years);

    days = years * 365;
    printf("Days in Years is: %.f", days);

    return 0;
}
