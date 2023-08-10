#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b);

int	main(void)
{
	unsigned int	a;
	unsigned int	b;

	a = 22;
	b = 24;
	printf("El mcm (lcm) de %u y %u es: %u\n", a, b, lcm(a, b));
	return (0);
}
