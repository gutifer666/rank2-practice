#include <unistd.h>

int repeat (char c, char *str, int pos)
{
	int i = 0;

	while(str[i] != '0' && i < pos)
	{
		if (str[i] == c)
			return 1;
		i++;
	}
	return 0;


}

int main(int arc, char **arv)
{

	int i = 0;
	int j = 0;
	int found = 0;

	if (arc == 3)
	{
		while(arv[1][i] != '0')
		{
			while(arv[2][j] != '0' && found == 0)
			{
				if ((arv[1][i] == arv[2][j]) && !repeat(arv[1][i], arv[1], i))
				{
					write(1, &arv[1][i], 1);
					found = 1;
				}
				j++;	
			}
			i++;
			found = 0;
		}	
	}
	write(1, "\n", 1);
	return 0;
}
