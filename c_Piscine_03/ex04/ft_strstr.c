#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		char	*ch1;
		char	*ch2;

		ch1 = str;
		ch2 = to_find;
		while (*ch1 && *ch2 && (*ch1 == *ch2))
		{
			ch1++;
			ch2++;
		}
		if (*ch2 == '\0')
		{
			return str;
		}
		str++;
	}
	return (NULL);
}
/*
int	main()
{
	char str[] = "this is a test case";
	char to_find[] = "test";
	char *result;

	result = ft_strstr(str, to_find);
	write (1, result, 9);
	return (0);
}
*/
