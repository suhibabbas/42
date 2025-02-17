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
	return index;
}

char	*ft_strcat(char *dest, char *src)
{
	int	destlen;
	int	i;

	i = 0;
	destlen = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char src[666666] = "ABC";
	char dest[] = "ZXY";
	
	ft_strcat(dest, src);

	write (1, dest, 6);
	return (0);
}
*/
