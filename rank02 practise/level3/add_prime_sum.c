#include <unistd.h>

int is_prime(int n)
{
	int i = 2;
	if (n == 0 || n == 1)
		return (0);
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int ft_atoi(char *s)
{
	int result = 0;
	int i = 0;
	int sign = 1;

	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] && s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (sign *result);
}

void ft_putnbr(int i)
{
	if (i > 9)
		ft_putnbr(i / 10);
	char a = i % 10 + '0';
	write(1, &a, 1);
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int res = 0;
		int a = ft_atoi(argv[1]);
		if (a > 0)
		{
			while (a > 0)
			{
				if(is_prime(a))
					res += a;
				a--;
			}
			ft_putnbr(res);
			write (1, "\n", 1);
			return (0);
		}	
	}
	write (1, "0\n", 2);
	return (0);
}