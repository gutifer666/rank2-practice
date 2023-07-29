#include <unistd.h>

int	is_down_case(char c)
{
	if(c >= 'a' && c <= 'z')
		return 1;
	return 0;
}

int	is_up_case(char c)
{
	if(c >= 'A' && c <= 'Z')
		return 1;
	return  0;
}

int	is_alpha(char c)
{
	if(is_down_case(c) || is_up_case(c))
		return 1;
	return 0;
}

void	put_char(char c)
{
	write(1, &c, 1);
}

void	put_opposite(char c)
{
	if(is_down_case(c))
		put_char('a' + 'z' - c);
	if(is_up_case(c))
		put_char('A' + 'Z' - c);
}

void	alpha_mirror(char *str)
{
	int i = 0;

	while(str[i])
	{
		if(is_alpha(str[i]))
			put_opposite(str[i]);
		else
			put_char(str[i]);
		i++;
	}
}

int	main(int arc, char **arv)
{
	if(arc == 2)
		alpha_mirror(arv[1]);
	write(1, "\n", 1);
	return (0);	
}
