#include <stdio.h>
/**
 * main - main block
 * Description: prints all base 16 numbers in lowercase.
 * Return: 0 seccess.
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
