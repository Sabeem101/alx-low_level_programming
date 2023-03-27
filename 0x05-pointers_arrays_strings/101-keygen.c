#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme
 *
 * Return: 0
 */

int main (void)
{
	int p, sum, num;
	int pass[100];

	sum = 0;

	srand(time(NULL));

	for (p = 0; p < 100; p++)
	{
		pass[p] = rand () % 78;
		sum += (pass[p] + '0');
		putchar(pass[p] + '0');
		if (( 2772 - sum) - '0' < 78)
		{
			num = 2772 - sum - '0';
			sum += num;
			putchar(num + '0');
			break;
		}
	}

	return (0);
}
