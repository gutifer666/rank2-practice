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

void inter(char *str1, char *str2)
{
	int index = 0;

	while(str1[index])
	{
		// Si el caracter no se encontró antes         y   se encuentra en el segundo str
		if(pos_char_in_str(str1[index], str1) >= index && is_char_in_str(str1[index], str2))
			write(1, &str1[index], 1);
		index++;
	}
}

int main(int arc, char **arv)
{
	if (arc == 3)
	{
		inter(arv[1], arv[2]);	
	}
	write(1, "\n", 1);
	return 0;

}
