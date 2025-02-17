#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
		size--;
	}
	if (size != 0)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
int	main()
{
	char src[] = "test";
	char dest[3];
	unsigned int	i;
	unsigned int	x;
	char	result;
	
	i = 3;
	x = ft_strlcpy(dest, src, i);
	result = x + '0';
	write (1, &result, 1);
	return 0;
}
*/
