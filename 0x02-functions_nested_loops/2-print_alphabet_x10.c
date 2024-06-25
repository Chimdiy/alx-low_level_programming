#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times,
 * each followed by a new line.
 */
void print_alphabet_x10(void)
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

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
