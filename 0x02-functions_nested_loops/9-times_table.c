#include <stdio.h>
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j;
	int product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
        {
		product = i * j;

		if (j != 0)
		{
			putchar(',');
			putchar(' ');
			if (product < 10)
			{
				putchar(' ');
                }
		}

		if (product < 10)
		{
			putchar(product + '0');
		}
		else
		{
			putchar((product / 10) + '0');
			putchar((product % 10) + '0');
		}
	}
		putchar('\n');
	}
}

