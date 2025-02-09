#include <unistd.h>
#include <stdio.h>

void	ft_print_combn(int n)
{
	int	i;

	i = 0;
	//     o   4
	while (i < n)
	{
		char	c;

		c = i + '0';
		write (1, c, 1); //out=0123
		i++;
	}
		
}

int main()
{
	ft_print_combn(4);
	return 0;
}
