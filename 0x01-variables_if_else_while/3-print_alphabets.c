#include <stdio.h>
/**
 * main - main block
 * Description: use "putchar"to prints alphabets a-Z.
 * Return:0
 */
int main(void)
{
	char l, u;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (u = 'A'; u <= 'Z'; u++)
	{
		putchar(u);
	}
	putchar('\n');
	return (0);
}
