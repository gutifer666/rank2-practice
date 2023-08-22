#include <unistd.h>

int	ft_atoi(char *str_number)
{
	int	i = 0;
	int	result = 0;

	while(str_number[i])
	{
		result = result * 10 + (str_number[i] - '0');
		i++;
	}
	
	return result;
	
}

void	print_hex(int decimal_number)
{
	char	*hexa_digits = "0123456789abcdef";

	if(decimal_number > 15)
	{
		print_hex(decimal_number / 16);
		write(1, &hexa_digits[decimal_number % 16], 1);
	}
	else
		write(1, &hexa_digits[decimal_number], 1);
}

int	main(int acv, char **arv)
{
	if(acv == 2)
		print_hex(ft_atoi(arv[1]));
	
	write(1, "\n", 1);

	return 0;	
}
