#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end);

int	main(void)
{
	int	*nums;
	int	index;
	int	start;
	int	end;
	int	size;

	index = 0;
	start = 0;
	end = -3;
	printf("\nDesde %i hasta %i están los números: ", start, end);
	if (end < 0)
		size = -end - start;
	else
		size = end - start;
	nums = ft_range(start, end);
	while (index <= size)
	{
		printf("%i ", nums[index]);
		index++;
	}
	free(nums);
	return (0);
}
