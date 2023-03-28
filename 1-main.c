#include <stdio.h>
#include "main.h"

int main(void)
{
	int l1, l2;
	char *c;

	l1 = printf("before %s after\n");
	l2 = _printf("before %s after\n");
	printf("\n%d, %d\n", l1, l2);

	if (!c)
		printf("\nString is null");

	l1 = printf("\n%s", c);
	l2 = _printf("\n%s", c);
	printf("\n%d, %d\n", l1, l2);

	return (0);
}
