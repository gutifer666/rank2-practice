#include<unistd.h>

int	is_space(char c)
{
	if(c == ' ' || c == '\t' )
		return 1;
	return 0;
}

void	expand_str(char *str)
{
	int	i = 0;

	while(str[i] && is_space(str[i]))
		i++;
	while(str[i])
	{
		while(str[i] && !is_space(str[i]))
		{
			write(1, &str[i], 1);
			i++;
		}
		if(str[i] && is_space(str[i]))
		{
			while(str[i] && is_space(str[i]))
				i++;
			if(str[i] && str[i + 1] != '\0')
				write(1, "   ", 3);
		}
	}
}

int	main(int arc, char **arv)
{
	if(arc == 2 && arv[1][0])
		expand_str(arv[1]);
	write(1, "\n", 1);
	return 0;
}
