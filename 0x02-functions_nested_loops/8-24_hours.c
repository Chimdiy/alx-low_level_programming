#include "main.h"
/**
 * print_minutes - prints two-digit minute or hour
 * @time: the time to print (hour or minute)
 */
void print_minutes(int time)
{
	putchar((time / 10) + '0');
	putchar((time % 10) + '0');
}
