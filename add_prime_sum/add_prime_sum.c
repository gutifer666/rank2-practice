#include <stdio.h>
#include <unistd.h>

int is_digit(char c)
{
	if(c >= '0' && c <= '9')
		return 1;
	return 0;
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int res = 0;

	while(str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	if((str[i] == '+') || (str[i] == '-'))
	{
		if(str[i] == '-')
			sign = sign * (-1);
		i++; 
	}
	while(str[i] && is_digit(str[i]))
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

int is_prime(int num)
{
	int i = num - 1;	

	if(num == 1)
		return 0;
	if(num <= 3)
		return 1;
	while(i > 1)
	{
		if(num % i == 0)
			return 0;
		i--;
	}
	return 1;
}

int add_prime_sum(int num)
{
	int i = num;
	int sum = 0;

	while(i > 0)
	{
		if(is_prime(i))
			sum = sum + i;
		i--;
	}
	return (sum);
}

void ft_putnum(int num)
{
	if (num > 9)
	{
		ft_putnum(num / 10);
		ft_putchar((num % 10) + '0');
	}
	else
		ft_putchar(num + '0');
}

int main(int ac, char **av)
{
	int prime_sum = 0;
	int num;
	
	if(ac == 2)
	{
		num = ft_atoi(av[1]);
		ft_putnum(num);
		if(num < 0)
			ft_putchar('0');
		ft_putchar('\n');

		prime_sum = add_prime_sum(num);
		ft_putnum(prime_sum);
	}
	else
	{
		ft_putnum(prime_sum);
	}
	write(1, "\n", 1);
	return (0);
}
