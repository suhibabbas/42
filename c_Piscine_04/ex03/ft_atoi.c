#include <unistd.h>
void ft_putnbr(int nb);

int	ft_atoi(char *str)
{
	int	nb;
	int	sign;

	nb = 0;
	sign = 1;
	while ((*str >= '0' && *str <= '9')
			|| (*str >= 9 && *str <= 13)
			|| *str == '+'
			|| *str == '-' || *str == 32)
	{
		if (*str == '-')
			sign *= -1;
		if (*str >= '0' && *str <= '9')
		{
			nb = nb * 10 + (*str - '0');
		}
		str++;
	}
	return nb * sign;

}

int main(int argc, char **argv)
{
	int	nb;
	if (argc != 2)
	{
		write (1, "0", 1);
		return (0);
	}
	nb = ft_atoi(argv[1]);
	ft_putnbr(nb);
	return 0;
}
