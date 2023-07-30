#include <stdlib.h>

int	is_space(char c)
{
	if(c == ' ' || c == '\t' || c == '\n')
		return (1);
	return  (0);
}

int	count_words(char *str)
{
	int	i = 0;
	int	n_words = 0;

	while(str[i])
	{
		while(str[i] && is_space(str[i]))
			i++;
		while(str[i] && !is_space(str[i]))
		{
			i++;	
			if(is_space(str[i]) || str[i] == '\0')
				n_words++;
		}
	}
	
	return (n_words);
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

char    **ft_split(char *str)
{
	char	**strings;
	int	n_words;
	int	index_str;
	int	begin_word;
	int	end_word;

	n_words = count_words(str);

	strings = (char **) malloc(n_words + 1 * sizeof(char *));
	if(!strings)
		return (NULL);
	
	index_str = 0;
	n_words = 0;
	while(str[index_str])
	{
		while(str[index_str] && is_space(str[index_str]))
			index_str++;
		begin_word = index_str;
		
		while(str[index_str] && !is_space(str[index_str]))
			index_str++;
		end_word = index_str;
		
		strings[n_words] = extract_word(str, begin_word, end_word);
	}
	strings[n_words] = NULL;	
	
	return (strings);
}
