#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);

		if (num <= '8')
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar('\n');
	return (0);
}
