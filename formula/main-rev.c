#include <stdio.h>
#include <string.h>

char	*ft_strrev(char *str);

int	main(void)
{
	char	*cad;
	char	*cad1;

	cad = "0123456789";
	printf("FT_STRREV\n");
	printf("Cadena: %s\n", cad);
	cad1 = strdup(cad);
	ft_strrev(cad1);
	printf("Cadena invertida: %s\n", cad1);
	return (0);
}
