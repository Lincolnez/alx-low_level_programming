#include <stdio.h>
/**
 * main -main block
 * Description: print number of base 10 from (0-9) using putchar
 * Return: 0 success.
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
