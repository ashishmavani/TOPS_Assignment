// Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)

#include <stdio.h>
int main()
// With fractional value
{
    float n1, n2, addition, subtraction, multiplication, division, modulo;
    printf("Enter First Number: ");
    scanf("%f", &n1);
    printf("Enter Second Number: ");
    scanf("%f", &n2);

    addition = n1 + n2;
    subtraction = n1 - n2;
    multiplication = n1 * n2;
    division = n1 / n2;
    modulo = (int)n1 % (int)n2;

    printf("Sum of The Number = %.2f \n", addition);
    printf("substraction of The Number = %.2f \n", subtraction);
    printf("multiplication of The Number = %.2f \n", multiplication);
    printf("Division of The Number = %.2f \n", division);
    printf("Modulo of The Number = %.2f \n", modulo);

    return 0;
}

/*
#include <stdio.h>
int main()
// Without fraction value 
{
    int addition, subtraction, multiplication, modulo, num1, num2;
    float division;
    printf("Enter First Number: ");
    scanf("%d", &num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);

    addition = num1 + num2;
    subtraction = num1 - num2;
    multiplication = num1 * num2;
    division = num1 / (float)num2;
    modulo = num1 % num2;

    printf("Sum of The Number = %d \n", addition);
    printf("substraction of The Number = %d \n", subtraction);
    printf("multiplication of The Number = %d \n", multiplication);
    printf("Division of The Number = %.2f \n", division);
    printf("Modulo of The Number = %d \n", modulo);

    return 0;
}
*/
