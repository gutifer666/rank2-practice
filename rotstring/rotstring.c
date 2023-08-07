#include <unistd.h>

int	ft_is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

void	ft_rotstring(char *str)
{
	int	index;
	int	start;
	int	end;
	int	has_written;

	index = 0;
	has_written = 0;
	while (str[index] != '\0' && ft_is_space(str[index]))
		index++;
	start = index;
	while (str[index] != '\0' && !ft_is_space(str[index]))
		index++;
	end = index;
	while (str[index] != '\0')
	{
		while (str[index] != '\0' && ft_is_space(str[index]))
			index++;
		while (str[index] != '\0' && !ft_is_space(str[index]))
		{
			write(1, &str[index++], 1);
			has_written = 1;
		}
		if (str[index] != '\0' || has_written)
			write(1, " ", 1);
	}
	while (start < end)
		write(1, &str[start++], 1);
}

int	main(int argc, char *argv[])
{
	if (argc >= 2)
		ft_rotstring(argv[1]);
	write(1, "\n", 1);
	return (0);
}

