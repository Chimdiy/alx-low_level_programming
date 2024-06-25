#include "main.h"
/**
 * print_number - prints an integer using putchar
 * @n: the integer to print
 */
void print_number(int n)
{
    if (n < 0)
    {
        putchar('-');
        n = -n;
    }

    if (n / 10)
    {
        print_number(n / 10);
    }

    putchar((n % 10) + '0');
}

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number
 */
void print_to_98(int n)
{
    while (n != 98)
    {
        print_number(n);
        putchar(',');
        putchar(' ');

        if (n < 98)
        {
            n++;
        }
        else
        {
            n--;
        }
    }

    print_number(98);
    putchar('\n');
}
