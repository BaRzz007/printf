#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
	char *s1, *s2, c;
	int n;

	s1 = "this test string";
	s2 = "something in the middle";
	c = 'A';

	n = _printf("Trying %c to print %s and %s\n", c, s2, s1);
	printf("%d\n", n);
	return (0);
}
