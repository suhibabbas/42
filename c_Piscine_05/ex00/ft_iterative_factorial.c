#include <stdio.h>
void    ft_putnbr(int nb);

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	i = 1;
	fact = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		fact *= i;
		i++;
	}
	return (fact);
}
/*
int	main()
{
	int	num;

	num = ft_iterative_factorial(31);
	printf("%d\n", num);
	ft_putnbr(num);
	return (0);
}
*/
