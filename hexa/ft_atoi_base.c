char	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'F')
		return (c + 32);
	return (c);
}

int	ft_pos_char_in_str(char c, char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == c)
			return (index);
		index++;
	}
	return (index);
}

int	ft_isvalid(char c, int base)
{
	if (ft_pos_char_in_str(ft_tolower(c), "0123456789abcdef") < base)
		return (1);
	else
		return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int		res;
	int		sign;
	int		index;
	char	*base;

	res = 0;
	sign = 1;
	index = 0;
	base = "0123456789abcdef";
	if (str[index] == '-')
	{
		sign *= -1;
		index++;
	}
	while (str[index] != '\0' && ft_isvalid(str[index], str_base))
	{
		res = (str_base * res) + \
				(ft_pos_char_in_str(ft_tolower(str[index]), base));
		index++;
	}
	return (res * sign);
}
