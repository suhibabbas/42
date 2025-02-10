#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char c1[] = "hello, world!";
	char c2[15];

	ft_strcpy(c2, c1);

	write (1, c2, 13);
	return 0;
}
