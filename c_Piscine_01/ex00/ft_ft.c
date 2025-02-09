#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *ptr)
{
	*ptr = 42;
}

int	main()
{
	int	num;

	num = 0;
	ft_ft(&num);

	printf("%d", num);

	return 0;
}
