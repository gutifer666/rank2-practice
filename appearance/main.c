#include <unistd.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept);
size_t	ft_strcspn(const char *s, const char *reject);
char *ft_strpbrk(const char *s1, const char *s2);

int main(int ac, char **av)
{
	char *str1 = "cabbage";
	char *str2 = "abc";
	char *str3 = "This is the source string";
	char *str4 = "axli";
	char *str5 = "A Blue Danube";
	char *str6 = "ab";
	size_t spn;
	size_t cspn; 
	char *pbrk = "";
	
	spn = ft_strspn(str1, str2);
	printf("%zu", spn);
	write(1, "\n", 1);
	cspn = ft_strcspn(str3, str4);
	printf("%zu", cspn);
	write(1, "\n", 1);
	pbrk = ft_strpbrk(str5, str6);
	printf("%s", pbrk);
	write(1, "\n", 1);
	return 0;	
}
