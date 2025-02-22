#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while(i < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}

int main()
{
	char src[] = "the text has been copyed";
	char dest[50];

	ft_strncpy(dest, src, 10);
	write (1, dest, 10);

	return 0;
}
