#include <unistd.h>
int	ft_strlen(char *str)
{
	int	index;
	
	index = 0;
	while (*str)
	{
		index++;
		str++;
	}
	return (index);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int 	destlen;
	unsigned int	i;

	destlen = ft_strlen(dest);
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';

	return (dest);
}
/*
int	main()
{
	char src[] = "Abbaas";
	char dest[10] = "Suhaib";
	unsigned int nb;

	nb = 4;
	ft_strncat(dest, src, nb);
	write(1, dest, 10);
	return (0);
}
*/
