#include <stdio.h>

/**
 * main - char function
 * Return: 0 (Success)
 * Description: Print letters
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
