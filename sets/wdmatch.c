#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void wdmatch(char *wd, char *str)
{
	int i = 0;
	int j = 0;
	int counter = 0;
	int encontrado = 0;

	while(wd[i])
	{
		while(str[j] && !encontrado)
		{
			if(wd[i] == str[j])
			{
				encontrado = 1;
				counter++;
			}
			j++;		
		}
		encontrado = 0;
		i++;
	}
	if(ft_strlen(wd) == counter)
		ft_putstr(wd);
}

int main(int arc, char **arv)
{
	if(arc == 3)
		wdmatch(arv[1], arv[2]);
	write(1, "\n", 1);
	return 0;
}
