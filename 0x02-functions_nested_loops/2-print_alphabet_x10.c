#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase 10 times,
 * each followed by a new line.
 */
void print_alphabet(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(alphabet[i]);
		}
		_putchar('\n');
	}
}

