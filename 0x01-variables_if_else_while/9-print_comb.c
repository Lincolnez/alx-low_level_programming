#include <stdio.h>
/**
 * main - main block
 * Description: output all possible comiination of single-digit
 * Return: 0 success.
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
