#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int num1;
	int num2;

	for (num1 = '0'; num1 <= '9'; num1++)
	{
		for (num2 = num1; num2 <= '9'; num2++)
		{

			if (num1 == num2)
			{
				continue;
			}

			putchar (num1);
			putchar (num2);

			if (num1 == '8' && num2 == '9')
			{
				break;
			}
			else
			{
				putchar (',');
				putchar (' ');
			}

		}
	}
	putchar ('\n');
	return (0);
}
