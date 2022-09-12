#include <stdio.h>
/**
 * main - print triple combos
 *
 * Description: print triple digit combos
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int coma = 1;

	while (a <= 9)
	{
		while (b <= 9)
		{
			while (c <= 9)
			{
				if (a < b && b < c)
				{
					if (coma == 0)
					{
						putchar(',');
						putchar(32);
					}
					coma = 0;
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
				}
				++c;
			}
			++b;
			c = 0;
		}
		++c;	
		b = 0;
		}
			putchar(10);
			return (0);
}
