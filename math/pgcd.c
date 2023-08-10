#include <stdlib.h>
#include <stdio.h>

void	pgcd(char *str1, char *str2)
{
	unsigned int	op1 = atoi(str1);
	unsigned int	op2 = atoi(str2);
	unsigned int	res;

	if(op1 > op2)
		res = op2;
	else
		res = op1;
	
	while(op1 % res != 0 || op2 % res != 0)
		res--;
	printf("%u", res);
}

int	main(int arc, char **arv)
{
	if(arc == 3)
		pgcd(arv[1], arv[2]);
	printf("\n");
	return 0;
}
