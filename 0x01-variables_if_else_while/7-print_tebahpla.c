#include <stdio.h>
/**
 * main - main block
 * Description: print lowecase alphabet in reverse.
 * Return: 0 success.
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
