#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	while(str[i])
		i++;
	return i;
}

int	is_space(char c)
{
	if(c == ' ' || c == '\t' || c == '\n')
		return 1;
	return 0;
}

void	ft_putstr(char *str)
{
	int	i = 0;

	while(str[i])
	{
		write(1, &str[i], 1);	
		i++;
	}
}
char	*extract_word(char *str, int begin_word, int end_word)
{
	int	i = 0;
	char	*word;

	word = (char *) malloc((end_word - begin_word + 1) * sizeof(char));
	if(!word)
		return(NULL);


	while(i < (end_word - begin_word))
	{
		word[i] = str[begin_word + i];
		i++;
	}
	word[i] = '\0';

	return (word);
}

void	rev_wstr(char *str)
{
	int	index;
	int	begin_word;
	int	end_word;

	index = ft_strlen(str);
	while(index >= 0)
	{
		while(str[index] != '\0' && is_space(str[index]))
			index--;

		end_word = index;

		while(str[index] && !is_space(str[index]))
			index--;
		begin_word = index + 1;

		int	flag;
		flag = begin_word + 1;
	
		ft_putstr(extract_word(str, begin_word, end_word));
		index--;

		if(flag != 0)
			write(1, " ", 1);
		
	}	
}

int	main(int arc, char **arv)
{
	if(arc == 2)
		rev_wstr(arv[1]);
	write(1, "\n", 1);

	return (0);
}
