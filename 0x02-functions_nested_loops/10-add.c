#include <stdio.h>

/**
 * add - adds two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the result of adding a and b
 */
int add(int a, int b)
{
    return (a + b);
}

/**
 * main - tests the add function
 *
 * Return: 0 on success
 */
int main(void)
{
    int result;

    result = add(2, 3);
    printf("2 + 3 = %d\n", result); /* Should print 5 */

    result = add(-1, 5);
    printf("-1 + 5 = %d\n", result); /* Should print 4 */

    result = add(0, 0);
    printf("0 + 0 = %d\n", result); /* Should print 0 */

    return (0);
}
