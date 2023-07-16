#include <stdio.h>

/**
 * main - char function
 * Return: 0 (Success)
 * Description: Call the alphabet game
 */

int main(void)
{	char a;
	a = 'a';

	while (((a <= 'z') && (a != 'e')) && ((a <= 'z') && (a != 'q')))
	{
		putchar (a);
		a++;
	}
	putchar('\n');
	return (0);
}
