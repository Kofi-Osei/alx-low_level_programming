#iinclude <stdio.h>
/**
 * main - prints possible combinations of 2 2-digit numbers
 * @i - first intializer
 * @j - second intializer
 * @k - third intializer
 * @l - fourth intializer
 *
 * Return:0 always
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

	}
	putchar('\n');
	return (0);
}
