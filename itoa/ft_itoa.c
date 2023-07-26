#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	if(nbr == -2147483648)
		return ("-2147483648\0");
	int n = nbr;
	int len = 0;
	
	// Si es negativo o 0, aumentamos la longitud
	if(nbr <= 0)
		len++;
	
	// Longitud
	while(n)
	{
		len++;
		n = n/10;
	}
	
	// Memoria
	char *res = (char *)malloc(sizeof(char) * (len + 1));
	if(res == NULL)
		return NULL;

	// Fin de cadena
	res[len] = '\0';

	// Si es 0
	if(nbr == 0)
	{
		res[0] = '0';
		return res;
	}

	// Si es negativo
	if(nbr < 0)
	{
		res[0] = '-';
		nbr = nbr * (-1);
	}

	// Imprimir
	while(nbr)
	{
		res[--len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
		
	return res;
		
}
