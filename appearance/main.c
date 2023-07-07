#include <unistd.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept);
size_t	ft_strcspn(const char *s, const char *reject);

int main(int ac, char **av)
{
	char *str1 = "cabbage";
	char *str2 = "abc";
	char *str3 = "This is the source string";
	char *str4 = "axli";
	size_t spn;
	size_t cspn; 
	
	spn = ft_strspn(str1, str2);
	printf("%zu", spn);
	write(1, "\n", 1);
	cspn = ft_strcspn(str3, str4);
	printf("%zu", cspn);
	write(1, "\n", 1);
	return 0;	
}
