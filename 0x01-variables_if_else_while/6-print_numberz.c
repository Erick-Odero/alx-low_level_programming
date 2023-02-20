#include<stdio.h>
/**
 * main - A program that prints single numbers in base 10
 * Return: 0 (Success)
 */
int main(void)
{
int n;
for (n = 0; n <= 9; n++)
{
putchar(n + 48);
}
putchar('\n');
return (0);
}
