#include <stdio.h>
/**comment
 * here
 * now*/
int main(void)
{
	char alp[52]="abcdefghijklmnopqrstuvwxyzABCDEGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for(i=0; i<52; i++)
	{
		putchar(alp[i]);
	}
	putchar("\n");
	return (0);
}
