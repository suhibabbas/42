#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if(min >= max)
	{
		range = NULL;
		return (range);
	}
	range = malloc(sizeof(int) *((max - min) + 1));
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
/*
int	main()
{
	int	*range;
	int	i;

	i = 0;
	range = ft_range(50, 100);

	while (i < (100 - 50))
	{
		printf("%d\n", range[i]);
		i++;

	}
	return (0);
}
*/
