#include <stdio.h>

/**
 * main - Assign a random number to n every time it's executed
 * and print the last digit of the number stored in the variable n.
 * Return: Always (0)
 */
int main(void)
{
int n;

for (n = 0; n < 10; n++)
{
printf("%d", n);
}
printf("\n");
return (0);
}
