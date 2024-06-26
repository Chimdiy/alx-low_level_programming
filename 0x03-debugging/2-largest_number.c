#include "main.h"
/**
 * main - Entry point of the program
 *
 * Description: This program reads three numbers from the user and prints
 * the largest of the three numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3)
    {
        printf("The largest number is: %d\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        printf("The largest number is: %d\n", num2);
    }
    else
    {
        printf("The largest number is: %d\n", num3);
    }

    return (0);
}
