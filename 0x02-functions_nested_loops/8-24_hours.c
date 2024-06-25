#include "main.h"
/**
 * print_minutes - prints two-digit minute or hour
 * @time: the time to print (hour or minute)
 */
void jack_bauer(void)
{
	putchar((time / 10) + '0');
	putchar((time % 10) + '0');
}
