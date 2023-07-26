#include <unistd.h>

void alpha_mirror(char *str)
{
	int i = 0;
	
	while(str)
	{
		if(str[i] >= 65 && str[i]<= 90)
		{
			if(str[i] < 'N')
				write(1, &('A' + 'Z' - str[i]), 1);
			if(str[i] > 'M')
				write(1, &('A' - 'Z' + str[i]), 1);
		}
		else if(str[i] >= 97 && str[i] <= 122)
		{
			
			if(str[i] < 'n')
				write(1, str[i] + 'z' -13, 1);
			if(str[i] > 'm')
				write(1, str[i] - 'z' + 13);
		}
		else
			write(1, str[i], 1);
		i++;
	}
}

int main(int arc, char **arv)
{

	if(arc == 2)
	{
		alpha_mirror(*arv[1]);
	}
	write(1, "\n", 1);
	return 0;
}
