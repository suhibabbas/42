#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	index;
	char	buf[11];
	
	index = 0;
	if (nb < 0)
	{
		write (1, "-", 1);
			nb = -nb;
	}
	while (nb > 0)
	{
		buf[index] = (nb % 10) + '0';
		nb = nb / 10;
		index++;
	}
	while (index  > 0)
	{
		write (1, &buf[index - 1], 1);
		index--;
	}	
}
/*
int	main()
{
	int	nb;

	nb = -123;
	ft_putnbr(nb);
	return 0;
}
*/
