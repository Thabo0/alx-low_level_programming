#include <stdio.h>

/**
 * main - char function
 * Return: 0 (Success)
 * Description: Call the alphabet game
 */

int main(void)
{	char a;
	a = 'a';

	while ( a <= 'z')
	{
		if (a == 'e')
		{
			a++;
		}
		else if (a == 'q')
		{
			a++;
		}
		putchar (a);
		a++;
	}
	putchar('\n');
	return (0);
}
