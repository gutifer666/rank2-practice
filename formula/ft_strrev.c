int	str_len(char *str)
{
	int i= 0;
	
	while(str[i])
		i++;
	return i;
}

char    *ft_strrev(char *str)
{
	int i = 0;
	int len = str_len(str);
	char aux;
	
	while(i < str_len(str) / 2)
	{
		aux = str[len - 1];
		str[len -1] = str[i];
		str[i] = aux;
		i++;
		len--;
	}
	return str;
}
