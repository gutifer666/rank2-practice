#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i = 0;
	
	while(str[i])
	{
		i++;
	}
	
	return (i);
}

void	rev_print(char *str)
{
	int	i;

	i = ft_strlen(str);	
	while(i >= 0)
	{
		write(1, &str[i - 1], 1);
		i--;
	}
}

int	main(int arc, char **arv)
{
	if(arc == 2)
		rev_print(arv[1]);
	write(1, "\n", 1);
	return (0);
}
