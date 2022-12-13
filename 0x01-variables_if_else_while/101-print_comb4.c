#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
int i;
int j;
int k;



for (i = 48 ; i <= 57; i++)
{
for (k = i + 1; k <= 57; k++)
{
for (j = k + 1; j <= 57; j++)

{
	putchar(i);
	putchar(k);
	putchar(j);

if ((i == 55) && (k == i + 1) && (j == k + 1))
{
	break;
}

	putchar(',');
	putchar(' ');
}
}
}

	putchar ('\n');

return (0);

}
