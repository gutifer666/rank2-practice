#include <stdlib.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	index;

	if (!s1 || !s2)
		return (NULL);
	index = 0;
	while (*s1)
	{
		index = 0;
		while (s2[index])
		{
			if (*s1 == s2[index])
				return ((char *)s1);
			index++;
		}
		s1++;
	}
	return (NULL);
}
