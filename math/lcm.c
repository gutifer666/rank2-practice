#include <unistd.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned	int	res;

	if(a == 0 || b == 0)
		return 0;
	
	if(a > b)
		res = b;
	else
		res = a;
	
	while(res % a != 0 || res % b != 0)
		res++;
	return res;

}
