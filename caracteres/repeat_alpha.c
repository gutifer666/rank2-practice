#include <unistd.h>

int	is_alpha(char c)
{
	if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
		return 1;

	return 0;
}

void	put_char(char c)
{
	write(1, &c, 1);
}

void	put_char_n(char c)
{
	int i = 0;
	int alpha_index;

	if(c >= 'A' && c <= 'Z')
		alpha_index = c - 'A';
	else
		alpha_index = c - 'a';
		
	while(i <= alpha_index)
	{
		write(1, &c, 1);
		i++;
	}
}

void	repeat_alpha(char *str)
{
	int i = 0;

	while(str[i])
	{
		if(is_alpha(str[i]))
			put_char_n(str[i]);
		else
			put_char(str[i]);
		i++;
	}
}

int	main(int arc, char **str)
{
	if(arc == 2)
		repeat_alpha(str[1]);
	write(1, "\n", 1);
	return (0);
}
