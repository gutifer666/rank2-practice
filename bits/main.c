#include <unistd.h>

void		print_bits(unsigned char octet);
unsigned char	swap_bits(unsigned char octet);
unsigned char	reverse_bits(unsigned char octet);

int	main(int ac, char **av)
{
	unsigned char n;

	n = 65;
	print_bits(n);
	write(1, "\n", 1);
	n = swap_bits(n);
	print_bits(n);
	write(1, "\n", 1);
	n = reverse_bits(n);
	print_bits(n);
	return 0;
}
