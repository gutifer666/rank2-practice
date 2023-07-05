#include <unistd.h>

int pos_char_in_str(char c, char *str)
{
	int pos = 0;

	while(str[pos])
	{
		if(str[pos] == c)
			return pos;
		pos++;
	}
	return pos;
}

int is_char_in_str(char c, char *str)
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

void ft_union(char *str1, char *str2)
{
	int i = 0;
	int j = 0;

	while(str1[i])
	{
		// Si el caracter no estaba previamente
		if(pos_char_in_str(str1[i], str1) >= i)
			write(1, &str1[i], 1);
		i++;
	}
	while(str2[j])
	{
		// Si el c no estaba previamente ni pertenece a la cadena anterior
		if(pos_char_in_str(str2[j], str2) >= j && !is_char_in_str(str2[j], str1))
			write(1, &str2[j], 1);
		j++;
	}	
}

int main(int arc, char **arv)
{
	if(arc == 3)
	{
		ft_union(arv[1], arv[2]);
	}
	write(1, "\n", 1);
	return 0;
}
