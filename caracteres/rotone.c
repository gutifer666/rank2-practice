#include <unistd.h>

int	is_alpha_less_z(char c)
{
	if(c >= 'A' && c <= 'Y' || c >= 'a' && c <= 'y')
		return 1;
	return 0;
}

void	rotone(char *str)
{
	int	i = 0;
	char	c;

	while(str[i])
	{
		c = str[i];
		if(is_alpha_less_z(str[i]))
			c = str[i] + 1;	
		if(str[i] == 'z' || str[i] == 'Z')
			c = str[i] - 25;
		write(1, &c, 1);
		i++;
	}
}

int	main(int arc, char ** arv)
{
	if(arc == 2)
		rotone(arv[1]);
	write(1, "\n", 1);

	return 0;
}
