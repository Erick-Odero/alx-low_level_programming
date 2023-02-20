#include<stdio.h>
/**
 * main - a program that prints aphabets in lowercase
 * Return: 0 (Success)
 */
int main(void)
{int n = 122;
while (n >= 97)
{
putchar(n);
n--;
}
putchar('\n');
return (0);
}
