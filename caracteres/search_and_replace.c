#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	while(str[i])
		i++;
	return i;
}

void	search_and_replace(char *str, char char_to_replace, char c)
{
	int i = 0;

	while(str[i])
	{
		if(str[i] == char_to_replace)
			write(1, &c ,1);
		else
			write(1, &str[i], 1);
		i++;
	}	
}

int	main(int arc, char **arv)
{
	if(arc == 4 && ft_strlen(arv[2]) == 1 && ft_strlen(arv[3]) == 1)
		search_and_replace(arv[1], arv[2][0], arv[3][0]);
	write(1, "\n", 1);

	return (0);
}
