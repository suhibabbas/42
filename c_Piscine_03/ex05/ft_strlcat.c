#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int     index;

	index = 0;
	while (*str)
	{
		index++;
		str++;
	}
	return index;
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	destlen;
	unsigned int	i;

	destlen = ft_strlen(dest);
	if ((unsigned int) destlen <= size)
	{
		return ((unsigned int)(destlen + size));
	}

	i = 0;
	while (src[i] != '\0' && (destlen + i) > (size - 1))
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return ((unsigned int)(destlen + ft_strlen(src)));
}
/*
int main()
{
	char src[] = "suhaib";
	char dest[20] = "abbaas";
	unsigned int size = 5;
	unsigned int result;
	char 	buf[2];

	result = ft_strlcat(dest, src, size);
	buf[0] = (result / 10) + '0';
	buf[1] = (result % 10) + '0';
	write (1, buf, 2);
	return 0;
}
*/
