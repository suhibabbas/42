#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;

	while (*str)
	{
		index++;
		str++;
	}
	
	return index;
}

int	main()
{
	char str[] = "Hello, World!\n";

	int	strlen;

	strlen = ft_strlen(str);
	
	printf("%d", strlen);

	return 0;
}	
