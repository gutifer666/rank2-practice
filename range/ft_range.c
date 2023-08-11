#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int	*res;
	int	size;
	int	i;

	if(end < 0)
		size = -end - start;
	else
		size = end - start;

	res = (int *) malloc(size * sizeof(int));
	if(!res)
		return NULL;
	
	i = 0;
	while(i < size)
	{
		res[i] = start;
		start++;
		i++;
	}	

	return res;
}
