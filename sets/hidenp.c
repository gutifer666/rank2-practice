#include <unistd.h>

char hidenp(char *wd, char *str)
{
	int i = 0;
	int j = 0;
	int counter;

	while(wd[i] && str[j])
	{
		if(wd[i] == str[j])
			i++;
		j++;
	}
	if(wd[i] == '\0')
		return '1';
	return '0';
}

int main(int ac, char **av)
{
	char solution;

	if(ac == 3)
	{	
		solution = hidenp(av[1], av[2]);
		write(1, &solution, 1);
	}
	write(1, "\n", 1);
	return 0;
}
