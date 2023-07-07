#include <stdio.h>

int char_is_in_str(char c, const char *str)
{
	int i = 0;

	while(str[i])
	{
		if(str[i] == c)
		{
			return 1;
		}
		i++;
	}
	return 0;
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t index = 0;

	while(s[index])
	{
		if(char_is_in_str(s[index], reject))
			return index;
		index++;
	}
	return index;
}
