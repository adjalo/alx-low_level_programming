#include <stdio.h>
/**
 * main - program that prints all possible different combinations of
 *three digits
 * Numbers must be separated by ,followed by a space
 *The two digits must be different
 *012, 120, 102, 021, 201, 210 are considered the same combination
 *Return: 0
 */
int main(void)
{

int n;
for (n=48; n<58; n++)
{
	putchar(n);
}
putchar('\n')
return (0);
}
