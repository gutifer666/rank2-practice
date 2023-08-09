#include <unistd.h>

int	is_upper(char c)
{
	if(c >= 'A' && c <=  'Z')
		return 1;
	return 0;
}

char	to_low(char c)
{
	return c + 32;	
}

void	camel_to_snake(char *str)
{
	int	i = 0;
	char	c;

	while(str[i])
	{
		if(is_upper(str[i]) && str[i + 1])
		{
			write(1, "_", 1);
			c = to_low(str[i]);
		}
		else
		{
			c = str[i];
		}
		write(1, &c, 1);
		i++;
	}
}

int	main(int arc, char **arv)
{
	if(arc == 2)
		camel_to_snake(arv[1]);
	write(1, "\n", 1);

	return 0;

}
