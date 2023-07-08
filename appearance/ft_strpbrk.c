int char_in_str(char c, const char *str)
{
	int i = 0;

	while(str[i])
	{
		if(str[i] == c)
			return 1;
		i++;
	}
	return 0;
}

int pos_in_str(char c, const char *str)
{
	int i = 0;

	while(str[i])
	{
		if(str[i] == c)
			return i;
		i++;
	}
	return 0;
}

char *ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;

	while(s2[i])
	{
		if(char_in_str(s2[i], s1))
		{
			return *s1[pos_in_str(s2[i], s1)];
		}
		else
			i++;
	}
	return &s1[0];

}
