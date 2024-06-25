#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
	{
		putchar("%d")
		putchar(n);
		if (n != 98)
		{
			putchar(", ");
		}
		n++;
	}
	}
	else
	{
		while (n >= 98)
	{
		putchar("%d", n);
		if (n != 98)
	{
		putchar(", ")
	}
		n--;
	}
	}
	putchar("\n");
}
